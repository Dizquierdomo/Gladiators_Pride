// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Texture.h"

// Sets default values
AWeapon::AWeapon() {
	this->AttackID = -1;

	this->WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon_Mesh"));
	RootComponent = this->WeaponMesh;

	this->WeaponCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Weapon_Collision"));
	this->WeaponCollision->ComponentTags.Add(FName("player.weapon"));
	this->WeaponCollision->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false));
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

int AWeapon::GenerateAttackID() {
	if (this->AttackID < 0) {
		this->AttackID = 0;
	} else {
		this->AttackID++;
	}
	return this->AttackID;
}

int AWeapon::GetAttackID() {
	return this->AttackID;
}
