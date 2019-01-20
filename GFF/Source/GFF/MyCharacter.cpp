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
AMyCharacter::AMyCharacter():attackflag(false), IsMoveAttack(false), InitMoveLimit(true), IsCombatRange(false),
MaxWalkSpeed(10000.f), defaultWalkSpeed(500.f), LastTime(0.f), CurrentCoolTime(0.f), CoolTime(0.f)
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

	RightPunchCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RightPunchCollision"));
	RightPunchCollision->InitBoxExtent(FVector(20.f, 10.f, 10.f));
	RightPunchCollision->SetupAttachment(GetRootComponent());
	RightPunchCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RightPunchCollision->SetHiddenInGame(false);
	FScriptDelegate RightPunchDelegateBegin;
	RightPunchDelegateBegin.BindUFunction(this, "PunchBeginOverlap");
	RightPunchCollision->OnComponentBeginOverlap.Add(RightPunchDelegateBegin);
	FScriptDelegate RightPunchDelegateEnd;
	RightPunchDelegateBegin.BindUFunction(this, "PunchEndOverlap");
	RightPunchCollision->OnComponentEndOverlap.Add(RightPunchDelegateEnd);

	LeftPunchCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftPunchCollision"));
	LeftPunchCollision->InitBoxExtent(FVector(20.f, 10.f, 10.f));
	LeftPunchCollision->SetupAttachment(GetRootComponent());
	LeftPunchCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	LeftPunchCollision->SetHiddenInGame(false);
	FScriptDelegate LeftPunchDelegateBegin;
	LeftPunchDelegateBegin.BindUFunction(this, "PunchBeginOverlap");
	LeftPunchCollision->OnComponentBeginOverlap.Add(LeftPunchDelegateBegin);
	FScriptDelegate LeftPunchDelegateEnd;
	LeftPunchDelegateEnd.BindUFunction(this, "PunchEndOverlap");
	LeftPunchCollision->OnComponentEndOverlap.Add(LeftPunchDelegateEnd);

	//CharacterMovementの設定
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 500;//defaultWalkSpeed参照
	GetCharacterMovement()->MaxFlySpeed = 600.f;

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

	if (CoolTime != 0)
	{
		CurrentCoolTime = NowTime - LastTime;
		//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("%f"), CurrentCoolTime));
	}

	if (CoolTime <= CurrentCoolTime)
	{
		CoolTime = 0.f;
		LastTime = 0.f;
		CurrentCoolTime = 0.f;
		attackflag = false;
		RightPunchCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		LeftPunchCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
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
			//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::SanitizeFloat(enemyDistance));
		}
	}

	if (attackflag && enemyNum != 0)
	{
		IsMoveAttack = true;
	}
	else if (!attackflag)
	{
		IsMoveAttack = false;
	}

	if (IsMoveAttack && !IsCombatRange)
	{
		FVector playerVec = this->GetActorLocation();
		FVector vec = EnemyLocation - playerVec;
		AddMovementInput(vec, 1);
	}
}

void AMyCharacter::OnTestOverlapBegin(AActor* OtherActor, UPrimitiveComponent * OtherComponent, int32 OtherBodyIndex, bool bFromSweep, FHitResult & SweepResult)
{
	if (OtherComponent->ComponentHasTag("Enemy"))
	{
		++enemyNum;
		//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Add"));
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
		IsMoveAttack = false;
		enemyDistance = -1;
	}
	
}

void AMyCharacter::PunchBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, int32 OtherBodyIndex, bool bFromSweep, FHitResult & SweepResult)
{
	if (OtherComponent->ComponentHasTag("Enemy"))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("Punch!!!!!"));
	}
}

void AMyCharacter::PunchEndOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, int32 OtherBodyIndex)
{
}

bool AMyCharacter::GetIsAttack()
{
	return attackflag;
}

void AMyCharacter::SetIsAttack(bool _IsAttack)
{
	attackflag = _IsAttack;
}

bool AMyCharacter::GetIsCombatRange()
{
	return IsCombatRange;
}

void AMyCharacter::AttackInertia(FVector AttackDirection)
{
	FVector MovementLocation(AttackDirection.X - this->GetActorLocation().X,
		AttackDirection.Y - this->GetActorLocation().Y,
		AttackDirection.Z - this->GetActorLocation().Z);

	AddMovementInput(MovementLocation, 1.f);
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveRightLeft", this, &AMyCharacter::MoveRightLeft);
	PlayerInputComponent->BindAxis("MoveUpDown", this, &AMyCharacter::MoveUpDown);

	PlayerInputComponent->BindAction("Attack_Action", IE_Pressed, this, &AMyCharacter::Attack_Action);
	PlayerInputComponent->BindAction("Attack_Action", IE_Released, this, &AMyCharacter::AttackEnd);
}

void AMyCharacter::MoveRightLeft(float Val)
{
	if (!attackflag && !InitMoveLimit)
	{
		AddMovementInput(FVector(0.f, -1.f, 0.f), Val);
	}

	//AddMovementInput(FVector(0.f, -1.f, 0.f), Val);
}

void AMyCharacter::MoveUpDown(float Val)
{
	if (!attackflag && !InitMoveLimit)
	{
		AddMovementInput(FVector(-1.f, 0.f, 0.f), Val);
	}

	//AddMovementInput(FVector(-1.f, 0.f, 0.f), Val);
}

void AMyCharacter::Attack_Action()
{
	float AttackSpeed = -3.f;

	if (CoolTime == 0 && !InitMoveLimit)
	{
		CoolTime = 0.3f;
		attackflag = true;
		RightPunchCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);//AttackFlagをtrueにした後にCollisionを追加する
		LastTime = GetWorld()->GetTimeSeconds();//攻撃時の時間を取得


		//if (enemyNum != 0)
		//{
		//	//FVector playerVec = this->GetActorLocation();
		//	//FVector vec = EnemyLocation - playerVec;
		//	//AddMovementInput(vec, 1);
		//	//if (!ishit)
		//	//{
		//	//	GetCharacterMovement()->MaxWalkSpeed = MaxWalkSpeed;
		//	//}
		//	//else
		//	//{
		//	//	GetCharacterMovement()->MaxWalkSpeed = defaultWalkSpeed;
		//	//}
		//	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::FromInt(enemyNum));
		//	
		//	//AddActorWorldOffset(EnemyLocation, true);
		//}
	}
	
}

void AMyCharacter::AttackEnd()
{
	//GetCharacterMovement()->MaxWalkSpeed = defaultWalkSpeed;
	//ishit = false;

	//if (CoolTime == 0)
	//{
	//	
	//}
	
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("%f"), LastTime));
	
}

