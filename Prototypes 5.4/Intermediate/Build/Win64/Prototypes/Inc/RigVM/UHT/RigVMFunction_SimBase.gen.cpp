// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Simulation/RigVMFunction_SimBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_SimBase() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStructMutable();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_SimBase
static_assert(std::is_polymorphic<FRigVMFunction_SimBase>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_SimBase cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_SimBase;
class UScriptStruct* FRigVMFunction_SimBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_SimBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_SimBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_SimBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_SimBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_SimBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_SimBase>()
{
	return FRigVMFunction_SimBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_SimBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_SimBase.h" },
		{ "NodeColor", "0.25 0.05 0.05" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_SimBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_SimBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMFunction_SimBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_SimBase),
	alignof(FRigVMFunction_SimBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_SimBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_SimBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_SimBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_SimBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_SimBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_SimBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_SimBase

// Begin ScriptStruct FRigVMFunction_SimBaseMutable
static_assert(std::is_polymorphic<FRigVMFunction_SimBaseMutable>() == std::is_polymorphic<FRigVMStructMutable>(), "USTRUCT FRigVMFunction_SimBaseMutable cannot be polymorphic unless super FRigVMStructMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_SimBaseMutable;
class UScriptStruct* FRigVMFunction_SimBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_SimBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_SimBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_SimBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_SimBaseMutable.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_SimBaseMutable>()
{
	return FRigVMFunction_SimBaseMutable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_SimBase.h" },
		{ "NodeColor", "0.25 0.05 0.05" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_SimBaseMutable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStructMutable,
	&NewStructOps,
	"RigVMFunction_SimBaseMutable",
	nullptr,
	0,
	sizeof(FRigVMFunction_SimBaseMutable),
	alignof(FRigVMFunction_SimBaseMutable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_SimBaseMutable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_SimBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_SimBaseMutable.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_SimBaseMutable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_SimBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_SimBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_SimBase_Statics::NewStructOps, TEXT("RigVMFunction_SimBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_SimBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_SimBase), 55549262U) },
		{ FRigVMFunction_SimBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable_Statics::NewStructOps, TEXT("RigVMFunction_SimBaseMutable"), &Z_Registration_Info_UScriptStruct_RigVMFunction_SimBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_SimBaseMutable), 1189281783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_SimBase_h_2494494341(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_SimBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_SimBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS