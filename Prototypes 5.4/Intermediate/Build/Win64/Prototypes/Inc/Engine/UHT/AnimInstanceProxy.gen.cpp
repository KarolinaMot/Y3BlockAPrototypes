// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimInstanceProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstanceProxy() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugItemType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EDrawDebugItemType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDrawDebugItemType;
static UEnum* EDrawDebugItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDrawDebugItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDrawDebugItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDrawDebugItemType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDrawDebugItemType"));
	}
	return Z_Registration_Info_UEnum_EDrawDebugItemType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDrawDebugItemType::Type>()
{
	return EDrawDebugItemType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Capsule.Name", "EDrawDebugItemType::Capsule" },
		{ "Circle.Name", "EDrawDebugItemType::Circle" },
		{ "Cone.Name", "EDrawDebugItemType::Cone" },
		{ "CoordinateSystem.Name", "EDrawDebugItemType::CoordinateSystem" },
		{ "DirectionalArrow.Name", "EDrawDebugItemType::DirectionalArrow" },
		{ "InWorldMessage.Name", "EDrawDebugItemType::InWorldMessage" },
		{ "Line.Name", "EDrawDebugItemType::Line" },
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
		{ "OnScreenMessage.Name", "EDrawDebugItemType::OnScreenMessage" },
		{ "Point.Name", "EDrawDebugItemType::Point" },
		{ "Sphere.Name", "EDrawDebugItemType::Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDrawDebugItemType::DirectionalArrow", (int64)EDrawDebugItemType::DirectionalArrow },
		{ "EDrawDebugItemType::Sphere", (int64)EDrawDebugItemType::Sphere },
		{ "EDrawDebugItemType::Line", (int64)EDrawDebugItemType::Line },
		{ "EDrawDebugItemType::OnScreenMessage", (int64)EDrawDebugItemType::OnScreenMessage },
		{ "EDrawDebugItemType::CoordinateSystem", (int64)EDrawDebugItemType::CoordinateSystem },
		{ "EDrawDebugItemType::Point", (int64)EDrawDebugItemType::Point },
		{ "EDrawDebugItemType::Circle", (int64)EDrawDebugItemType::Circle },
		{ "EDrawDebugItemType::Cone", (int64)EDrawDebugItemType::Cone },
		{ "EDrawDebugItemType::InWorldMessage", (int64)EDrawDebugItemType::InWorldMessage },
		{ "EDrawDebugItemType::Capsule", (int64)EDrawDebugItemType::Capsule },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDrawDebugItemType",
	"EDrawDebugItemType::Type",
	Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDrawDebugItemType()
{
	if (!Z_Registration_Info_UEnum_EDrawDebugItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDrawDebugItemType.InnerSingleton, Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDrawDebugItemType.InnerSingleton;
}
// End Enum EDrawDebugItemType

// Begin ScriptStruct FAnimInstanceProxy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimInstanceProxy;
class UScriptStruct* FAnimInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimInstanceProxy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_AnimInstanceProxy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimInstanceProxy>()
{
	return FAnimInstanceProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy object passed around during animation tree update in lieu of a UAnimInstance */" },
		{ "DisplayName", "Native Variables" },
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
		{ "ToolTip", "Proxy object passed around during animation tree update in lieu of a UAnimInstance" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimInstanceProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimInstanceProxy",
	nullptr,
	0,
	sizeof(FAnimInstanceProxy),
	alignof(FAnimInstanceProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy()
{
	if (!Z_Registration_Info_UScriptStruct_AnimInstanceProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimInstanceProxy.InnerSingleton;
}
// End ScriptStruct FAnimInstanceProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDrawDebugItemType_StaticEnum, TEXT("EDrawDebugItemType"), &Z_Registration_Info_UEnum_EDrawDebugItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3818335344U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::NewStructOps, TEXT("AnimInstanceProxy"), &Z_Registration_Info_UScriptStruct_AnimInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimInstanceProxy), 3772960521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_1880808957(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
