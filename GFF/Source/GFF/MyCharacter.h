// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

class AMyEnemy;
struct FVector;
//struct FDataTime;
UCLASS(config = Game)
class GFF_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;//�J�����R���|�[�l���g
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;//�X�v�����O�A�[��
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Attack, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* EnemySearch;//���G�͈�
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Attack, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* RightPunchCollision;//�U������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Attack, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* LeftPunchCollision;//�U������

	FVector EnemyLocation;
	AMyEnemy* TargetEnemy;
	
	float LastTime;
	float CurrentCoolTime;
	float CoolTime;

	//�������Ă���G�̒��Ńv���C���[�Ɉ�ԋ߂��G��T��
	void SearchEnemy();

	//�U����̃v���C���[�̃N�[���^�C���֌W����������
	void PlayerAttackCoolTime();

	//��ԋ߂��G�ɋ߂Â�
	void ApproachEnemy();

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
		bool IsCombatRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsDead;

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Vitality;

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
	void CapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	void CapsuleEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);

	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	bool GetIsAttack();
	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	void SetIsAttack(bool _IsAttack);

	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	bool GetIsCombatRange();

	UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
	void PunchCollisionProceed(FString _LorRHandName);

};
