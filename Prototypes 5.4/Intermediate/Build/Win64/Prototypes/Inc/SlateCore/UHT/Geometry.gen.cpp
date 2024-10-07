// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometry() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin ScriptStruct FGeometry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Geometry;
class UScriptStruct* FGeometry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Geometry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Geometry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometry, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("Geometry"));
	}
	return Z_Registration_Info_UScriptStruct_Geometry.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FGeometry>()
{
	return FGeometry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the position, size, and absolute position of a Widget in Slate.\n * The absolute location of a geometry is usually screen space or\n * window space depending on where the geometry originated.\n * Geometries are usually paired with a SWidget pointer in order\n * to provide information about a specific widget (see FArrangedWidget).\n * A Geometry's parent is generally thought to be the Geometry of the\n * the corresponding parent widget.\n */" },
		{ "ModuleRelativePath", "Public/Layout/Geometry.h" },
		{ "ToolTip", "Represents the position, size, and absolute position of a Widget in Slate.\nThe absolute location of a geometry is usually screen space or\nwindow space depending on where the geometry originated.\nGeometries are usually paired with a SWidget pointer in order\nto provide information about a specific widget (see FArrangedWidget).\nA Geometry's parent is generally thought to be the Geometry of the\nthe corresponding parent widget." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	&NewStructOps,
	"Geometry",
	nullptr,
	0,
	sizeof(FGeometry),
	alignof(FGeometry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometry()
{
	if (!Z_Registration_Info_UScriptStruct_Geometry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Geometry.InnerSingleton, Z_Construct_UScriptStruct_FGeometry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Geometry.InnerSingleton;
}
// End ScriptStruct FGeometry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Geometry_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeometry::StaticStruct, Z_Construct_UScriptStruct_FGeometry_Statics::NewStructOps, TEXT("Geometry"), &Z_Registration_Info_UScriptStruct_Geometry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometry), 3532897347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Geometry_h_547331949(TEXT("/Script/SlateCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Geometry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Geometry_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
