// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Gladiator.generated.h"

UCLASS()
class UNREALENGINE_5_1_0_API AGladiator : public ACharacter {
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
		bool IsEnemyTargeted;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
		class AActor* EnemyInTargetRange;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
		class AMinotaur* Target;	

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
		class AWeapon* Weapon;

private:
		UPROPERTY(VisibleAnywhere, Category = "Stats")
		int MaxHealthPoints;

		UPROPERTY(VisibleAnywhere, Category = "Stats")
		int HealthPoints;
		
		UPROPERTY(VisibleAnywhere, Category = "Stats")
		int MaxEnergyPoints;

		UPROPERTY(VisibleAnywhere, Category = "Stats")
		int EnergyPoints;

		UPROPERTY(VisibleAnywhere, Category = "Stats")
		float EnergyRecoveryPerSecond;

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
		void SetEnemyInTargetRange(AActor* actor);

		UFUNCTION(BlueprintCallable)
		void TargetEnemy();
				
		UFUNCTION(BlueprintCallable)
		float WeaponAttack();

		UFUNCTION(BlueprintCallable)
		void FocusCameraOnEnemy();

		UFUNCTION(BlueprintCallable)
		void SetMaxHealthPoints(int value);

		UFUNCTION(BlueprintCallable)
		int GetMaxHealthPoints();

		UFUNCTION(BlueprintCallable)
		void SetHealthPoints(int value);

		UFUNCTION(BlueprintCallable)
		int GetHealthPoints();

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
};
