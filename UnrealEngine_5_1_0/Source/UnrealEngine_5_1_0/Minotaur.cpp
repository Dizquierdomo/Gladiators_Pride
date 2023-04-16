// Fill out your copyright notice in the Description page of Project Settings.


#include "Minotaur.h"

// Sets default values
AMinotaur::AMinotaur()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetMaxHealthPoints(1000);
	SetHealthPoints(GetMaxHealthPoints());
	SetCharacterName("Arena Champion");
}

// Called when the game starts or when spawned
void AMinotaur::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMinotaur::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMinotaur::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

