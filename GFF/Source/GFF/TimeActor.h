// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimeActor.generated.h"

UCLASS()
class GFF_API ATimeActor : public AActor
{
	GENERATED_BODY()

	int NowTime;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	ATimeActor();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int GetNowTime();
};
