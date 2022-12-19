// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngine_5_1_0/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AWeapon();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngine_5_1_0();
// End Cross Module References
	DEFINE_FUNCTION(AWeapon::execGetAttackID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAttackID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execGenerateAttackID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GenerateAttackID();
		P_NATIVE_END;
	}
	void AWeapon::StaticRegisterNativesAWeapon()
	{
		UClass* Class = AWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateAttackID", &AWeapon::execGenerateAttackID },
			{ "GetAttackID", &AWeapon::execGetAttackID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_GenerateAttackID_Statics
	{
		struct Weapon_eventGenerateAttackID_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AWeapon_GenerateAttackID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Weapon_eventGenerateAttackID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GenerateAttackID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GenerateAttackID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GenerateAttackID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GenerateAttackID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GenerateAttackID", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeapon_GenerateAttackID_Statics::Weapon_eventGenerateAttackID_Parms), Z_Construct_UFunction_AWeapon_GenerateAttackID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GenerateAttackID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GenerateAttackID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GenerateAttackID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GenerateAttackID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GenerateAttackID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetAttackID_Statics
	{
		struct Weapon_eventGetAttackID_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AWeapon_GetAttackID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Weapon_eventGetAttackID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetAttackID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetAttackID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetAttackID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetAttackID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetAttackID", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeapon_GetAttackID_Statics::Weapon_eventGetAttackID_Parms), Z_Construct_UFunction_AWeapon_GetAttackID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetAttackID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetAttackID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetAttackID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GetAttackID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetAttackID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtkValue_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AtkValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnergyCost_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EnergyCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationAttack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationPreparation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationPreparation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AttackID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine_5_1_0,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_GenerateAttackID, "GenerateAttackID" }, // 278855196
		{ &Z_Construct_UFunction_AWeapon_GetAttackID, "GetAttackID" }, // 1625943175
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon.h" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AtkValue_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AtkValue = { "AtkValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon, AtkValue), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_AtkValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AtkValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_EnergyCost_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_EnergyCost = { "EnergyCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon, EnergyCost), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_EnergyCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_EnergyCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponCollision_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponCollision = { "WeaponCollision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon, WeaponCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AnimationAttack_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AnimationAttack = { "AnimationAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon, AnimationAttack), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_AnimationAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AnimationAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AnimationPreparation_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AnimationPreparation = { "AnimationPreparation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon, AnimationPreparation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_AnimationPreparation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AnimationPreparation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_InventoryImage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_InventoryImage = { "InventoryImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon, InventoryImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_InventoryImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_InventoryImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AttackID_MetaData[] = {
		{ "Category", "AttackInfo" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AttackID = { "AttackID", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon, AttackID), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_AttackID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AttackID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AtkValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_EnergyCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AnimationAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AnimationPreparation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_InventoryImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AttackID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon()
	{
		if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
	}
	template<> UNREALENGINE_5_1_0_API UClass* StaticClass<AWeapon>()
	{
		return AWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
	AWeapon::~AWeapon() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Weapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Weapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 3353996048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Weapon_h_243527658(TEXT("/Script/UnrealEngine_5_1_0"),
		Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Weapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
