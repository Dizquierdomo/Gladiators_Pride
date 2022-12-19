// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCharacter.h"
#include "Gladiator.generated.h"

UCLASS()
class UNREALENGINE_5_1_0_API AGladiator : public AGameCharacter {
	GENERATED_BODY()

	public:	
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		class USpringArmComponent* CameraArm;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		class UCameraComponent* Camera;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		bool IsWalkingForward;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		bool IsWalkingBackward;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		bool IsWalkingRight;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		bool IsWalkingLeft;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		bool IsJumping;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		int JumpEnergyCost;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
		bool IsBlocking;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
		int BlockEnergyCost;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
		bool IsDodging;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
		int DodgeEnergyCost;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
		bool IsEnemyTargeted;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
		class AActor* EnemyInTargetRange;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
		class AMinotaur* Target;	

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		class AWeapon* Weapon;

private:		
		UPROPERTY(VisibleAnywhere, Category = "Stats")
		int MaxEnergyPoints;

		UPROPERTY(VisibleAnywhere, Category = "Stats")
		int EnergyPoints;

		UPROPERTY(VisibleAnywhere, Category = "Stats")
		float EnergyRecoveryPerSecond;	

		UPROPERTY(VisibleAnywhere, Category = "Stats")
		int MaxSkillPoints;

		UPROPERTY(VisibleAnywhere, Category = "Stats")
		int SkillPoints;

	AGladiator();

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	public:	
		// Called every frame
		virtual void Tick(float DeltaTime) override;

		// Called for forwards/backward input
		UFUNCTION(BlueprintCallable)
		void ForwardMove(float Value);

		// Called for right/left input
		UFUNCTION(BlueprintCallable)
		void RightMove(float Value);

		UFUNCTION(BlueprintCallable)
		float JumpAction();

		UFUNCTION(BlueprintCallable)
		float BlockAction();

		UFUNCTION(BlueprintCallable)
		float DodgeAction();

		UFUNCTION(BlueprintCallable)
		void SetEnemyInTargetRange(AActor* actor);

		UFUNCTION(BlueprintCallable)
		void TargetEnemy();
			
		UFUNCTION(BlueprintCallable)
		float WeaponPreparation();

		UFUNCTION(BlueprintCallable)
		float WeaponAttack();

		UFUNCTION(BlueprintCallable)
		void FocusCameraOnEnemy();

		UFUNCTION(BlueprintCallable)
		void SetMaxEnergyPoints(int value);

		UFUNCTION(BlueprintCallable)
		int GetMaxEnergyPoints();

		UFUNCTION(BlueprintCallable)
		void SetEnergyPoints(int value);

		UFUNCTION(BlueprintCallable)
		int GetEnergyPoints();

		UFUNCTION(BlueprintCallable)
		void SetEnergyRecoveryPerSecond(float value);

		UFUNCTION(BlueprintCallable)
		float GetEnergyRecoveryPerSecond();

		UFUNCTION(BlueprintCallable)
		void SetMaxSkillPoints(int value);

		UFUNCTION(BlueprintCallable)
		int GetMaxSkillPoints();

		UFUNCTION(BlueprintCallable)
		void SetSkillPoints(int value);

		UFUNCTION(BlueprintCallable)
		int GetSkillPoints();
};
