// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionRequiredSamplersSwitch.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRequiredSamplersSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionRequiredSamplersSwitch
void UMaterialExpressionRequiredSamplersSwitch::StaticRegisterNativesUMaterialExpressionRequiredSamplersSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRequiredSamplersSwitch);
UClass* Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_NoRegister()
{
	return UMaterialExpressionRequiredSamplersSwitch::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionRequiredSamplersSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRequiredSamplersSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRequiredSamplersSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRequiredSamplersSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredSamplers_MetaData[] = {
		{ "Category", "MaterialExpressionRequiredSamplersSwitch" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRequiredSamplersSwitch.h" },
		{ "UIMax", "255" },
		{ "UIMin", "16" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTrue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputFalse;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RequiredSamplers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRequiredSamplersSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::NewProp_InputTrue = { "InputTrue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRequiredSamplersSwitch, InputTrue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTrue_MetaData), NewProp_InputTrue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::NewProp_InputFalse = { "InputFalse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRequiredSamplersSwitch, InputFalse), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputFalse_MetaData), NewProp_InputFalse_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::NewProp_RequiredSamplers = { "RequiredSamplers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRequiredSamplersSwitch, RequiredSamplers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredSamplers_MetaData), NewProp_RequiredSamplers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::NewProp_InputTrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::NewProp_InputFalse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::NewProp_RequiredSamplers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::ClassParams = {
	&UMaterialExpressionRequiredSamplersSwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionRequiredSamplersSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRequiredSamplersSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionRequiredSamplersSwitch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRequiredSamplersSwitch>()
{
	return UMaterialExpressionRequiredSamplersSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRequiredSamplersSwitch);
UMaterialExpressionRequiredSamplersSwitch::~UMaterialExpressionRequiredSamplersSwitch() {}
// End Class UMaterialExpressionRequiredSamplersSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRequiredSamplersSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRequiredSamplersSwitch, UMaterialExpressionRequiredSamplersSwitch::StaticClass, TEXT("UMaterialExpressionRequiredSamplersSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionRequiredSamplersSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRequiredSamplersSwitch), 1277923914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRequiredSamplersSwitch_h_2751820053(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRequiredSamplersSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRequiredSamplersSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
