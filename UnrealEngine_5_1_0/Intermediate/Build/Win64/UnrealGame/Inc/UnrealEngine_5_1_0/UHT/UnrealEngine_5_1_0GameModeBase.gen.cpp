// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngine_5_1_0/UnrealEngine_5_1_0GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEngine_5_1_0GameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngine_5_1_0();
// End Cross Module References
	void AUnrealEngine_5_1_0GameModeBase::StaticRegisterNativesAUnrealEngine_5_1_0GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealEngine_5_1_0GameModeBase);
	UClass* Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase_NoRegister()
	{
		return AUnrealEngine_5_1_0GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine_5_1_0,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealEngine_5_1_0GameModeBase.h" },
		{ "ModuleRelativePath", "UnrealEngine_5_1_0GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealEngine_5_1_0GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase_Statics::ClassParams = {
		&AUnrealEngine_5_1_0GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnrealEngine_5_1_0GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealEngine_5_1_0GameModeBase.OuterSingleton, Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealEngine_5_1_0GameModeBase.OuterSingleton;
	}
	template<> UNREALENGINE_5_1_0_API UClass* StaticClass<AUnrealEngine_5_1_0GameModeBase>()
	{
		return AUnrealEngine_5_1_0GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealEngine_5_1_0GameModeBase);
	AUnrealEngine_5_1_0GameModeBase::~AUnrealEngine_5_1_0GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_UnrealEngine_5_1_0GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_UnrealEngine_5_1_0GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealEngine_5_1_0GameModeBase, AUnrealEngine_5_1_0GameModeBase::StaticClass, TEXT("AUnrealEngine_5_1_0GameModeBase"), &Z_Registration_Info_UClass_AUnrealEngine_5_1_0GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealEngine_5_1_0GameModeBase), 1540537952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_UnrealEngine_5_1_0GameModeBase_h_1888536685(TEXT("/Script/UnrealEngine_5_1_0"),
		Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_UnrealEngine_5_1_0GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_UnrealEngine_5_1_0GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
