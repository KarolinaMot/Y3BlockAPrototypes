// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioExtensions_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AudioExtensions;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AudioExtensions()
	{
		if (!Z_Registration_Info_UPackage__Script_AudioExtensions.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AudioExtensions",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x8CD18E8A,
				0x8F330B80,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AudioExtensions.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AudioExtensions.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AudioExtensions(Z_Construct_UPackage__Script_AudioExtensions, TEXT("/Script/AudioExtensions"), Z_Registration_Info_UPackage__Script_AudioExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8CD18E8A, 0x8F330B80));
PRAGMA_ENABLE_DEPRECATION_WARNINGS