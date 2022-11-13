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

float AGladiator::WeaponAttack() {
	if (Weapon != nullptr) {
		USkeletalMeshComponent* GladiatorMesh = GetMesh();
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		//AWeapon* weapon = Cast<AWeapon, AActor>(weaponActor);

		GladiatorMesh->PlayAnimation(Weapon->Animation, false);
		//DisableInput(PlayerController);
		
		//EnableInput(PlayerController);			
	}	
	
	return (Weapon->Animation->GetPlayLength() / (float)Weapon->Animation->RateScale);
}