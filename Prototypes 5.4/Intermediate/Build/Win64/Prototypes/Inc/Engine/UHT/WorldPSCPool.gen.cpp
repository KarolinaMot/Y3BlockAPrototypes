// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPSCPool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPSCPoolMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPSCPool();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPSCPoolElem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPSCPool();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EPSCPoolMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPSCPoolMethod;
static UEnum* EPSCPoolMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPSCPoolMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPSCPoolMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPSCPoolMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPSCPoolMethod"));
	}
	return Z_Registration_Info_UEnum_EPSCPoolMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPSCPoolMethod>()
{
	return EPSCPoolMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPSCPoolMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutoRelease.Comment", "/**\n\x09* PSC is allocated from the pool and will be automatically released back to it.\n\x09* User need not handle this any more that other PSCs but interaction with the PSC after the tick it's spawned in are unsafe.\n\x09* This method is useful for one-shot fx that you don't need to keep a reference to and can fire and forget.\n\x09*/" },
		{ "AutoRelease.Name", "EPSCPoolMethod::AutoRelease" },
		{ "AutoRelease.ToolTip", "PSC is allocated from the pool and will be automatically released back to it.\nUser need not handle this any more that other PSCs but interaction with the PSC after the tick it's spawned in are unsafe.\nThis method is useful for one-shot fx that you don't need to keep a reference to and can fire and forget." },
		{ "FreeInPool.Comment", "/**\n\x09Special entry that marks a PSC as having been returned to the pool. All PSCs currently in the pool are marked this way.\n\x09*/" },
		{ "FreeInPool.Hidden", "" },
		{ "FreeInPool.Name", "EPSCPoolMethod::FreeInPool" },
		{ "FreeInPool.ToolTip", "Special entry that marks a PSC as having been returned to the pool. All PSCs currently in the pool are marked this way." },
		{ "ManualRelease.Comment", "/**\n\x09* PSC is allocated from the pool but will NOT be automatically released back to it. User has ownership of the PSC and must call ReleaseToPool when finished with it otherwise the PSC will leak.\n\x09* Interaction with the PSC after it has been released are unsafe.\n\x09* This method is useful for persistent FX that you need to modify parameters upon etc over it's lifetime.\n\x09*/" },
		{ "ManualRelease.Name", "EPSCPoolMethod::ManualRelease" },
		{ "ManualRelease.ToolTip", "PSC is allocated from the pool but will NOT be automatically released back to it. User has ownership of the PSC and must call ReleaseToPool when finished with it otherwise the PSC will leak.\nInteraction with the PSC after it has been released are unsafe.\nThis method is useful for persistent FX that you need to modify parameters upon etc over it's lifetime." },
		{ "ManualRelease_OnComplete.Comment", "/** \n\x09Special entry allowing manual release PSCs to be manually released but wait until completion to be returned to the pool.\n\x09*/" },
		{ "ManualRelease_OnComplete.Hidden", "" },
		{ "ManualRelease_OnComplete.Name", "EPSCPoolMethod::ManualRelease_OnComplete" },
		{ "ManualRelease_OnComplete.ToolTip", "Special entry allowing manual release PSCs to be manually released but wait until completion to be returned to the pool." },
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
		{ "None.Comment", "/**\n\x09* PSC is will be created fresh and not allocated from the pool.\n\x09*/" },
		{ "None.Name", "EPSCPoolMethod::None" },
		{ "None.ToolTip", "PSC is will be created fresh and not allocated from the pool." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPSCPoolMethod::None", (int64)EPSCPoolMethod::None },
		{ "EPSCPoolMethod::AutoRelease", (int64)EPSCPoolMethod::AutoRelease },
		{ "EPSCPoolMethod::ManualRelease", (int64)EPSCPoolMethod::ManualRelease },
		{ "EPSCPoolMethod::ManualRelease_OnComplete", (int64)EPSCPoolMethod::ManualRelease_OnComplete },
		{ "EPSCPoolMethod::FreeInPool", (int64)EPSCPoolMethod::FreeInPool },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPSCPoolMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPSCPoolMethod",
	"EPSCPoolMethod",
	Z_Construct_UEnum_Engine_EPSCPoolMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPSCPoolMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPSCPoolMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPSCPoolMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPSCPoolMethod()
{
	if (!Z_Registration_Info_UEnum_EPSCPoolMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPSCPoolMethod.InnerSingleton, Z_Construct_UEnum_Engine_EPSCPoolMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPSCPoolMethod.InnerSingleton;
}
// End Enum EPSCPoolMethod

// Begin ScriptStruct FPSCPoolElem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PSCPoolElem;
class UScriptStruct* FPSCPoolElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PSCPoolElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PSCPoolElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPSCPoolElem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PSCPoolElem"));
	}
	return Z_Registration_Info_UScriptStruct_PSCPoolElem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPSCPoolElem>()
{
	return FPSCPoolElem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPSCPoolElem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PSC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PSC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPSCPoolElem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPSCPoolElem_Statics::NewProp_PSC = { "PSC", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCPoolElem, PSC), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PSC_MetaData), NewProp_PSC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPSCPoolElem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSCPoolElem_Statics::NewProp_PSC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPoolElem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPSCPoolElem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PSCPoolElem",
	Z_Construct_UScriptStruct_FPSCPoolElem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPoolElem_Statics::PropPointers),
	sizeof(FPSCPoolElem),
	alignof(FPSCPoolElem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPoolElem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPSCPoolElem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPSCPoolElem()
{
	if (!Z_Registration_Info_UScriptStruct_PSCPoolElem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PSCPoolElem.InnerSingleton, Z_Construct_UScriptStruct_FPSCPoolElem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PSCPoolElem.InnerSingleton;
}
// End ScriptStruct FPSCPoolElem

// Begin ScriptStruct FPSCPool
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PSCPool;
class UScriptStruct* FPSCPool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PSCPool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PSCPool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPSCPool, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PSCPool"));
	}
	return Z_Registration_Info_UScriptStruct_PSCPool.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPSCPool>()
{
	return FPSCPool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPSCPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeElements_MetaData[] = {
		{ "Comment", "//Collection of all currently allocated, free items ready to be grabbed for use.\n//TODO: Change this to a FIFO queue to get better usage. May need to make this whole class behave similar to TCircularQueue.\n" },
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
		{ "ToolTip", "Collection of all currently allocated, free items ready to be grabbed for use.\nTODO: Change this to a FIFO queue to get better usage. May need to make this whole class behave similar to TCircularQueue." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FreeElements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FreeElements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPSCPool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_FreeElements_Inner = { "FreeElements", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPSCPoolElem, METADATA_PARAMS(0, nullptr) }; // 1886175865
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_FreeElements = { "FreeElements", nullptr, (EPropertyFlags)0x0010008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCPool, FreeElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeElements_MetaData), NewProp_FreeElements_MetaData) }; // 1886175865
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPSCPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_FreeElements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_FreeElements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPSCPool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PSCPool",
	Z_Construct_UScriptStruct_FPSCPool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPool_Statics::PropPointers),
	sizeof(FPSCPool),
	alignof(FPSCPool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPSCPool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPSCPool()
{
	if (!Z_Registration_Info_UScriptStruct_PSCPool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PSCPool.InnerSingleton, Z_Construct_UScriptStruct_FPSCPool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PSCPool.InnerSingleton;
}
// End ScriptStruct FPSCPool

// Begin ScriptStruct FWorldPSCPool
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPSCPool;
class UScriptStruct* FWorldPSCPool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPSCPool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPSCPool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPSCPool, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPSCPool"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPSCPool.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPSCPool>()
{
	return FWorldPSCPool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPSCPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldParticleSystemPools_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldParticleSystemPools_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldParticleSystemPools_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WorldParticleSystemPools;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPSCPool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools_ValueProp = { "WorldParticleSystemPools", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPSCPool, METADATA_PARAMS(0, nullptr) }; // 2778281298
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools_Key_KeyProp = { "WorldParticleSystemPools_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools = { "WorldParticleSystemPools", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPSCPool, WorldParticleSystemPools), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldParticleSystemPools_MetaData), NewProp_WorldParticleSystemPools_MetaData) }; // 2778281298
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPSCPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPSCPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPSCPool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldPSCPool",
	Z_Construct_UScriptStruct_FWorldPSCPool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPSCPool_Statics::PropPointers),
	sizeof(FWorldPSCPool),
	alignof(FWorldPSCPool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPSCPool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPSCPool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPSCPool()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPSCPool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPSCPool.InnerSingleton, Z_Construct_UScriptStruct_FWorldPSCPool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPSCPool.InnerSingleton;
}
// End ScriptStruct FWorldPSCPool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPSCPoolMethod_StaticEnum, TEXT("EPSCPoolMethod"), &Z_Registration_Info_UEnum_EPSCPoolMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2476528059U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPSCPoolElem::StaticStruct, Z_Construct_UScriptStruct_FPSCPoolElem_Statics::NewStructOps, TEXT("PSCPoolElem"), &Z_Registration_Info_UScriptStruct_PSCPoolElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPSCPoolElem), 1886175865U) },
		{ FPSCPool::StaticStruct, Z_Construct_UScriptStruct_FPSCPool_Statics::NewStructOps, TEXT("PSCPool"), &Z_Registration_Info_UScriptStruct_PSCPool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPSCPool), 2778281298U) },
		{ FWorldPSCPool::StaticStruct, Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewStructOps, TEXT("WorldPSCPool"), &Z_Registration_Info_UScriptStruct_WorldPSCPool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPSCPool), 4073767516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h_2482906601(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS