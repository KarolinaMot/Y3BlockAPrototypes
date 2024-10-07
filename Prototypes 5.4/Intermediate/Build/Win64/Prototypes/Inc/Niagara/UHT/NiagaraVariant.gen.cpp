// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraVariant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraVariant() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraVariantMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariant();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraVariantMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraVariantMode;
static UEnum* ENiagaraVariantMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraVariantMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraVariantMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraVariantMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraVariantMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraVariantMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraVariantMode>()
{
	return ENiagaraVariantMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraVariantMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bytes.Name", "ENiagaraVariantMode::Bytes" },
		{ "DataInterface.Name", "ENiagaraVariantMode::DataInterface" },
		{ "ModuleRelativePath", "Public/NiagaraVariant.h" },
		{ "None.Name", "ENiagaraVariantMode::None" },
		{ "Object.Name", "ENiagaraVariantMode::Object" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraVariantMode::None", (int64)ENiagaraVariantMode::None },
		{ "ENiagaraVariantMode::Object", (int64)ENiagaraVariantMode::Object },
		{ "ENiagaraVariantMode::DataInterface", (int64)ENiagaraVariantMode::DataInterface },
		{ "ENiagaraVariantMode::Bytes", (int64)ENiagaraVariantMode::Bytes },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraVariantMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraVariantMode",
	"ENiagaraVariantMode",
	Z_Construct_UEnum_Niagara_ENiagaraVariantMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraVariantMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraVariantMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraVariantMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraVariantMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraVariantMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraVariantMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraVariantMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraVariantMode.InnerSingleton;
}
// End Enum ENiagaraVariantMode

// Begin ScriptStruct FNiagaraVariant
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariant;
class UScriptStruct* FNiagaraVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariant, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariant"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariant.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariant>()
{
	return FNiagaraVariant::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraVariant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraVariant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "Variant" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraVariant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[] = {
		{ "Category", "Variant" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraVariant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/NiagaraVariant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMode_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/NiagaraVariant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataInterface;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0146000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariant, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0146000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariant, DataInterface), Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInterface_MetaData), NewProp_DataInterface_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariant, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewProp_CurrentMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewProp_CurrentMode = { "CurrentMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariant, CurrentMode), Z_Construct_UEnum_Niagara_ENiagaraVariantMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMode_MetaData), NewProp_CurrentMode_MetaData) }; // 921392644
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewProp_DataInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewProp_CurrentMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewProp_CurrentMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraVariant",
	Z_Construct_UScriptStruct_FNiagaraVariant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariant_Statics::PropPointers),
	sizeof(FNiagaraVariant),
	alignof(FNiagaraVariant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraVariant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariant()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariant.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariant.InnerSingleton;
}
// End ScriptStruct FNiagaraVariant

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraVariantMode_StaticEnum, TEXT("ENiagaraVariantMode"), &Z_Registration_Info_UEnum_ENiagaraVariantMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 921392644U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraVariant::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewStructOps, TEXT("NiagaraVariant"), &Z_Registration_Info_UScriptStruct_NiagaraVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariant), 3296920642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h_4053901279(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS