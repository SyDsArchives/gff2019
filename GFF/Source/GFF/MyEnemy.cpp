// Fill out your copyright notice in the Description page of Project Settings.

#include "MyEnemy.h"
#include "Components/CapsuleComponent.h"
//#include "Runtime/Engine/Classes/Engine/Engine.h"

// Sets default values
AMyEnemy::AMyEnemy():isFound(false), IsDamaged(false), IsDead(false),
InvincibleTime(0), Vitality(10), BeforeVitality(10)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FScriptDelegate DelegateBegin;
	DelegateBegin.BindUFunction(this, "OnBeginOverlap");
	GetCapsuleComponent()->OnComponentBeginOverlap.Add(DelegateBegin);

	FScriptDelegate DelegateEnd;
	DelegateBegin.BindUFunction(this, "OnEndOverlap");
	GetCapsuleComponent()->OnComponentEndOverlap.Add(DelegateEnd);

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
		}
	}

	if (Vitality <= 0)
	{
		IsDead = true;
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

		--Vitality;

		InvincibleTime = 10;
	}
}

void AMyEnemy::OnEndOverlap(UPrimitiveComponent * OverlapComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, int32 OtherBodyIndex)
{
}

