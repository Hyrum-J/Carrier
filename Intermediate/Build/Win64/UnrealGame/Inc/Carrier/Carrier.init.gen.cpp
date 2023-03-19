// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarrier_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Carrier;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Carrier()
	{
		if (!Z_Registration_Info_UPackage__Script_Carrier.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Carrier",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF4CD9D67,
				0x10F6E3DA,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Carrier.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Carrier.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Carrier(Z_Construct_UPackage__Script_Carrier, TEXT("/Script/Carrier"), Z_Registration_Info_UPackage__Script_Carrier, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF4CD9D67, 0x10F6E3DA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
