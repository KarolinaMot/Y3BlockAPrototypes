// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAcceleration.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAcceleration() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAcceleration();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAcceleration_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleAcceleration
void UParticleModuleAcceleration::StaticRegisterNativesUParticleModuleAcceleration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAcceleration);
UClass* Z_Construct_UClass_UParticleModuleAcceleration_NoRegister()
{
	return UParticleModuleAcceleration::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleAcceleration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Acceleration" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAcceleration.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAcceleration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "Comment", "/**\n\x09 *\x09The initial acceleration of the particle.\n\x09 *\x09Value is obtained using the EmitterTime at particle spawn.\n\x09 *\x09""Each frame, the current and base velocity of the particle \n\x09 *\x09is then updated using the formula \n\x09 *\x09\x09velocity += acceleration * DeltaTime\n\x09 *\x09where DeltaTime is the time passed since the last frame.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAcceleration.h" },
		{ "ToolTip", "The initial acceleration of the particle.\nValue is obtained using the EmitterTime at particle spawn.\nEach frame, the current and base velocity of the particle\nis then updated using the formula\n        velocity += acceleration * DeltaTime\nwhere DeltaTime is the time passed since the last frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyOwnerScale_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "Comment", "/**\n\x09 *\x09If true, then apply the particle system components scale \n\x09 *\x09to the acceleration value.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAcceleration.h" },
		{ "ToolTip", "If true, then apply the particle system components scale\nto the acceleration value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static void NewProp_bApplyOwnerScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyOwnerScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAcceleration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAcceleration, Acceleration), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) }; // 1238237137
void Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_bApplyOwnerScale_SetBit(void* Obj)
{
	((UParticleModuleAcceleration*)Obj)->bApplyOwnerScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_bApplyOwnerScale = { "bApplyOwnerScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAcceleration), &Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_bApplyOwnerScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyOwnerScale_MetaData), NewProp_bApplyOwnerScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_bApplyOwnerScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAcceleration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleAcceleration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAcceleration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAcceleration_Statics::ClassParams = {
	&UParticleModuleAcceleration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleAcceleration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAcceleration_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAcceleration_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleAcceleration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleAcceleration()
{
	if (!Z_Registration_Info_UClass_UParticleModuleAcceleration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAcceleration.OuterSingleton, Z_Construct_UClass_UParticleModuleAcceleration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleAcceleration.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleAcceleration>()
{
	return UParticleModuleAcceleration::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAcceleration);
UParticleModuleAcceleration::~UParticleModuleAcceleration() {}
// End Class UParticleModuleAcceleration

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAcceleration_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAcceleration, UParticleModuleAcceleration::StaticClass, TEXT("UParticleModuleAcceleration"), &Z_Registration_Info_UClass_UParticleModuleAcceleration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAcceleration), 4119564360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAcceleration_h_3656099256(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAcceleration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAcceleration_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
