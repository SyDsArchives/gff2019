// Fill out your copyright notice in the Description page of Project Settings.

#include "MyEnemy.h"
#include "Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

// Sets default values
AMyEnemy::AMyEnemy():isFound(false), IsDamaged(false), IsDead(false), IsKnockBack(false),
InvincibleTime(0), Vitality(10), BeforeVitality(10), DamageCount(0),
PlayerVec(nullptr)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FScriptDelegate DelegateBegin;
	DelegateBegin.BindUFunction(this, "OnBeginOverlap");
	GetCapsuleComponent()->OnComponentBeginOverlap.Add(DelegateBegin);

	FScriptDelegate DelegateEnd;
	DelegateBegin.BindUFunction(this, "OnEndOverlap");
	GetCapsuleComponent()->OnComponentEndOverlap.Add(DelegateEnd);

	GetCharacterMovement()->bOrientRotationToMovement = 1;

}

// Called when the game starts or when spawned
void AMyEnemy::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsDamaged)
	{
		if (--InvincibleTime <= 0)
		{
			IsDamaged = false;
			DamageCount = 0;
		}
	}

	if (Vitality <= 0)
	{
		IsDead = true;
	}

	if (IsDamaged && DamageCount == 3)
	{
		GetCharacterMovement()->bOrientRotationToMovement = 0;
	}
	else if(GetCharacterMovement()->bOrientRotationToMovement != 1)
	{
		GetCharacterMovement()->bOrientRotationToMovement = 1;
	}
}

// Called to bind functionality to input
void AMyEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

bool AMyEnemy::GetisFound()
{
	return isFound;
}

void AMyEnemy::SetisFound(bool flag)
{
	isFound = flag;
}

bool AMyEnemy::GetIsDamaged()
{
	return IsDamaged;
}

bool AMyEnemy::GetIsDead()
{
	return IsDead;
}

void AMyEnemy::OnBeginOverlap(UPrimitiveComponent * OverlapComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, int32 OtherBodyIndex, bool bFromSweep, FHitResult & SweepResult)
{
	if (OtherComponent->ComponentHasTag("Attack"))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("BeginOverlap"));
		BeforeVitality = Vitality;

		IsDamaged = true;

		++DamageCount;
		--Vitality;

		InvincibleTime = 50;

		float Impulse;

		FVector myVec = this->GetActorForwardVector();
		if (myVec.Equals(OtherActor->GetActorForwardVector(), 1.f))
		{
			//DamageCount = 0;
			Impulse = 2000;
			FVector tmpVec(this->GetActorForwardVector().X * Impulse,
				this->GetActorForwardVector().Y * Impulse,
				this->GetActorForwardVector().Z * Impulse);
			LaunchCharacter(tmpVec, false, false);
		}
		else if(DamageCount == 3)
		{
			Impulse = -2000;
			FVector tmpVec(this->GetActorForwardVector().X * Impulse,
				this->GetActorForwardVector().Y * Impulse,
				this->GetActorForwardVector().Z * Impulse);
			LaunchCharacter(tmpVec, false, false);
		}
	}
}

void AMyEnemy::OnEndOverlap(UPrimitiveComponent * OverlapComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, int32 OtherBodyIndex)
{
}

