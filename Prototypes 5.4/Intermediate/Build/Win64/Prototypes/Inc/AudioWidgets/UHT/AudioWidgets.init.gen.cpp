// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioWidgets_init() {}
	AUDIOWIDGETS_API UFunction* Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature();
	AUDIOWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature();
	AUDIOWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature();
	AUDIOWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AudioWidgets;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AudioWidgets()
	{
		if (!Z_Registration_Info_UPackage__Script_AudioWidgets.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AudioWidgets",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA6D83938,
				0x8CBA654E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AudioWidgets.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AudioWidgets.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AudioWidgets(Z_Construct_UPackage__Script_AudioWidgets, TEXT("/Script/AudioWidgets"), Z_Registration_Info_UPackage__Script_AudioWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA6D83938, 0x8CBA654E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS