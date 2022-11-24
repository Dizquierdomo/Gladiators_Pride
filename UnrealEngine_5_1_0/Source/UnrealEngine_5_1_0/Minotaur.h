// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCharacter.h"
#include "Minotaur.generated.h"

UCLASS()
class UNREALENGINE_5_1_0_API AMinotaur : public AGameCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMinotaur();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
