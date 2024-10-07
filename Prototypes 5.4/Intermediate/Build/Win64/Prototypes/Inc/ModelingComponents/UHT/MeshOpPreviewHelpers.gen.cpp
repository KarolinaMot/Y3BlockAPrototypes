// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/MeshOpPreviewHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshOpPreviewHelpers() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UMeshOpPreviewWithBackgroundCompute
void UMeshOpPreviewWithBackgroundCompute::StaticRegisterNativesUMeshOpPreviewWithBackgroundCompute()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshOpPreviewWithBackgroundCompute);
UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister()
{
	return UMeshOpPreviewWithBackgroundCompute::StaticClass();
}
struct Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshOpPreviewWithBackgroundCompute is an infrastructure object that implements a common UI\n * pattern in interactive 3D tools, where we want to run an expensive computation on a mesh that\n * is based on user-specified parameters, and show a preview of the result. The expensive computation \n * (a MeshOperator) must run in a background thread so as to not block the UI. If the user\n * changes parameters while the Operator is running, it should be canceled and restarted. \n * When it completes, the Preview will be updated. When the user is happy, the current Mesh is\n * returned to the owner of this object.\n * \n * The MeshOperators are provided by the owner via a IDynamicMeshOperatorFactory implementation.\n * The owner must also Tick() this object regularly to allow the Preview to update when the\n * background computations complete.\n * \n * If an InProgress Material is set (via ConfigureMaterials) then when a background computation\n * is active, this material will be used to draw the previous Preview result, to give the \n * user a visual indication that work is happening.\n */" },
		{ "IncludePath", "MeshOpPreviewHelpers.h" },
		{ "ModuleRelativePath", "Public/MeshOpPreviewHelpers.h" },
		{ "ToolTip", "UMeshOpPreviewWithBackgroundCompute is an infrastructure object that implements a common UI\npattern in interactive 3D tools, where we want to run an expensive computation on a mesh that\nis based on user-specified parameters, and show a preview of the result. The expensive computation\n(a MeshOperator) must run in a background thread so as to not block the UI. If the user\nchanges parameters while the Operator is running, it should be canceled and restarted.\nWhen it completes, the Preview will be updated. When the user is happy, the current Mesh is\nreturned to the owner of this object.\n\nThe MeshOperators are provided by the owner via a IDynamicMeshOperatorFactory implementation.\nThe owner must also Tick() this object regularly to allow the Preview to update when the\nbackground computations complete.\n\nIf an InProgress Material is set (via ConfigureMaterials) then when a background computation\nis active, this material will be used to draw the previous Preview result, to give the\nuser a visual indication that work is happening." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "Comment", "// preview of MeshOperator result\n" },
		{ "ModuleRelativePath", "Public/MeshOpPreviewHelpers.h" },
		{ "ToolTip", "preview of MeshOperator result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandardMaterials_MetaData[] = {
		{ "Comment", "// input set of materials to assign to PreviewMesh\n" },
		{ "ModuleRelativePath", "Public/MeshOpPreviewHelpers.h" },
		{ "ToolTip", "input set of materials to assign to PreviewMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterial_MetaData[] = {
		{ "Comment", "// override material to forward to PreviewMesh if set\n" },
		{ "ModuleRelativePath", "Public/MeshOpPreviewHelpers.h" },
		{ "ToolTip", "override material to forward to PreviewMesh if set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkingMaterial_MetaData[] = {
		{ "Comment", "// if non-null, this material is swapped in when a background compute is active\n" },
		{ "ModuleRelativePath", "Public/MeshOpPreviewHelpers.h" },
		{ "ToolTip", "if non-null, this material is swapped in when a background compute is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryMaterial_MetaData[] = {
		{ "Comment", "// secondary render material to forward to PreviewMesh if set\n" },
		{ "ModuleRelativePath", "Public/MeshOpPreviewHelpers.h" },
		{ "ToolTip", "secondary render material to forward to PreviewMesh if set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshOpPreviewHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StandardMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StandardMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorkingMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryMaterial;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PreviewWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshOpPreviewWithBackgroundCompute>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshOpPreviewWithBackgroundCompute, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_StandardMaterials_Inner = { "StandardMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_StandardMaterials = { "StandardMaterials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshOpPreviewWithBackgroundCompute, StandardMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandardMaterials_MetaData), NewProp_StandardMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshOpPreviewWithBackgroundCompute, OverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterial_MetaData), NewProp_OverrideMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_WorkingMaterial = { "WorkingMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshOpPreviewWithBackgroundCompute, WorkingMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkingMaterial_MetaData), NewProp_WorkingMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_SecondaryMaterial = { "SecondaryMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshOpPreviewWithBackgroundCompute, SecondaryMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryMaterial_MetaData), NewProp_SecondaryMaterial_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_PreviewWorld = { "PreviewWorld", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshOpPreviewWithBackgroundCompute, PreviewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewWorld_MetaData), NewProp_PreviewWorld_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_PreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_StandardMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_StandardMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_OverrideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_WorkingMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_SecondaryMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::NewProp_PreviewWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::ClassParams = {
	&UMeshOpPreviewWithBackgroundCompute::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute()
{
	if (!Z_Registration_Info_UClass_UMeshOpPreviewWithBackgroundCompute.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshOpPreviewWithBackgroundCompute.OuterSingleton, Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshOpPreviewWithBackgroundCompute.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMeshOpPreviewWithBackgroundCompute>()
{
	return UMeshOpPreviewWithBackgroundCompute::StaticClass();
}
UMeshOpPreviewWithBackgroundCompute::UMeshOpPreviewWithBackgroundCompute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshOpPreviewWithBackgroundCompute);
UMeshOpPreviewWithBackgroundCompute::~UMeshOpPreviewWithBackgroundCompute() {}
// End Class UMeshOpPreviewWithBackgroundCompute

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshOpPreviewHelpers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute, UMeshOpPreviewWithBackgroundCompute::StaticClass, TEXT("UMeshOpPreviewWithBackgroundCompute"), &Z_Registration_Info_UClass_UMeshOpPreviewWithBackgroundCompute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshOpPreviewWithBackgroundCompute), 3476502313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshOpPreviewHelpers_h_2010329662(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshOpPreviewHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_MeshOpPreviewHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS