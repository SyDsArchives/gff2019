// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Public/EngineUtils.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"//staticMesh
#include "Runtime/Engine/Classes/Components/BoxComponent.h"//BoxCollisionComponent
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

#include "MyEnemy.h"

#include "EngineGlobals.h"//ログ出力
#include "Runtime/Engine/Classes/Engine/Engine.h"

#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

#include "Runtime/Core/Public/Misc/DateTime.h"
#include "Runtime/Core/Public/Misc/Timespan.h"


// Sets default values
AMyCharacter::AMyCharacter():attackflag(false),MaxWalkSpeed(10000), defaultWalkSpeed(840), LastTime(0), CurrentCoolTime(0), CoolTime(0)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//PrimaryActorTick.TickInterval = 1.f;

	//カプセルコンポーネントのサイズを設定
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//カメラ用のスプリングアームを作成。カプセルコンポーネントにアタッチ
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bAbsoluteRotation = true; // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f, 0.f, 75.f);
	CameraBoom->RelativeRotation = FRotator(0.f, 180.f, 0.f);

	//カメラを作成。スプリングアームにアタッチ
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	//索敵用のBoxCollisionの設定
	EnemySearch = CreateDefaultSubobject<UBoxComponent>(TEXT("EnemySearch"));
	EnemySearch->InitBoxExtent(FVector(300.f, 230 ,90.f));
	EnemySearch->bDynamicObstacle = true;
	EnemySearch->SetupAttachment(GetRootComponent());
	EnemySearch->BodyInstance.SetCollisionProfileName("MyCollisionProfile");
	EnemySearch->SetHiddenInGame(false);
	EnemySearch->SetGenerateOverlapEvents(true);
	//BoxCollisionComponentにコールバック関数を登録
	FScriptDelegate DelegateBegin;
	DelegateBegin.BindUFunction(this, "OnTestOverlapBegin");
	EnemySearch->OnComponentBeginOverlap.Add(DelegateBegin);
	FScriptDelegate DelegateEnd;
	DelegateEnd.BindUFunction(this, "OnTestOverlapEnd");
	EnemySearch->OnComponentEndOverlap.Add(DelegateEnd);
	
	//CharacterMovementの設定
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 500;//defaultWalkSpeed参照
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	ishit = false;//仮で敵の当たり判定を取得

	enemyDistance = -1.f;
	enemyNum = 0;
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	EnemyLocation = this->GetActorLocation();
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector playerLocation(this->GetActorLocation().X, this->GetActorLocation().Y, this->GetActorLocation().Z);

	float NowTime = GetWorld()->GetTimeSeconds();

	if (CoolTime != 0.f)
	{
		CurrentCoolTime = NowTime - LastTime;
		//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("%f"), CurrentCoolTime));
	}
	
	if (attackflag && CoolTime <= CurrentCoolTime)
	{
		CoolTime = 0.f;
		LastTime = 0.f;
		attackflag = false;
	}

	//一番近い敵との距離を取得する
	for (TActorIterator<AMyEnemy> it(GetWorld()); it; ++it)
	{
		if (enemyNum >= 2)
		{
			continue;
		}

		AMyEnemy* TargetEnemy = *it;

		float vecBetweenDistance = FVector::Dist(TargetEnemy->GetActorLocation(), this->GetActorLocation());

		if (vecBetweenDistance < enemyDistance || enemyDistance == -1.f)
		{
			enemyDistance = vecBetweenDistance;
			EnemyLocation = TargetEnemy->GetActorLocation();
		}
	}
}

void AMyCharacter::OnTestOverlapBegin(AActor* OtherActor, UPrimitiveComponent * OtherComponent, int32 OtherBodyIndex, bool bFromSweep, FHitResult & SweepResult)
{
	if (OtherComponent->ComponentHasTag("Enemy"))
	{
		++enemyNum;
	}
}

void AMyCharacter::OnTestOverlapEnd(AActor * OtherActor, UPrimitiveComponent * OtherComponent, int32 OtherBodyIndex)
{
	if (OtherComponent->ComponentHasTag("Enemy"))
	{
		--enemyNum;
	}

	if (enemyNum == 0)
	{
		EnemyLocation = this->GetActorLocation();
		enemyDistance = -1;
	}
	
}

bool AMyCharacter::GetIsAttack()
{
	return attackflag;
}

bool AMyCharacter::GetIsHit()
{
	return ishit;
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveRightLeft", this, &AMyCharacter::MoveRightLeft);
	PlayerInputComponent->BindAxis("MoveUpDown", this, &AMyCharacter::MoveUpDown);
	//PlayerInputComponent->BindAxis("Attack", this, &AMyCharacter::Attack);

	PlayerInputComponent->BindAction("Attack_Action", IE_Pressed, this, &AMyCharacter::Attack_Action);
}

void AMyCharacter::MoveRightLeft(float Val)
{
	//if (!attackflag)
	//{
	//	AddMovementInput(FVector(0.f, -1.f, 0.f), Val);
	//}

	AddMovementInput(FVector(0.f, -1.f, 0.f), Val);
}

void AMyCharacter::MoveUpDown(float Val)
{
	//if (!attackflag)
	//{
	//	AddMovementInput(FVector(-1.f, 0.f, 0.f), Val);
	//}

	AddMovementInput(FVector(-1.f, 0.f, 0.f), Val);
}

void AMyCharacter::Attack(float val)
{
	float AttackSpeed = -3.f;
	if (val >= 0.1f && CoolTime == 0)
	{
		if (!attackflag)
		{
			attackflag = true;
			LastTime = GetWorld()->GetTimeSeconds();//攻撃時の時間を取得
			//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("%f"), LastTime));
			CoolTime = 0.6f;
		}
		
		if (enemyNum != 0)
		{
			FVector playerVec = this->GetActorLocation();

			FVector vec = EnemyLocation - playerVec;

			/*if (!ishit)
			{
				GetCharacterMovement()->MaxWalkSpeed = MaxWalkSpeed;
			}
			else
			{
				GetCharacterMovement()->MaxWalkSpeed = defaultWalkSpeed;
			}*/

			AddMovementInput(vec, 1);
		}
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = defaultWalkSpeed;
		ishit = false;
	}
}

void AMyCharacter::Attack_Action()
{

	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("ABCD"));

	float AttackSpeed = -3.f;
	if (CoolTime == 0)
	{
		if (!attackflag)
		{
			attackflag = true;
			LastTime = GetWorld()->GetTimeSeconds();//攻撃時の時間を取得
			//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("%f"), LastTime));
			CoolTime = 0.75f;
		}

		if (enemyNum != 0)
		{
			FVector playerVec = this->GetActorLocation();

			FVector vec = EnemyLocation - playerVec;

			/*if (!ishit)
			{
				GetCharacterMovement()->MaxWalkSpeed = MaxWalkSpeed;
			}
			else
			{
				GetCharacterMovement()->MaxWalkSpeed = defaultWalkSpeed;
			}*/

			AddMovementInput(vec, 1);
		}
	}
	/*else
	{
		GetCharacterMovement()->MaxWalkSpeed = defaultWalkSpeed;
		ishit = false;
	}*/
}

