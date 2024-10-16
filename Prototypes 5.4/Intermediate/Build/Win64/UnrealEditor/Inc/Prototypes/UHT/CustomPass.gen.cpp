// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototypes/CustomPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPass() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PROTOTYPES_API UClass* Z_Construct_UClass_ACustomPass();
PROTOTYPES_API UClass* Z_Construct_UClass_ACustomPass_NoRegister();
UPackage* Z_Construct_UPackage__Script_Prototypes();
// End Cross Module References

// Begin Class ACustomPass
void ACustomPass::StaticRegisterNativesACustomPass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomPass);
UClass* Z_Construct_UClass_ACustomPass_NoRegister()
{
	return ACustomPass::StaticClass();
}
struct Z_Construct_UClass_ACustomPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CustomPass.h" },
		{ "ModuleRelativePath", "CustomPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TendrilEdgeColor_MetaData[] = {
		{ "Category", "CustomPass" },
		{ "ModuleRelativePath", "CustomPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthBias_MetaData[] = {
		{ "Category", "CustomPass" },
		{ "ModuleRelativePath", "CustomPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeThickness_MetaData[] = {
		{ "Category", "CustomPass" },
		{ "ModuleRelativePath", "CustomPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeIntensity_MetaData[] = {
		{ "Category", "CustomPass" },
		{ "ModuleRelativePath", "CustomPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseSize_MetaData[] = {
		{ "Category", "CustomPass" },
		{ "ModuleRelativePath", "CustomPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseStrength_MetaData[] = {
		{ "Category", "CustomPass" },
		{ "ModuleRelativePath", "CustomPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseMovementSpeed_MetaData[] = {
		{ "Category", "CustomPass" },
		{ "ModuleRelativePath", "CustomPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLines_MetaData[] = {
		{ "Category", "CustomPass" },
		{ "ModuleRelativePath", "CustomPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTex_MetaData[] = {
		{ "Category", "CustomPass" },
		{ "ModuleRelativePath", "CustomPass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TendrilEdgeColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseMovementSpeed;
	static void NewProp_DebugLines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugLines;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseTex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACustomPass_Statics::NewProp_TendrilEdgeColor = { "TendrilEdgeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPass, TendrilEdgeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TendrilEdgeColor_MetaData), NewProp_TendrilEdgeColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomPass_Statics::NewProp_DepthBias = { "DepthBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPass, DepthBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthBias_MetaData), NewProp_DepthBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomPass_Statics::NewProp_EdgeThickness = { "EdgeThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPass, EdgeThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeThickness_MetaData), NewProp_EdgeThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomPass_Statics::NewProp_EdgeIntensity = { "EdgeIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPass, EdgeIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeIntensity_MetaData), NewProp_EdgeIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomPass_Statics::NewProp_NoiseSize = { "NoiseSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPass, NoiseSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseSize_MetaData), NewProp_NoiseSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomPass_Statics::NewProp_NoiseStrength = { "NoiseStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPass, NoiseStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseStrength_MetaData), NewProp_NoiseStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomPass_Statics::NewProp_NoiseMovementSpeed = { "NoiseMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPass, NoiseMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseMovementSpeed_MetaData), NewProp_NoiseMovementSpeed_MetaData) };
void Z_Construct_UClass_ACustomPass_Statics::NewProp_DebugLines_SetBit(void* Obj)
{
	((ACustomPass*)Obj)->DebugLines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACustomPass_Statics::NewProp_DebugLines = { "DebugLines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACustomPass), &Z_Construct_UClass_ACustomPass_Statics::NewProp_DebugLines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLines_MetaData), NewProp_DebugLines_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPass_Statics::NewProp_NoiseTex = { "NoiseTex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPass, NoiseTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseTex_MetaData), NewProp_NoiseTex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPass_Statics::NewProp_TendrilEdgeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPass_Statics::NewProp_DepthBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPass_Statics::NewProp_EdgeThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPass_Statics::NewProp_EdgeIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPass_Statics::NewProp_NoiseSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPass_Statics::NewProp_NoiseStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPass_Statics::NewProp_NoiseMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPass_Statics::NewProp_DebugLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPass_Statics::NewProp_NoiseTex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACustomPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Prototypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomPass_Statics::ClassParams = {
	&ACustomPass::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACustomPass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPass_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPass_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomPass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACustomPass()
{
	if (!Z_Registration_Info_UClass_ACustomPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomPass.OuterSingleton, Z_Construct_UClass_ACustomPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustomPass.OuterSingleton;
}
template<> PROTOTYPES_API UClass* StaticClass<ACustomPass>()
{
	return ACustomPass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomPass);
ACustomPass::~ACustomPass() {}
// End Class ACustomPass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Univertsity_Y3A_Prototype_Prototypes_5_4_Source_Prototypes_CustomPass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustomPass, ACustomPass::StaticClass, TEXT("ACustomPass"), &Z_Registration_Info_UClass_ACustomPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomPass), 3838016436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Univertsity_Y3A_Prototype_Prototypes_5_4_Source_Prototypes_CustomPass_h_2235947145(TEXT("/Script/Prototypes"),
	Z_CompiledInDeferFile_FID_Univertsity_Y3A_Prototype_Prototypes_5_4_Source_Prototypes_CustomPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Univertsity_Y3A_Prototype_Prototypes_5_4_Source_Prototypes_CustomPass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
