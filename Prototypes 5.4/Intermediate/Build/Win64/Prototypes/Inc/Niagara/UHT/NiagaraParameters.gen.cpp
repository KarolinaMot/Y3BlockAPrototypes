// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraParameters.h"
#include "Niagara/Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameters() {}

// Begin Cross Module References
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameters();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameters;
class UScriptStruct* FNiagaraParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameters, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameters"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameters.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameters>()
{
	return FNiagaraParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "Uniform" },
		{ "Comment", "//TODO: Sort the array so we can binary search, do not change to a TMap to avoid memory bloat!\n" },
		{ "ModuleRelativePath", "Public/NiagaraParameters.h" },
		{ "ToolTip", "TODO: Sort the array so we can binary search, do not change to a TMap to avoid memory bloat!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameters_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2475164134
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameters_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraParameters, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 2475164134
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameters_Statics::NewProp_Parameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameters_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraParameters",
	Z_Construct_UScriptStruct_FNiagaraParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameters_Statics::PropPointers),
	sizeof(FNiagaraParameters),
	alignof(FNiagaraParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameters()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameters.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameters.InnerSingleton;
}
// End ScriptStruct FNiagaraParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameters_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraParameters::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameters_Statics::NewStructOps, TEXT("NiagaraParameters"), &Z_Registration_Info_UScriptStruct_NiagaraParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameters), 3940972434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameters_h_689972218(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameters_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS