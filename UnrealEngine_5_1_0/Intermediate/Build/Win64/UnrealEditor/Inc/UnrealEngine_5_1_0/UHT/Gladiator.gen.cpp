// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngine_5_1_0/Gladiator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGladiator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AGameCharacter();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AGladiator();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AGladiator_NoRegister();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AMinotaur_NoRegister();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngine_5_1_0();
// End Cross Module References
	DEFINE_FUNCTION(AGladiator::execGetEnergyRecoveryPerSecond)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnergyRecoveryPerSecond();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execSetEnergyRecoveryPerSecond)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnergyRecoveryPerSecond(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execGetEnergyPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEnergyPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execSetEnergyPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnergyPoints(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execGetMaxEnergyPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxEnergyPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execSetMaxEnergyPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxEnergyPoints(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execFocusCameraOnEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FocusCameraOnEnemy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execWeaponAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->WeaponAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execWeaponPreparation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->WeaponPreparation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execTargetEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TargetEnemy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execSetEnemyInTargetRange)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnemyInTargetRange(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execDodgeAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->DodgeAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execBlockAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->BlockAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execJumpAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->JumpAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execRightMove)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RightMove(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGladiator::execForwardMove)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForwardMove(Z_Param_Value);
		P_NATIVE_END;
	}
	void AGladiator::StaticRegisterNativesAGladiator()
	{
		UClass* Class = AGladiator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlockAction", &AGladiator::execBlockAction },
			{ "DodgeAction", &AGladiator::execDodgeAction },
			{ "FocusCameraOnEnemy", &AGladiator::execFocusCameraOnEnemy },
			{ "ForwardMove", &AGladiator::execForwardMove },
			{ "GetEnergyPoints", &AGladiator::execGetEnergyPoints },
			{ "GetEnergyRecoveryPerSecond", &AGladiator::execGetEnergyRecoveryPerSecond },
			{ "GetMaxEnergyPoints", &AGladiator::execGetMaxEnergyPoints },
			{ "JumpAction", &AGladiator::execJumpAction },
			{ "RightMove", &AGladiator::execRightMove },
			{ "SetEnemyInTargetRange", &AGladiator::execSetEnemyInTargetRange },
			{ "SetEnergyPoints", &AGladiator::execSetEnergyPoints },
			{ "SetEnergyRecoveryPerSecond", &AGladiator::execSetEnergyRecoveryPerSecond },
			{ "SetMaxEnergyPoints", &AGladiator::execSetMaxEnergyPoints },
			{ "TargetEnemy", &AGladiator::execTargetEnemy },
			{ "WeaponAttack", &AGladiator::execWeaponAttack },
			{ "WeaponPreparation", &AGladiator::execWeaponPreparation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGladiator_BlockAction_Statics
	{
		struct Gladiator_eventBlockAction_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGladiator_BlockAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventBlockAction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_BlockAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_BlockAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_BlockAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_BlockAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "BlockAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_BlockAction_Statics::Gladiator_eventBlockAction_Parms), Z_Construct_UFunction_AGladiator_BlockAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_BlockAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_BlockAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_BlockAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_BlockAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_BlockAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_DodgeAction_Statics
	{
		struct Gladiator_eventDodgeAction_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGladiator_DodgeAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventDodgeAction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_DodgeAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_DodgeAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_DodgeAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_DodgeAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "DodgeAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_DodgeAction_Statics::Gladiator_eventDodgeAction_Parms), Z_Construct_UFunction_AGladiator_DodgeAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_DodgeAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_DodgeAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_DodgeAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_DodgeAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_DodgeAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_FocusCameraOnEnemy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_FocusCameraOnEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_FocusCameraOnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "FocusCameraOnEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_FocusCameraOnEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_FocusCameraOnEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_FocusCameraOnEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_FocusCameraOnEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_ForwardMove_Statics
	{
		struct Gladiator_eventForwardMove_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGladiator_ForwardMove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventForwardMove_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_ForwardMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_ForwardMove_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_ForwardMove_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called for forwards/backward input\n" },
		{ "ModuleRelativePath", "Gladiator.h" },
		{ "ToolTip", "Called for forwards/backward input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_ForwardMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "ForwardMove", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_ForwardMove_Statics::Gladiator_eventForwardMove_Parms), Z_Construct_UFunction_AGladiator_ForwardMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_ForwardMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_ForwardMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_ForwardMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_ForwardMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_ForwardMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_GetEnergyPoints_Statics
	{
		struct Gladiator_eventGetEnergyPoints_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGladiator_GetEnergyPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventGetEnergyPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_GetEnergyPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_GetEnergyPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_GetEnergyPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_GetEnergyPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "GetEnergyPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_GetEnergyPoints_Statics::Gladiator_eventGetEnergyPoints_Parms), Z_Construct_UFunction_AGladiator_GetEnergyPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_GetEnergyPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_GetEnergyPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_GetEnergyPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_GetEnergyPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_GetEnergyPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond_Statics
	{
		struct Gladiator_eventGetEnergyRecoveryPerSecond_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventGetEnergyRecoveryPerSecond_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "GetEnergyRecoveryPerSecond", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond_Statics::Gladiator_eventGetEnergyRecoveryPerSecond_Parms), Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints_Statics
	{
		struct Gladiator_eventGetMaxEnergyPoints_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventGetMaxEnergyPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "GetMaxEnergyPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints_Statics::Gladiator_eventGetMaxEnergyPoints_Parms), Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_JumpAction_Statics
	{
		struct Gladiator_eventJumpAction_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGladiator_JumpAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventJumpAction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_JumpAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_JumpAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_JumpAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_JumpAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "JumpAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_JumpAction_Statics::Gladiator_eventJumpAction_Parms), Z_Construct_UFunction_AGladiator_JumpAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_JumpAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_JumpAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_JumpAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_JumpAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_JumpAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_RightMove_Statics
	{
		struct Gladiator_eventRightMove_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGladiator_RightMove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventRightMove_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_RightMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_RightMove_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_RightMove_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called for right/left input\n" },
		{ "ModuleRelativePath", "Gladiator.h" },
		{ "ToolTip", "Called for right/left input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_RightMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "RightMove", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_RightMove_Statics::Gladiator_eventRightMove_Parms), Z_Construct_UFunction_AGladiator_RightMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_RightMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_RightMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_RightMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_RightMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_RightMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange_Statics
	{
		struct Gladiator_eventSetEnemyInTargetRange_Parms
		{
			AActor* actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventSetEnemyInTargetRange_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "SetEnemyInTargetRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange_Statics::Gladiator_eventSetEnemyInTargetRange_Parms), Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_SetEnergyPoints_Statics
	{
		struct Gladiator_eventSetEnergyPoints_Parms
		{
			int32 value;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGladiator_SetEnergyPoints_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventSetEnergyPoints_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_SetEnergyPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_SetEnergyPoints_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_SetEnergyPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_SetEnergyPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "SetEnergyPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_SetEnergyPoints_Statics::Gladiator_eventSetEnergyPoints_Parms), Z_Construct_UFunction_AGladiator_SetEnergyPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_SetEnergyPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_SetEnergyPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_SetEnergyPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_SetEnergyPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_SetEnergyPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond_Statics
	{
		struct Gladiator_eventSetEnergyRecoveryPerSecond_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventSetEnergyRecoveryPerSecond_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "SetEnergyRecoveryPerSecond", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond_Statics::Gladiator_eventSetEnergyRecoveryPerSecond_Parms), Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints_Statics
	{
		struct Gladiator_eventSetMaxEnergyPoints_Parms
		{
			int32 value;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventSetMaxEnergyPoints_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "SetMaxEnergyPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints_Statics::Gladiator_eventSetMaxEnergyPoints_Parms), Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_TargetEnemy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_TargetEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_TargetEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "TargetEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_TargetEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_TargetEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_TargetEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_TargetEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_WeaponAttack_Statics
	{
		struct Gladiator_eventWeaponAttack_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGladiator_WeaponAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventWeaponAttack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_WeaponAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_WeaponAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_WeaponAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_WeaponAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "WeaponAttack", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_WeaponAttack_Statics::Gladiator_eventWeaponAttack_Parms), Z_Construct_UFunction_AGladiator_WeaponAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_WeaponAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_WeaponAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_WeaponAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_WeaponAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_WeaponAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGladiator_WeaponPreparation_Statics
	{
		struct Gladiator_eventWeaponPreparation_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGladiator_WeaponPreparation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Gladiator_eventWeaponPreparation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGladiator_WeaponPreparation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGladiator_WeaponPreparation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGladiator_WeaponPreparation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGladiator_WeaponPreparation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGladiator, nullptr, "WeaponPreparation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGladiator_WeaponPreparation_Statics::Gladiator_eventWeaponPreparation_Parms), Z_Construct_UFunction_AGladiator_WeaponPreparation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_WeaponPreparation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGladiator_WeaponPreparation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGladiator_WeaponPreparation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGladiator_WeaponPreparation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGladiator_WeaponPreparation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGladiator);
	UClass* Z_Construct_UClass_AGladiator_NoRegister()
	{
		return AGladiator::StaticClass();
	}
	struct Z_Construct_UClass_AGladiator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsWalkingForward_MetaData[];
#endif
		static void NewProp_IsWalkingForward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWalkingForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsWalkingBackward_MetaData[];
#endif
		static void NewProp_IsWalkingBackward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWalkingBackward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsWalkingRight_MetaData[];
#endif
		static void NewProp_IsWalkingRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWalkingRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsWalkingLeft_MetaData[];
#endif
		static void NewProp_IsWalkingLeft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWalkingLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsJumping_MetaData[];
#endif
		static void NewProp_IsJumping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJumping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpEnergyCost_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_JumpEnergyCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsBlocking_MetaData[];
#endif
		static void NewProp_IsBlocking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBlocking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockEnergyCost_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BlockEnergyCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDodging_MetaData[];
#endif
		static void NewProp_IsDodging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDodging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeEnergyCost_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DodgeEnergyCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsEnemyTargeted_MetaData[];
#endif
		static void NewProp_IsEnemyTargeted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEnemyTargeted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyInTargetRange_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyInTargetRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnergyPoints_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxEnergyPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnergyPoints_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EnergyPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnergyRecoveryPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnergyRecoveryPerSecond;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGladiator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine_5_1_0,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGladiator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGladiator_BlockAction, "BlockAction" }, // 2459779694
		{ &Z_Construct_UFunction_AGladiator_DodgeAction, "DodgeAction" }, // 3054710665
		{ &Z_Construct_UFunction_AGladiator_FocusCameraOnEnemy, "FocusCameraOnEnemy" }, // 4069179899
		{ &Z_Construct_UFunction_AGladiator_ForwardMove, "ForwardMove" }, // 4096657762
		{ &Z_Construct_UFunction_AGladiator_GetEnergyPoints, "GetEnergyPoints" }, // 1053769215
		{ &Z_Construct_UFunction_AGladiator_GetEnergyRecoveryPerSecond, "GetEnergyRecoveryPerSecond" }, // 4016117281
		{ &Z_Construct_UFunction_AGladiator_GetMaxEnergyPoints, "GetMaxEnergyPoints" }, // 2154167446
		{ &Z_Construct_UFunction_AGladiator_JumpAction, "JumpAction" }, // 1758514181
		{ &Z_Construct_UFunction_AGladiator_RightMove, "RightMove" }, // 3127631509
		{ &Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange, "SetEnemyInTargetRange" }, // 2276387788
		{ &Z_Construct_UFunction_AGladiator_SetEnergyPoints, "SetEnergyPoints" }, // 2062051270
		{ &Z_Construct_UFunction_AGladiator_SetEnergyRecoveryPerSecond, "SetEnergyRecoveryPerSecond" }, // 3473871134
		{ &Z_Construct_UFunction_AGladiator_SetMaxEnergyPoints, "SetMaxEnergyPoints" }, // 3202803108
		{ &Z_Construct_UFunction_AGladiator_TargetEnemy, "TargetEnemy" }, // 1266959365
		{ &Z_Construct_UFunction_AGladiator_WeaponAttack, "WeaponAttack" }, // 1179484655
		{ &Z_Construct_UFunction_AGladiator_WeaponPreparation, "WeaponPreparation" }, // 1625004002
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Gladiator.h" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_CameraArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_CameraArm = { "CameraArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_CameraArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_CameraArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingForward_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	void Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingForward_SetBit(void* Obj)
	{
		((AGladiator*)Obj)->IsWalkingForward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingForward = { "IsWalkingForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGladiator), &Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingBackward_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	void Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingBackward_SetBit(void* Obj)
	{
		((AGladiator*)Obj)->IsWalkingBackward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingBackward = { "IsWalkingBackward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGladiator), &Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingBackward_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingBackward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingBackward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingRight_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	void Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingRight_SetBit(void* Obj)
	{
		((AGladiator*)Obj)->IsWalkingRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingRight = { "IsWalkingRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGladiator), &Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingLeft_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	void Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingLeft_SetBit(void* Obj)
	{
		((AGladiator*)Obj)->IsWalkingLeft = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingLeft = { "IsWalkingLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGladiator), &Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_IsJumping_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	void Z_Construct_UClass_AGladiator_Statics::NewProp_IsJumping_SetBit(void* Obj)
	{
		((AGladiator*)Obj)->IsJumping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_IsJumping = { "IsJumping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGladiator), &Z_Construct_UClass_AGladiator_Statics::NewProp_IsJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_IsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_IsJumping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_JumpEnergyCost_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_JumpEnergyCost = { "JumpEnergyCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, JumpEnergyCost), METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_JumpEnergyCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_JumpEnergyCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_IsBlocking_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	void Z_Construct_UClass_AGladiator_Statics::NewProp_IsBlocking_SetBit(void* Obj)
	{
		((AGladiator*)Obj)->IsBlocking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_IsBlocking = { "IsBlocking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGladiator), &Z_Construct_UClass_AGladiator_Statics::NewProp_IsBlocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_IsBlocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_IsBlocking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_BlockEnergyCost_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_BlockEnergyCost = { "BlockEnergyCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, BlockEnergyCost), METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_BlockEnergyCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_BlockEnergyCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_IsDodging_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	void Z_Construct_UClass_AGladiator_Statics::NewProp_IsDodging_SetBit(void* Obj)
	{
		((AGladiator*)Obj)->IsDodging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_IsDodging = { "IsDodging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGladiator), &Z_Construct_UClass_AGladiator_Statics::NewProp_IsDodging_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_IsDodging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_IsDodging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_DodgeEnergyCost_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_DodgeEnergyCost = { "DodgeEnergyCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, DodgeEnergyCost), METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_DodgeEnergyCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_DodgeEnergyCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_IsEnemyTargeted_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	void Z_Construct_UClass_AGladiator_Statics::NewProp_IsEnemyTargeted_SetBit(void* Obj)
	{
		((AGladiator*)Obj)->IsEnemyTargeted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_IsEnemyTargeted = { "IsEnemyTargeted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGladiator), &Z_Construct_UClass_AGladiator_Statics::NewProp_IsEnemyTargeted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_IsEnemyTargeted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_IsEnemyTargeted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_EnemyInTargetRange_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_EnemyInTargetRange = { "EnemyInTargetRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, EnemyInTargetRange), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_EnemyInTargetRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_EnemyInTargetRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, Target), Z_Construct_UClass_AMinotaur_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, Weapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_MaxEnergyPoints_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_MaxEnergyPoints = { "MaxEnergyPoints", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, MaxEnergyPoints), METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_MaxEnergyPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_MaxEnergyPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyPoints_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyPoints = { "EnergyPoints", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, EnergyPoints), METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyRecoveryPerSecond_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyRecoveryPerSecond = { "EnergyRecoveryPerSecond", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, EnergyRecoveryPerSecond), METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyRecoveryPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyRecoveryPerSecond_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGladiator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_CameraArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingBackward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsJumping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_JumpEnergyCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsBlocking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_BlockEnergyCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsDodging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_DodgeEnergyCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsEnemyTargeted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_EnemyInTargetRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_MaxEnergyPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyRecoveryPerSecond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGladiator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGladiator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGladiator_Statics::ClassParams = {
		&AGladiator::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGladiator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGladiator()
	{
		if (!Z_Registration_Info_UClass_AGladiator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGladiator.OuterSingleton, Z_Construct_UClass_AGladiator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGladiator.OuterSingleton;
	}
	template<> UNREALENGINE_5_1_0_API UClass* StaticClass<AGladiator>()
	{
		return AGladiator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGladiator);
	AGladiator::~AGladiator() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Gladiator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Gladiator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGladiator, AGladiator::StaticClass, TEXT("AGladiator"), &Z_Registration_Info_UClass_AGladiator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGladiator), 1933804662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Gladiator_h_3736355485(TEXT("/Script/UnrealEngine_5_1_0"),
		Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Gladiator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Gladiator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
