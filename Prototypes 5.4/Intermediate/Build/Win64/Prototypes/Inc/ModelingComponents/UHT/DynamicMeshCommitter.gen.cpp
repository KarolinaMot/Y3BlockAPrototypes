// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/TargetInterfaces/DynamicMeshCommitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshCommitter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshCommitter();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshCommitter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Interface UDynamicMeshCommitter
void UDynamicMeshCommitter::StaticRegisterNativesUDynamicMeshCommitter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshCommitter);
UClass* Z_Construct_UClass_UDynamicMeshCommitter_NoRegister()
{
	return UDynamicMeshCommitter::StaticClass();
}
struct Z_Construct_UClass_UDynamicMeshCommitter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/DynamicMeshCommitter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDynamicMeshCommitter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDynamicMeshCommitter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshCommitter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshCommitter_Statics::ClassParams = {
	&UDynamicMeshCommitter::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshCommitter_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicMeshCommitter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDynamicMeshCommitter()
{
	if (!Z_Registration_Info_UClass_UDynamicMeshCommitter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshCommitter.OuterSingleton, Z_Construct_UClass_UDynamicMeshCommitter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicMeshCommitter.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDynamicMeshCommitter>()
{
	return UDynamicMeshCommitter::StaticClass();
}
UDynamicMeshCommitter::UDynamicMeshCommitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshCommitter);
UDynamicMeshCommitter::~UDynamicMeshCommitter() {}
// End Interface UDynamicMeshCommitter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshCommitter, UDynamicMeshCommitter::StaticClass, TEXT("UDynamicMeshCommitter"), &Z_Registration_Info_UClass_UDynamicMeshCommitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshCommitter), 2401922980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_2990253909(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
