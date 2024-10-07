// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Trail/ParticleModuleTrailBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTrailBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleTrailBase
void UParticleModuleTrailBase::StaticRegisterNativesUParticleModuleTrailBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleTrailBase);
UClass* Z_Construct_UClass_UParticleModuleTrailBase_NoRegister()
{
	return UParticleModuleTrailBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleTrailBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Trail" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Trail/ParticleModuleTrailBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTrailBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleTrailBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTrailBase_Statics::ClassParams = {
	&UParticleModuleTrailBase::StaticClass,
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
	0x000010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleTrailBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleTrailBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleTrailBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleTrailBase.OuterSingleton, Z_Construct_UClass_UParticleModuleTrailBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleTrailBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleTrailBase>()
{
	return UParticleModuleTrailBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTrailBase);
UParticleModuleTrailBase::~UParticleModuleTrailBase() {}
// End Class UParticleModuleTrailBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleTrailBase, UParticleModuleTrailBase::StaticClass, TEXT("UParticleModuleTrailBase"), &Z_Registration_Info_UClass_UParticleModuleTrailBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleTrailBase), 566068920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_2350097702(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS