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
/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	class UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	class UBoxComponent* Collision;
*/
public:	
	// Sets default values for this actor's properties
	AWeapon();
	//AWeapon(int AtkValue, int EnergyCost, class UAnimSequence* Animation, class UStaticMesh* Mesh, class UBoxComponent* Collision);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};