// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFStaticMeshExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFStaticMeshExporter() {}

// Begin Cross Module References
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFStaticMeshExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFStaticMeshExporter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References

// Begin Class UGLTFStaticMeshExporter
void UGLTFStaticMeshExporter::StaticRegisterNativesUGLTFStaticMeshExporter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFStaticMeshExporter);
UClass* Z_Construct_UClass_UGLTFStaticMeshExporter_NoRegister()
{
	return UGLTFStaticMeshExporter::StaticClass();
}
struct Z_Construct_UClass_UGLTFStaticMeshExporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFStaticMeshExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFStaticMeshExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFStaticMeshExporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::ClassParams = {
	&UGLTFStaticMeshExporter::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLTFStaticMeshExporter()
{
	if (!Z_Registration_Info_UClass_UGLTFStaticMeshExporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFStaticMeshExporter.OuterSingleton, Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLTFStaticMeshExporter.OuterSingleton;
}
template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFStaticMeshExporter>()
{
	return UGLTFStaticMeshExporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFStaticMeshExporter);
UGLTFStaticMeshExporter::~UGLTFStaticMeshExporter() {}
// End Class UGLTFStaticMeshExporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFStaticMeshExporter, UGLTFStaticMeshExporter::StaticClass, TEXT("UGLTFStaticMeshExporter"), &Z_Registration_Info_UClass_UGLTFStaticMeshExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFStaticMeshExporter), 3246868855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h_4154149105(TEXT("/Script/GLTFExporter"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS