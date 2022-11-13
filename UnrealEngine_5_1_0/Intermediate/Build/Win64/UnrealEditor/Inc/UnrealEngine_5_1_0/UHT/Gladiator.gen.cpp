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
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AGladiator();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AGladiator_NoRegister();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AMinotaur_NoRegister();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngine_5_1_0();
// End Cross Module References
	DEFINE_FUNCTION(AGladiator::execWeaponAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->WeaponAttack();
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
			{ "ForwardMove", &AGladiator::execForwardMove },
			{ "RightMove", &AGladiator::execRightMove },
			{ "SetEnemyInTargetRange", &AGladiator::execSetEnemyInTargetRange },
			{ "TargetEnemy", &AGladiator::execTargetEnemy },
			{ "WeaponAttack", &AGladiator::execWeaponAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthPoints_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxHealthPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPoints_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HealthPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnergyPoint_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxEnergyPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnergyPoint_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EnergyPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGladiator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine_5_1_0,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGladiator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGladiator_ForwardMove, "ForwardMove" }, // 4096657762
		{ &Z_Construct_UFunction_AGladiator_RightMove, "RightMove" }, // 3127631509
		{ &Z_Construct_UFunction_AGladiator_SetEnemyInTargetRange, "SetEnemyInTargetRange" }, // 2276387788
		{ &Z_Construct_UFunction_AGladiator_TargetEnemy, "TargetEnemy" }, // 1266959365
		{ &Z_Construct_UFunction_AGladiator_WeaponAttack, "WeaponAttack" }, // 1179484655
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_IsEnemyTargeted_MetaData[] = {
		{ "Category", "Movement" },
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
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, Weapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_MaxHealthPoints_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_MaxHealthPoints = { "MaxHealthPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, MaxHealthPoints), METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_MaxHealthPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_MaxHealthPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_HealthPoints_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, HealthPoints), METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_HealthPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_HealthPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_MaxEnergyPoint_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_MaxEnergyPoint = { "MaxEnergyPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, MaxEnergyPoint), METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_MaxEnergyPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_MaxEnergyPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyPoint_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Gladiator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyPoint = { "EnergyPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGladiator, EnergyPoint), METADATA_PARAMS(Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGladiator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_CameraArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingBackward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsWalkingLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_IsEnemyTargeted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_EnemyInTargetRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_MaxHealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_HealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_MaxEnergyPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGladiator_Statics::NewProp_EnergyPoint,
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
		{ Z_Construct_UClass_AGladiator, AGladiator::StaticClass, TEXT("AGladiator"), &Z_Registration_Info_UClass_AGladiator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGladiator), 949408269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Gladiator_h_1311888028(TEXT("/Script/UnrealEngine_5_1_0"),
		Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Gladiator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Gladiator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
