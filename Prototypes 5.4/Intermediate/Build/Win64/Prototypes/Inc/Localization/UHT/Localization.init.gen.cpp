// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalization_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Localization;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Localization()
	{
		if (!Z_Registration_Info_UPackage__Script_Localization.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Localization",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0xFE248513,
				0x07137251,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Localization.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Localization.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Localization(Z_Construct_UPackage__Script_Localization, TEXT("/Script/Localization"), Z_Registration_Info_UPackage__Script_Localization, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFE248513, 0x07137251));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
