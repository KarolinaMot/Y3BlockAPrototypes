// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUObjectPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UObjectPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UObjectPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_UObjectPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UObjectPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x09CB69F8,
				0x397F1C61,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UObjectPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UObjectPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UObjectPlugin(Z_Construct_UPackage__Script_UObjectPlugin, TEXT("/Script/UObjectPlugin"), Z_Registration_Info_UPackage__Script_UObjectPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x09CB69F8, 0x397F1C61));
PRAGMA_ENABLE_DEPRECATION_WARNINGS