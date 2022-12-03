// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class UNREALENGINE_5_1_0_API AWeapon : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int AtkValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int EnergyCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	class UAnimSequence* Animation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	class UTexture* InventoryImage;

private:
	UPROPERTY(VisibleAnywhere, Category = "AttackInfo")
	int AttackID;

public:	
	// Sets default values for this actor's properties
	AWeapon();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
		
	int GenerateAttackID();

	UFUNCTION(BlueprintCallable)
	int GetAttackID();
};
