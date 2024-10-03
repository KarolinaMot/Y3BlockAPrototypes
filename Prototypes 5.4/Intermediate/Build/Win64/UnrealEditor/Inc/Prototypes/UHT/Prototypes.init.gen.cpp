// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototypes_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Prototypes;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Prototypes()
	{
		if (!Z_Registration_Info_UPackage__Script_Prototypes.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Prototypes",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x7005DBDA,
				0xF646B185,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Prototypes.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Prototypes.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Prototypes(Z_Construct_UPackage__Script_Prototypes, TEXT("/Script/Prototypes"), Z_Registration_Info_UPackage__Script_Prototypes, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7005DBDA, 0xF646B185));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
