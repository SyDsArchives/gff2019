// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

class ATimeActor;
struct FVector;
//struct FDataTime;
UCLASS(config = Game)
class GFF_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Attack, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* EnemySearch;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Attack, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* RightPunchCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Attack, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* LeftPunchCollision;

	FVector EnemyLocation;
	
	float LastTime;

	float CurrentCoolTime;

	float CoolTime;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Called for side to side input */
	void MoveRightLeft(float Val);
	void MoveUpDown(float Val);

	void Attack_Action();
	void AttackEnd();

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	bool IsMoveAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool attackflag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool InitMoveLimit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool ishit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxWalkSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float defaultWalkSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float enemyDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int enemyNum;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ComboAttack;

public:	

	AMyCharacter();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	void OnTestOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	void OnTestOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);

	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	void PunchBeginOverlap(class UPrimitiveComponent* OverlappedComponent,class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	void PunchEndOverlap(class UPrimitiveComponent* OverlappedComponent,class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);

	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	bool GetIsAttack();
	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	void SetIsAttack(bool _IsAttack);

	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	bool GetIsHit();

	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	void AttackInertia(FVector AttackDirection);
};
