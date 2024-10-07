// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraScalabilityState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScalabilityState() {}

// Begin Cross Module References
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScalabilityState();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraScalabilityState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScalabilityState;
class UScriptStruct* FNiagaraScalabilityState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScalabilityState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScalabilityState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScalabilityState, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScalabilityState"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScalabilityState.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScalabilityState>()
{
	return FNiagaraScalabilityState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraScalabilityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Significance_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastVisibleTime_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewlyRegistered_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewlyRegisteredDirty_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCulled_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviousCulled_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCulledByDistance_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCulledByInstanceCount_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCulledByVisibility_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCulledByGlobalBudget_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Significance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastVisibleTime;
	static void NewProp_bNewlyRegistered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewlyRegistered;
	static void NewProp_bNewlyRegisteredDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewlyRegisteredDirty;
	static void NewProp_bCulled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCulled;
	static void NewProp_bPreviousCulled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviousCulled;
	static void NewProp_bCulledByDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCulledByDistance;
	static void NewProp_bCulledByInstanceCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCulledByInstanceCount;
	static void NewProp_bCulledByVisibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCulledByVisibility;
	static void NewProp_bCulledByGlobalBudget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCulledByGlobalBudget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScalabilityState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_Significance = { "Significance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScalabilityState, Significance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Significance_MetaData), NewProp_Significance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_LastVisibleTime = { "LastVisibleTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScalabilityState, LastVisibleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastVisibleTime_MetaData), NewProp_LastVisibleTime_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bNewlyRegistered_SetBit(void* Obj)
{
	((FNiagaraScalabilityState*)Obj)->bNewlyRegistered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bNewlyRegistered = { "bNewlyRegistered", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bNewlyRegistered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewlyRegistered_MetaData), NewProp_bNewlyRegistered_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bNewlyRegisteredDirty_SetBit(void* Obj)
{
	((FNiagaraScalabilityState*)Obj)->bNewlyRegisteredDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bNewlyRegisteredDirty = { "bNewlyRegisteredDirty", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bNewlyRegisteredDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewlyRegisteredDirty_MetaData), NewProp_bNewlyRegisteredDirty_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulled_SetBit(void* Obj)
{
	((FNiagaraScalabilityState*)Obj)->bCulled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulled = { "bCulled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCulled_MetaData), NewProp_bCulled_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bPreviousCulled_SetBit(void* Obj)
{
	((FNiagaraScalabilityState*)Obj)->bPreviousCulled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bPreviousCulled = { "bPreviousCulled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bPreviousCulled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviousCulled_MetaData), NewProp_bPreviousCulled_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByDistance_SetBit(void* Obj)
{
	((FNiagaraScalabilityState*)Obj)->bCulledByDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByDistance = { "bCulledByDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCulledByDistance_MetaData), NewProp_bCulledByDistance_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByInstanceCount_SetBit(void* Obj)
{
	((FNiagaraScalabilityState*)Obj)->bCulledByInstanceCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByInstanceCount = { "bCulledByInstanceCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByInstanceCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCulledByInstanceCount_MetaData), NewProp_bCulledByInstanceCount_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByVisibility_SetBit(void* Obj)
{
	((FNiagaraScalabilityState*)Obj)->bCulledByVisibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByVisibility = { "bCulledByVisibility", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCulledByVisibility_MetaData), NewProp_bCulledByVisibility_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByGlobalBudget_SetBit(void* Obj)
{
	((FNiagaraScalabilityState*)Obj)->bCulledByGlobalBudget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByGlobalBudget = { "bCulledByGlobalBudget", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByGlobalBudget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCulledByGlobalBudget_MetaData), NewProp_bCulledByGlobalBudget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_Significance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_LastVisibleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bNewlyRegistered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bNewlyRegisteredDirty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bPreviousCulled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByInstanceCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByGlobalBudget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraScalabilityState",
	Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::PropPointers),
	sizeof(FNiagaraScalabilityState),
	alignof(FNiagaraScalabilityState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScalabilityState()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScalabilityState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScalabilityState.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScalabilityState.InnerSingleton;
}
// End ScriptStruct FNiagaraScalabilityState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityState_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraScalabilityState::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewStructOps, TEXT("NiagaraScalabilityState"), &Z_Registration_Info_UScriptStruct_NiagaraScalabilityState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScalabilityState), 1537045162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityState_h_2216336047(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityState_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS