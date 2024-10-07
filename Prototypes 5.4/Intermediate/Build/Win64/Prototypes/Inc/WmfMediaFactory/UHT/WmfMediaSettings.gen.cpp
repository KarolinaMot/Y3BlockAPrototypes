// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WmfMediaFactory/Public/WmfMediaSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWmfMediaSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WmfMediaFactory();
WMFMEDIAFACTORY_API UClass* Z_Construct_UClass_UWmfMediaSettings();
WMFMEDIAFACTORY_API UClass* Z_Construct_UClass_UWmfMediaSettings_NoRegister();
// End Cross Module References

// Begin Class UWmfMediaSettings
void UWmfMediaSettings::StaticRegisterNativesUWmfMediaSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWmfMediaSettings);
UClass* Z_Construct_UClass_UWmfMediaSettings_NoRegister()
{
	return UWmfMediaSettings::StaticClass();
}
struct Z_Construct_UClass_UWmfMediaSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the WmfMedia plug-in.\n */" },
		{ "IncludePath", "WmfMediaSettings.h" },
		{ "ModuleRelativePath", "Public/WmfMediaSettings.h" },
		{ "ToolTip", "Settings for the WmfMedia plug-in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowNonStandardCodecs_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/**\n\x09 * Whether to allow the loading of media that uses non-standard codecs (default = off).\n\x09 *\n\x09 * By default, the player will attempt to detect audio and video codecs that\n\x09 * are not supported by the operating system out of the box, but may require\n\x09 * the user to install additional codec packs. Enable this option to skip\n\x09 * this check and allow the usage of non-standard codecs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WmfMediaSettings.h" },
		{ "ToolTip", "Whether to allow the loading of media that uses non-standard codecs (default = off).\n\nBy default, the player will attempt to detect audio and video codecs that\nare not supported by the operating system out of the box, but may require\nthe user to install additional codec packs. Enable this option to skip\nthis check and allow the usage of non-standard codecs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowLatency_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/**\n\x09 * Enable low latency processing in the Windows media pipeline (default = off).\n\x09 *\n\x09 * When this setting is enabled, the media data is generated with the lowest\n\x09 * possible delay. This might be desirable for certain real-time applications,\n\x09 * but it can negatively affect audio and video quality.\n\x09 *\n\x09 * @note This setting is only supported on Windows 8 or newer\n\x09 */" },
		{ "ModuleRelativePath", "Public/WmfMediaSettings.h" },
		{ "ToolTip", "Enable low latency processing in the Windows media pipeline (default = off).\n\nWhen this setting is enabled, the media data is generated with the lowest\npossible delay. This might be desirable for certain real-time applications,\nbut it can negatively affect audio and video quality.\n\n@note This setting is only supported on Windows 8 or newer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeAudioOut_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Play audio tracks via the operating system's native sound mixer (default = off). */" },
		{ "ModuleRelativePath", "Public/WmfMediaSettings.h" },
		{ "ToolTip", "Play audio tracks via the operating system's native sound mixer (default = off)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardwareAcceleratedVideoDecoding_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Use hardware accelerated video acceleration (GPU) when possible otherwise fallback to software implementation (CPU), Windows and DX11 only. */" },
		{ "DisplayName", "Hardware Accelerated Video Decoding (Experimental)" },
		{ "ModuleRelativePath", "Public/WmfMediaSettings.h" },
		{ "ToolTip", "Use hardware accelerated video acceleration (GPU) when possible otherwise fallback to software implementation (CPU), Windows and DX11 only." },
	};
#endif // WITH_METADATA
	static void NewProp_AllowNonStandardCodecs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowNonStandardCodecs;
	static void NewProp_LowLatency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LowLatency;
	static void NewProp_NativeAudioOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NativeAudioOut;
	static void NewProp_HardwareAcceleratedVideoDecoding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HardwareAcceleratedVideoDecoding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWmfMediaSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_AllowNonStandardCodecs_SetBit(void* Obj)
{
	((UWmfMediaSettings*)Obj)->AllowNonStandardCodecs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_AllowNonStandardCodecs = { "AllowNonStandardCodecs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWmfMediaSettings), &Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_AllowNonStandardCodecs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowNonStandardCodecs_MetaData), NewProp_AllowNonStandardCodecs_MetaData) };
void Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_LowLatency_SetBit(void* Obj)
{
	((UWmfMediaSettings*)Obj)->LowLatency = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_LowLatency = { "LowLatency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWmfMediaSettings), &Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_LowLatency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowLatency_MetaData), NewProp_LowLatency_MetaData) };
void Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_NativeAudioOut_SetBit(void* Obj)
{
	((UWmfMediaSettings*)Obj)->NativeAudioOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_NativeAudioOut = { "NativeAudioOut", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWmfMediaSettings), &Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_NativeAudioOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeAudioOut_MetaData), NewProp_NativeAudioOut_MetaData) };
void Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_HardwareAcceleratedVideoDecoding_SetBit(void* Obj)
{
	((UWmfMediaSettings*)Obj)->HardwareAcceleratedVideoDecoding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_HardwareAcceleratedVideoDecoding = { "HardwareAcceleratedVideoDecoding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWmfMediaSettings), &Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_HardwareAcceleratedVideoDecoding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardwareAcceleratedVideoDecoding_MetaData), NewProp_HardwareAcceleratedVideoDecoding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWmfMediaSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_AllowNonStandardCodecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_LowLatency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_NativeAudioOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWmfMediaSettings_Statics::NewProp_HardwareAcceleratedVideoDecoding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWmfMediaSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWmfMediaSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WmfMediaFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWmfMediaSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWmfMediaSettings_Statics::ClassParams = {
	&UWmfMediaSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWmfMediaSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWmfMediaSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWmfMediaSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UWmfMediaSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWmfMediaSettings()
{
	if (!Z_Registration_Info_UClass_UWmfMediaSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWmfMediaSettings.OuterSingleton, Z_Construct_UClass_UWmfMediaSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWmfMediaSettings.OuterSingleton;
}
template<> WMFMEDIAFACTORY_API UClass* StaticClass<UWmfMediaSettings>()
{
	return UWmfMediaSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWmfMediaSettings);
UWmfMediaSettings::~UWmfMediaSettings() {}
// End Class UWmfMediaSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWmfMediaSettings, UWmfMediaSettings::StaticClass, TEXT("UWmfMediaSettings"), &Z_Registration_Info_UClass_UWmfMediaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWmfMediaSettings), 4025353712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_1165412477(TEXT("/Script/WmfMediaFactory"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS