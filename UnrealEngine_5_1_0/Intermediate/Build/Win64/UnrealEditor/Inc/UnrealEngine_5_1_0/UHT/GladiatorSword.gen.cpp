// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngine_5_1_0/GladiatorSword.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGladiatorSword() {}
// Cross Module References
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AGladiatorSword();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AGladiatorSword_NoRegister();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_UnrealEngine_5_1_0();
// End Cross Module References
	void AGladiatorSword::StaticRegisterNativesAGladiatorSword()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGladiatorSword);
	UClass* Z_Construct_UClass_AGladiatorSword_NoRegister()
	{
		return AGladiatorSword::StaticClass();
	}
	struct Z_Construct_UClass_AGladiatorSword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGladiatorSword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine_5_1_0,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiatorSword_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GladiatorSword.h" },
		{ "ModuleRelativePath", "GladiatorSword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGladiatorSword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGladiatorSword>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGladiatorSword_Statics::ClassParams = {
		&AGladiatorSword::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AGladiatorSword_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiatorSword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGladiatorSword()
	{
		if (!Z_Registration_Info_UClass_AGladiatorSword.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGladiatorSword.OuterSingleton, Z_Construct_UClass_AGladiatorSword_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGladiatorSword.OuterSingleton;
	}
	template<> UNREALENGINE_5_1_0_API UClass* StaticClass<AGladiatorSword>()
	{
		return AGladiatorSword::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGladiatorSword);
	AGladiatorSword::~AGladiatorSword() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_GladiatorSword_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_GladiatorSword_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGladiatorSword, AGladiatorSword::StaticClass, TEXT("AGladiatorSword"), &Z_Registration_Info_UClass_AGladiatorSword, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGladiatorSword), 3514509102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_GladiatorSword_h_745173640(TEXT("/Script/UnrealEngine_5_1_0"),
		Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_GladiatorSword_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_GladiatorSword_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
