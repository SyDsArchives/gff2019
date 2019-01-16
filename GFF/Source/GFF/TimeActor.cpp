// Fill out your copyright notice in the Description page of Project Settings.

#include "TimeActor.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

// Sets default values
ATimeActor::ATimeActor():NowTime(0)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.0f;
}

// Called when the game starts or when spawned
void ATimeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATimeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	++NowTime;

	FString TextString;
	TextString.FromInt(NowTime);

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TextString);
}

int ATimeActor::GetNowTime()
{
	return NowTime;
}

