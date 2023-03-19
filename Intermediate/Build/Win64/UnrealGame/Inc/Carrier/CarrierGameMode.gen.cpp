// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Carrier/CarrierGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarrierGameMode() {}
// Cross Module References
	CARRIER_API UClass* Z_Construct_UClass_ACarrierGameMode_NoRegister();
	CARRIER_API UClass* Z_Construct_UClass_ACarrierGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Carrier();
// End Cross Module References
	void ACarrierGameMode::StaticRegisterNativesACarrierGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACarrierGameMode);
	UClass* Z_Construct_UClass_ACarrierGameMode_NoRegister()
	{
		return ACarrierGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACarrierGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarrierGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Carrier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarrierGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CarrierGameMode.h" },
		{ "ModuleRelativePath", "CarrierGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarrierGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarrierGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACarrierGameMode_Statics::ClassParams = {
		&ACarrierGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACarrierGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarrierGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarrierGameMode()
	{
		if (!Z_Registration_Info_UClass_ACarrierGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACarrierGameMode.OuterSingleton, Z_Construct_UClass_ACarrierGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACarrierGameMode.OuterSingleton;
	}
	template<> CARRIER_API UClass* StaticClass<ACarrierGameMode>()
	{
		return ACarrierGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarrierGameMode);
	struct Z_CompiledInDeferFile_FID_Carrier_Source_Carrier_CarrierGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Carrier_Source_Carrier_CarrierGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACarrierGameMode, ACarrierGameMode::StaticClass, TEXT("ACarrierGameMode"), &Z_Registration_Info_UClass_ACarrierGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACarrierGameMode), 4001110486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Carrier_Source_Carrier_CarrierGameMode_h_903737680(TEXT("/Script/Carrier"),
		Z_CompiledInDeferFile_FID_Carrier_Source_Carrier_CarrierGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Carrier_Source_Carrier_CarrierGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
