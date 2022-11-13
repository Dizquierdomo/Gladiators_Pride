// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngine_5_1_0/Minotaur.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinotaur() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AMinotaur();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AMinotaur_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngine_5_1_0();
// End Cross Module References
	void AMinotaur::StaticRegisterNativesAMinotaur()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinotaur);
	UClass* Z_Construct_UClass_AMinotaur_NoRegister()
	{
		return AMinotaur::StaticClass();
	}
	struct Z_Construct_UClass_AMinotaur_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinotaur_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine_5_1_0,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinotaur_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Minotaur.h" },
		{ "ModuleRelativePath", "Minotaur.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinotaur_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinotaur>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinotaur_Statics::ClassParams = {
		&AMinotaur::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMinotaur_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinotaur_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinotaur()
	{
		if (!Z_Registration_Info_UClass_AMinotaur.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinotaur.OuterSingleton, Z_Construct_UClass_AMinotaur_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMinotaur.OuterSingleton;
	}
	template<> UNREALENGINE_5_1_0_API UClass* StaticClass<AMinotaur>()
	{
		return AMinotaur::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinotaur);
	AMinotaur::~AMinotaur() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Minotaur_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Minotaur_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMinotaur, AMinotaur::StaticClass, TEXT("AMinotaur"), &Z_Registration_Info_UClass_AMinotaur, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinotaur), 1260011859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Minotaur_h_3270063903(TEXT("/Script/UnrealEngine_5_1_0"),
		Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Minotaur_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_Minotaur_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
