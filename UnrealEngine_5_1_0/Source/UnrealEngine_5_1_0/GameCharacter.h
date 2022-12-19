// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameCharacter.generated.h"

UCLASS()
class UNREALENGINE_5_1_0_API AGameCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Category = "Stats")
	FString CharacterName;

	UPROPERTY(VisibleAnywhere, Category = "Stats")
	int MaxHealthPoints;

	UPROPERTY(VisibleAnywhere, Category = "Stats")
	int HealthPoints;

public:
	// Sets default values for this character's properties
	AGameCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void SetMaxHealthPoints(int MaxHPValue);

	UFUNCTION(BlueprintCallable)
	int GetMaxHealthPoints();

	UFUNCTION(BlueprintCallable)
	void SetHealthPoints(int HPValue);

	UFUNCTION(BlueprintCallable)
	int GetHealthPoints();

	UFUNCTION(BlueprintCallable)
	void SetCharacterName(FString name);

	UFUNCTION(BlueprintCallable)
	FString GetCharacterName();
};
