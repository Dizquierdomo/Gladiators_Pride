// Fill out your copyright notice in the Description page of Project Settings.


#include "Gladiator.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Minotaur.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "Weapon.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "AttackInfo.h"

// Sets default values
AGladiator::AGladiator() {
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a camera Arm 
	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	CameraArm->SetupAttachment(RootComponent);

	// Create a follow camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(CameraArm, USpringArmComponent::SocketName);

	SetMaxHealthPoints(1000);
	SetHealthPoints(1000);
	SetMaxEnergyPoints(100);
	SetEnergyPoints(100);
	SetEnergyRecoveryPerSecond(5);

	IsEnemyTargeted = false;
}

// Called when the game starts or when spawned
void AGladiator::BeginPlay() {
	Super::BeginPlay();	
}

// Called every frame
void AGladiator::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	FocusCameraOnEnemy();
}

void AGladiator::ForwardMove(float Value) {
	if ((Controller != nullptr) && (Value != 0.0f)) {
		if (Value > 0) {
			IsWalkingForward = true;
		} else {
			IsWalkingBackward = true;
		}		

		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		AddMovementInput(ForwardDirection, Value, false);
	} 
}

void AGladiator::RightMove(float Value) {
	if ((Controller != nullptr) && (Value != 0.0f)) {
		if (Value > 0) {
			IsWalkingRight = true;
		} else {
			IsWalkingLeft = true;
		}

		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(RightDirection, Value, false);
	}
}

void AGladiator::SetEnemyInTargetRange(AActor* actor) {
	const ACharacter* aux = Cast<ACharacter, AActor>(actor);

	if (aux != nullptr && aux->ActorHasTag("enemy")) {
		EnemyInTargetRange = actor;
	} else {
		EnemyInTargetRange = nullptr;
	}
}

void AGladiator::TargetEnemy() {
	if (EnemyInTargetRange != nullptr && !IsEnemyTargeted) {
		Target = Cast<AMinotaur, AActor>(EnemyInTargetRange);
		IsEnemyTargeted = true;
	} else {
		IsEnemyTargeted = false;
	}
}

void AGladiator::FocusCameraOnEnemy() {
	if (IsEnemyTargeted) {
		AController* controller = GetController();
		const FRotator controllerRotation = controller->GetControlRotation();	
		const FRotator viewRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Target->GetActorLocation());
		
		FRotator aux = UKismetMathLibrary::RInterpTo(controllerRotation, viewRotation, FApp::GetDeltaTime(), 0.0f);
		aux.Roll = controllerRotation.Roll;

		controller->SetControlRotation(aux);

		bUseControllerRotationYaw = true;

	} else {		
		Target = nullptr;
		bUseControllerRotationYaw = false;
	}
}

FAttackInfo AGladiator::WeaponAttack() {
	FAttackInfo aux;

	aux.AtkTime = 0;

	if (Weapon != nullptr) {
		if (this->GetEnergyPoints() >= Weapon->EnergyCost) {
			USkeletalMeshComponent* GladiatorMesh = GetMesh();

			SetEnergyPoints((GetEnergyPoints() - Weapon->EnergyCost));

			GladiatorMesh->PlayAnimation(Weapon->Animation, false);

			aux.AtkTime = (Weapon->Animation->GetPlayLength() / Weapon->Animation->RateScale);
			aux.AtkID = Weapon->GenerateAttackID();
		} else {
			aux.AtkTime = -1;
		}
	} 
	return aux;
}

void AGladiator::SetMaxEnergyPoints(int value) {
	if (value < 0) {
		this->MaxEnergyPoints = 0;
	} else {
		this->MaxEnergyPoints = value;
	}
}

int AGladiator::GetMaxEnergyPoints() {
	return this->MaxEnergyPoints;
}

void AGladiator::SetEnergyPoints(int value) {
	if (value < 0) {
		this->EnergyPoints = 0;
	} else if (value > GetMaxEnergyPoints()) {
		this->EnergyPoints = GetMaxEnergyPoints();
	} else {
		this->EnergyPoints = value;
	}
}

int AGladiator::GetEnergyPoints() {
	return this->EnergyPoints;
}

void AGladiator::SetEnergyRecoveryPerSecond(float value) {
	if (value > 0) {
		this->EnergyRecoveryPerSecond = value;
	} else {
		this->EnergyRecoveryPerSecond = 0;
	}
}

float AGladiator::GetEnergyRecoveryPerSecond() {
	return this->EnergyRecoveryPerSecond;
}