// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngine_5_1_0/GladiatorController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGladiatorController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AGladiatorController();
	UNREALENGINE_5_1_0_API UClass* Z_Construct_UClass_AGladiatorController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngine_5_1_0();
// End Cross Module References
	void AGladiatorController::StaticRegisterNativesAGladiatorController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGladiatorController);
	UClass* Z_Construct_UClass_AGladiatorController_NoRegister()
	{
		return AGladiatorController::StaticClass();
	}
	struct Z_Construct_UClass_AGladiatorController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGladiatorController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine_5_1_0,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiatorController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GladiatorController.h" },
		{ "ModuleRelativePath", "GladiatorController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGladiatorController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGladiatorController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGladiatorController_Statics::ClassParams = {
		&AGladiatorController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGladiatorController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGladiatorController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGladiatorController()
	{
		if (!Z_Registration_Info_UClass_AGladiatorController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGladiatorController.OuterSingleton, Z_Construct_UClass_AGladiatorController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGladiatorController.OuterSingleton;
	}
	template<> UNREALENGINE_5_1_0_API UClass* StaticClass<AGladiatorController>()
	{
		return AGladiatorController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGladiatorController);
	AGladiatorController::~AGladiatorController() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_GladiatorController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_GladiatorController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGladiatorController, AGladiatorController::StaticClass, TEXT("AGladiatorController"), &Z_Registration_Info_UClass_AGladiatorController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGladiatorController), 578399533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_GladiatorController_h_1480194595(TEXT("/Script/UnrealEngine_5_1_0"),
		Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_GladiatorController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_5_1_0_Source_UnrealEngine_5_1_0_GladiatorController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
