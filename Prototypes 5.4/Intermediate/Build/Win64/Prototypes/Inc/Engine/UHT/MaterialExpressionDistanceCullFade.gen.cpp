// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDistanceCullFade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDistanceCullFade() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDistanceCullFade
void UMaterialExpressionDistanceCullFade::StaticRegisterNativesUMaterialExpressionDistanceCullFade()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDistanceCullFade);
UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade_NoRegister()
{
	return UMaterialExpressionDistanceCullFade::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDistanceCullFade.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceCullFade.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDistanceCullFade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::ClassParams = {
	&UMaterialExpressionDistanceCullFade::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDistanceCullFade>()
{
	return UMaterialExpressionDistanceCullFade::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDistanceCullFade);
UMaterialExpressionDistanceCullFade::~UMaterialExpressionDistanceCullFade() {}
// End Class UMaterialExpressionDistanceCullFade

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceCullFade_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDistanceCullFade, UMaterialExpressionDistanceCullFade::StaticClass, TEXT("UMaterialExpressionDistanceCullFade"), &Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDistanceCullFade), 2209874897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceCullFade_h_1675089538(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceCullFade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceCullFade_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS