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
#include "MyEnemy.h"

#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
// Sets default values
AMyCharacter::AMyCharacter():attackflag(false),MaxWalkSpeed(10000), defaultWalkSpeed(500)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

	EnemySearch = CreateDefaultSubobject<UBoxComponent>(TEXT("EnemySearch"));
	EnemySearch->InitBoxExtent(FVector(590.f,230.f,90.f));
	EnemySearch->SetHiddenInGame(false);
	
	//CharacterMovementの設定
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 500;//defaultWalkSpeed参照
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
	
	Testflag = false;
	Hit = false;
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector playerLocation(this->GetActorLocation().X, this->GetActorLocation().Y, this->GetActorLocation().Z);
	EnemySearch->SetWorldLocationAndRotation(playerLocation,this->GetActorRotation());
}

bool AMyCharacter::GetIsAttack()
{
	return attackflag;
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveRightLeft", this, &AMyCharacter::MoveRightLeft);
	PlayerInputComponent->BindAxis("MoveUpDown", this, &AMyCharacter::MoveUpDown);
	PlayerInputComponent->BindAxis("Attack", this, &AMyCharacter::Attack);
}

void AMyCharacter::MoveRightLeft(float Val)
{
	if (!attackflag)
	{
		AddMovementInput(FVector(0.f, -1.f, 0.f), Val);
	}
}

void AMyCharacter::MoveUpDown(float Val)
{
	if (!attackflag)
	{
		AddMovementInput(FVector(-1.f, 0.f, 0.f), Val);
	}
}

void AMyCharacter::Attack(float val)
{
	if (val == 1.0f)
	{
		attackflag = true;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = defaultWalkSpeed;
		attackflag = false;
	}

	if (attackflag)
	{
		//tagを使って敵を探す

		for (TActorIterator<AMyEnemy> it(GetWorld()); it; ++it)
		{
			AMyEnemy* TargetEnemy = *it;

			
			//if (TargetEnemy->ActorHasTag(FName("Enemy")))
			//{
			//	FVector enemyVec = TargetEnemy->GetActorLocation();
			//	FVector playerVec = this->GetActorLocation();

			//	FVector vec = enemyVec - playerVec;

			//	FVector l(enemyVec.X, enemyVec.Y + 300, playerVec.Z);

			//	if (!Hit)
			//	{
			//		GetCharacterMovement()->MaxWalkSpeed = MaxWalkSpeed;
			//	}
			//	else
			//	{
			//		GetCharacterMovement()->MaxWalkSpeed = defaultWalkSpeed;
			//	}

			//	AddMovementInput(vec, 1);
			//}
		}
	}
	
}

