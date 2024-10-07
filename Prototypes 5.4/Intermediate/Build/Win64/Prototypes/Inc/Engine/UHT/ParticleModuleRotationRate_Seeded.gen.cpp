// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleRotationRate_Seeded.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationRate_Seeded() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRate();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRate_Seeded();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRate_Seeded_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleRotationRate_Seeded
void UParticleModuleRotationRate_Seeded::StaticRegisterNativesUParticleModuleRotationRate_Seeded()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleRotationRate_Seeded);
UClass* Z_Construct_UClass_UParticleModuleRotationRate_Seeded_NoRegister()
{
	return UParticleModuleRotationRate_Seeded::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Init Rotation Rate (Seed)" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleRotationRate_Seeded.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRate_Seeded.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeedInfo_MetaData[] = {
		{ "Category", "RandomSeed" },
		{ "Comment", "/** The random seed(s) to use for looking up values in StartLocation */" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRate_Seeded.h" },
		{ "ToolTip", "The random seed(s) to use for looking up values in StartLocation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomSeedInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRotationRate_Seeded>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics::NewProp_RandomSeedInfo = { "RandomSeedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRotationRate_Seeded, RandomSeedInfo), Z_Construct_UScriptStruct_FParticleRandomSeedInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeedInfo_MetaData), NewProp_RandomSeedInfo_MetaData) }; // 2841392657
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics::NewProp_RandomSeedInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRate,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics::ClassParams = {
	&UParticleModuleRotationRate_Seeded::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleRotationRate_Seeded()
{
	if (!Z_Registration_Info_UClass_UParticleModuleRotationRate_Seeded.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleRotationRate_Seeded.OuterSingleton, Z_Construct_UClass_UParticleModuleRotationRate_Seeded_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleRotationRate_Seeded.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleRotationRate_Seeded>()
{
	return UParticleModuleRotationRate_Seeded::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationRate_Seeded);
UParticleModuleRotationRate_Seeded::~UParticleModuleRotationRate_Seeded() {}
// End Class UParticleModuleRotationRate_Seeded

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRate_Seeded_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleRotationRate_Seeded, UParticleModuleRotationRate_Seeded::StaticClass, TEXT("UParticleModuleRotationRate_Seeded"), &Z_Registration_Info_UClass_UParticleModuleRotationRate_Seeded, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleRotationRate_Seeded), 2287198017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRate_Seeded_h_2179619848(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRate_Seeded_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRate_Seeded_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS