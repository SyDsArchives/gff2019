// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyEnemy.generated.h"

UCLASS()
class GFF_API AMyEnemy : public ACharacter
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool isFound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isDamaged;

	int InvincibleTime;

public:	
	AMyEnemy();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "MyEnemyBlueprint")
	bool GetisFound();
	UFUNCTION(BlueprintCallable, Category = "MyEnemyBlueprint")
	void SetisFound(bool flag);

	UFUNCTION(BlueprintCallable, Category = "MyEnemyBlueprint")
	bool GetisDamaged();

	UFUNCTION(BlueprintCallable, Category = "MyEnemyBlueprint")
	void OnBeginOverlap(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable, Category = "MyEnemyBlueprint")
	void OnEndOverlap(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);

};
