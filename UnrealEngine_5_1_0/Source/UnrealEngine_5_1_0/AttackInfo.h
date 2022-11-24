// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttackInfo.generated.h"

USTRUCT(BlueprintType)
struct FAttackInfo {
    GENERATED_BODY()

public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AtkInfo")
    float AtkTime;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AtkInfo")
    int AtkID;    

    FAttackInfo();

    ~FAttackInfo();
};

