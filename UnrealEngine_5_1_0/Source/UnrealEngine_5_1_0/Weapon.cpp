// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/BoxComponent.h"
#include "Engine/StaticMesh.h"

// Sets default values
AWeapon::AWeapon()
{
}

/*
AWeapon::AWeapon(int AtkValue, int EnergyCost, class UAnimSequence* Animation, class UStaticMesh* Mesh, class UBoxComponent* Collision)
{
	Super;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->AtkValue = AtkValue;
	this->EnergyCost = EnergyCost;
	this->Animation = Animation;
	this->Mesh = Mesh;
	this->Collision = Collision;


}
*/

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

