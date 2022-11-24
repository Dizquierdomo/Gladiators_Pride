// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCharacter.h"
#include "Containers/UnrealString.h"

// Sets default values
AGameCharacter::AGameCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameCharacter::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void AGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AGameCharacter::SetCharacterName(FString name) {
	this->CharacterName = name;
}

FString AGameCharacter::GetCharacterName() {
	return this->CharacterName;
}

void AGameCharacter::SetMaxHealthPoints(int MaxHpValue) {
	if (MaxHpValue < 0) {
		this->MaxHealthPoints = 0;
	}
	else {
		this->MaxHealthPoints = MaxHpValue;
	}
}

int AGameCharacter::GetMaxHealthPoints() {
	return this->MaxHealthPoints;
}

void AGameCharacter::SetHealthPoints(int HPValue) {
	if (HPValue < 0) {
		this->HealthPoints = 0;
	}
	else if (HPValue > GetMaxHealthPoints()) {
		this->HealthPoints = GetMaxHealthPoints();
	}
	else {
		this->HealthPoints = HPValue;
	}
}

int AGameCharacter::GetHealthPoints() {
	return this->HealthPoints;
}
