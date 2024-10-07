// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_UniformIndexable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_UniformIndexable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec();
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable();
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimCurveCompressionCodec_UniformIndexable
void UAnimCurveCompressionCodec_UniformIndexable::StaticRegisterNativesUAnimCurveCompressionCodec_UniformIndexable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCurveCompressionCodec_UniformIndexable);
UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_NoRegister()
{
	return UAnimCurveCompressionCodec_UniformIndexable::StaticClass();
}
struct Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Uniform Indexable" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCurveCompressionCodec_UniformIndexable.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_UniformIndexable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionCodec_UniformIndexable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimCurveCompressionCodec,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::ClassParams = {
	&UAnimCurveCompressionCodec_UniformIndexable::StaticClass,
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
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable()
{
	if (!Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.OuterSingleton, Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimCurveCompressionCodec_UniformIndexable>()
{
	return UAnimCurveCompressionCodec_UniformIndexable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionCodec_UniformIndexable);
UAnimCurveCompressionCodec_UniformIndexable::~UAnimCurveCompressionCodec_UniformIndexable() {}
// End Class UAnimCurveCompressionCodec_UniformIndexable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformIndexable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCurveCompressionCodec_UniformIndexable, UAnimCurveCompressionCodec_UniformIndexable::StaticClass, TEXT("UAnimCurveCompressionCodec_UniformIndexable"), &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCurveCompressionCodec_UniformIndexable), 1679308022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformIndexable_h_2825410233(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformIndexable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformIndexable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
