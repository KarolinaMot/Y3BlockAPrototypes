// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithImportOptions.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithImportOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCommonTessellationOptions();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCommonTessellationOptions_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithImportOptions();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithImportOptions_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase_NoRegister();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithAssetImportOptions();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportBaseOptions();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithReimportOptions();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithRetessellationOptions();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithTessellationOptions();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Enum EDatasmithImportSearchPackagePolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy;
static UEnum* EDatasmithImportSearchPackagePolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportSearchPackagePolicy"));
	}
	return Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.OuterSingleton;
}
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportSearchPackagePolicy>()
{
	return EDatasmithImportSearchPackagePolicy_StaticEnum();
}
struct Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Comment", "/** Search in all packages */" },
		{ "All.Name", "EDatasmithImportSearchPackagePolicy::All" },
		{ "All.ToolTip", "Search in all packages" },
		{ "Current.Comment", "/** Search only in current package */" },
		{ "Current.DisplayName", "Current" },
		{ "Current.DisplayValue", "Current" },
		{ "Current.Name", "EDatasmithImportSearchPackagePolicy::Current" },
		{ "Current.ToolTip", "Search only in current package" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatasmithImportSearchPackagePolicy::Current", (int64)EDatasmithImportSearchPackagePolicy::Current },
		{ "EDatasmithImportSearchPackagePolicy::All", (int64)EDatasmithImportSearchPackagePolicy::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	"EDatasmithImportSearchPackagePolicy",
	"EDatasmithImportSearchPackagePolicy",
	Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.InnerSingleton;
}
// End Enum EDatasmithImportSearchPackagePolicy

// Begin Enum EDatasmithImportAssetConflictPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy;
static UEnum* EDatasmithImportAssetConflictPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportAssetConflictPolicy"));
	}
	return Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.OuterSingleton;
}
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportAssetConflictPolicy>()
{
	return EDatasmithImportAssetConflictPolicy_StaticEnum();
}
struct Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ignore.Comment", "/** Skip new asset */" },
		{ "Ignore.Name", "EDatasmithImportAssetConflictPolicy::Ignore" },
		{ "Ignore.ToolTip", "Skip new asset" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "Replace.Comment", "/** Replace existing asset with new one */" },
		{ "Replace.Name", "EDatasmithImportAssetConflictPolicy::Replace" },
		{ "Replace.ToolTip", "Replace existing asset with new one" },
		{ "Update.Comment", "/** Update existing asset with new values */" },
		{ "Update.Name", "EDatasmithImportAssetConflictPolicy::Update" },
		{ "Update.ToolTip", "Update existing asset with new values" },
		{ "Use.Comment", "/** Use existing asset instead of creating new one */" },
		{ "Use.Name", "EDatasmithImportAssetConflictPolicy::Use" },
		{ "Use.ToolTip", "Use existing asset instead of creating new one" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatasmithImportAssetConflictPolicy::Replace", (int64)EDatasmithImportAssetConflictPolicy::Replace },
		{ "EDatasmithImportAssetConflictPolicy::Update", (int64)EDatasmithImportAssetConflictPolicy::Update },
		{ "EDatasmithImportAssetConflictPolicy::Use", (int64)EDatasmithImportAssetConflictPolicy::Use },
		{ "EDatasmithImportAssetConflictPolicy::Ignore", (int64)EDatasmithImportAssetConflictPolicy::Ignore },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	"EDatasmithImportAssetConflictPolicy",
	"EDatasmithImportAssetConflictPolicy",
	Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.InnerSingleton;
}
// End Enum EDatasmithImportAssetConflictPolicy

// Begin Enum EDatasmithImportActorPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithImportActorPolicy;
static UEnum* EDatasmithImportActorPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportActorPolicy"));
	}
	return Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.OuterSingleton;
}
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportActorPolicy>()
{
	return EDatasmithImportActorPolicy_StaticEnum();
}
struct Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Full.Comment", "/** Same as update but recreates deleted actors so that the source and destination are the same. */" },
		{ "Full.Name", "EDatasmithImportActorPolicy::Full" },
		{ "Full.ToolTip", "Same as update but recreates deleted actors so that the source and destination are the same." },
		{ "Ignore.Comment", "/** Skip importing a certain type of actors */" },
		{ "Ignore.Name", "EDatasmithImportActorPolicy::Ignore" },
		{ "Ignore.ToolTip", "Skip importing a certain type of actors" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "Update.Comment", "/** Import new actors, update and delete existing actors. Doesn't recreate actors that exist in the source both not in the destination. */" },
		{ "Update.Name", "EDatasmithImportActorPolicy::Update" },
		{ "Update.ToolTip", "Import new actors, update and delete existing actors. Doesn't recreate actors that exist in the source both not in the destination." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatasmithImportActorPolicy::Update", (int64)EDatasmithImportActorPolicy::Update },
		{ "EDatasmithImportActorPolicy::Full", (int64)EDatasmithImportActorPolicy::Full },
		{ "EDatasmithImportActorPolicy::Ignore", (int64)EDatasmithImportActorPolicy::Ignore },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	"EDatasmithImportActorPolicy",
	"EDatasmithImportActorPolicy",
	Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.InnerSingleton;
}
// End Enum EDatasmithImportActorPolicy

// Begin Enum EDatasmithImportMaterialQuality
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality;
static UEnum* EDatasmithImportMaterialQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportMaterialQuality"));
	}
	return Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.OuterSingleton;
}
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportMaterialQuality>()
{
	return EDatasmithImportMaterialQuality_StaticEnum();
}
struct Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "UseNoFresnelCurves.Name", "EDatasmithImportMaterialQuality::UseNoFresnelCurves" },
		{ "UseRealFresnelCurves.Name", "EDatasmithImportMaterialQuality::UseRealFresnelCurves" },
		{ "UseSimplifierFresnelCurves.Name", "EDatasmithImportMaterialQuality::UseSimplifierFresnelCurves" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatasmithImportMaterialQuality::UseNoFresnelCurves", (int64)EDatasmithImportMaterialQuality::UseNoFresnelCurves },
		{ "EDatasmithImportMaterialQuality::UseSimplifierFresnelCurves", (int64)EDatasmithImportMaterialQuality::UseSimplifierFresnelCurves },
		{ "EDatasmithImportMaterialQuality::UseRealFresnelCurves", (int64)EDatasmithImportMaterialQuality::UseRealFresnelCurves },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	"EDatasmithImportMaterialQuality",
	"EDatasmithImportMaterialQuality",
	Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.InnerSingleton;
}
// End Enum EDatasmithImportMaterialQuality

// Begin Enum EDatasmithImportLightmapMin
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithImportLightmapMin;
static UEnum* EDatasmithImportLightmapMin_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportLightmapMin"));
	}
	return Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.OuterSingleton;
}
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportLightmapMin>()
{
	return EDatasmithImportLightmapMin_StaticEnum();
}
struct Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LIGHTMAP_128.DisplayName", "128" },
		{ "LIGHTMAP_128.Name", "EDatasmithImportLightmapMin::LIGHTMAP_128" },
		{ "LIGHTMAP_16.DisplayName", "16" },
		{ "LIGHTMAP_16.Name", "EDatasmithImportLightmapMin::LIGHTMAP_16" },
		{ "LIGHTMAP_256.DisplayName", "256" },
		{ "LIGHTMAP_256.Name", "EDatasmithImportLightmapMin::LIGHTMAP_256" },
		{ "LIGHTMAP_32.DisplayName", "32" },
		{ "LIGHTMAP_32.Name", "EDatasmithImportLightmapMin::LIGHTMAP_32" },
		{ "LIGHTMAP_512.DisplayName", "512" },
		{ "LIGHTMAP_512.Name", "EDatasmithImportLightmapMin::LIGHTMAP_512" },
		{ "LIGHTMAP_64.DisplayName", "64" },
		{ "LIGHTMAP_64.Name", "EDatasmithImportLightmapMin::LIGHTMAP_64" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatasmithImportLightmapMin::LIGHTMAP_16", (int64)EDatasmithImportLightmapMin::LIGHTMAP_16 },
		{ "EDatasmithImportLightmapMin::LIGHTMAP_32", (int64)EDatasmithImportLightmapMin::LIGHTMAP_32 },
		{ "EDatasmithImportLightmapMin::LIGHTMAP_64", (int64)EDatasmithImportLightmapMin::LIGHTMAP_64 },
		{ "EDatasmithImportLightmapMin::LIGHTMAP_128", (int64)EDatasmithImportLightmapMin::LIGHTMAP_128 },
		{ "EDatasmithImportLightmapMin::LIGHTMAP_256", (int64)EDatasmithImportLightmapMin::LIGHTMAP_256 },
		{ "EDatasmithImportLightmapMin::LIGHTMAP_512", (int64)EDatasmithImportLightmapMin::LIGHTMAP_512 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	"EDatasmithImportLightmapMin",
	"EDatasmithImportLightmapMin",
	Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.InnerSingleton;
}
// End Enum EDatasmithImportLightmapMin

// Begin Enum EDatasmithImportLightmapMax
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithImportLightmapMax;
static UEnum* EDatasmithImportLightmapMax_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportLightmapMax"));
	}
	return Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.OuterSingleton;
}
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportLightmapMax>()
{
	return EDatasmithImportLightmapMax_StaticEnum();
}
struct Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LIGHTMAP_1024.DisplayName", "1024" },
		{ "LIGHTMAP_1024.Name", "EDatasmithImportLightmapMax::LIGHTMAP_1024" },
		{ "LIGHTMAP_128.DisplayName", "128" },
		{ "LIGHTMAP_128.Name", "EDatasmithImportLightmapMax::LIGHTMAP_128" },
		{ "LIGHTMAP_2048.DisplayName", "2048" },
		{ "LIGHTMAP_2048.Name", "EDatasmithImportLightmapMax::LIGHTMAP_2048" },
		{ "LIGHTMAP_256.DisplayName", "256" },
		{ "LIGHTMAP_256.Name", "EDatasmithImportLightmapMax::LIGHTMAP_256" },
		{ "LIGHTMAP_4096.DisplayName", "4096" },
		{ "LIGHTMAP_4096.Name", "EDatasmithImportLightmapMax::LIGHTMAP_4096" },
		{ "LIGHTMAP_512.DisplayName", "512" },
		{ "LIGHTMAP_512.Name", "EDatasmithImportLightmapMax::LIGHTMAP_512" },
		{ "LIGHTMAP_64.DisplayName", "64" },
		{ "LIGHTMAP_64.Name", "EDatasmithImportLightmapMax::LIGHTMAP_64" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatasmithImportLightmapMax::LIGHTMAP_64", (int64)EDatasmithImportLightmapMax::LIGHTMAP_64 },
		{ "EDatasmithImportLightmapMax::LIGHTMAP_128", (int64)EDatasmithImportLightmapMax::LIGHTMAP_128 },
		{ "EDatasmithImportLightmapMax::LIGHTMAP_256", (int64)EDatasmithImportLightmapMax::LIGHTMAP_256 },
		{ "EDatasmithImportLightmapMax::LIGHTMAP_512", (int64)EDatasmithImportLightmapMax::LIGHTMAP_512 },
		{ "EDatasmithImportLightmapMax::LIGHTMAP_1024", (int64)EDatasmithImportLightmapMax::LIGHTMAP_1024 },
		{ "EDatasmithImportLightmapMax::LIGHTMAP_2048", (int64)EDatasmithImportLightmapMax::LIGHTMAP_2048 },
		{ "EDatasmithImportLightmapMax::LIGHTMAP_4096", (int64)EDatasmithImportLightmapMax::LIGHTMAP_4096 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	"EDatasmithImportLightmapMax",
	"EDatasmithImportLightmapMax",
	Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.InnerSingleton;
}
// End Enum EDatasmithImportLightmapMax

// Begin Enum EDatasmithImportScene
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithImportScene;
static UEnum* EDatasmithImportScene_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportScene.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatasmithImportScene.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithImportScene"));
	}
	return Z_Registration_Info_UEnum_EDatasmithImportScene.OuterSingleton;
}
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportScene>()
{
	return EDatasmithImportScene_StaticEnum();
}
struct Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AssetsOnly.DisplayName", "Assets Only" },
		{ "AssetsOnly.Name", "EDatasmithImportScene::AssetsOnly" },
		{ "AssetsOnly.ToolTip", "Do not modify the Level after import. No actor will be created (including the Blueprint if requested by the ImportHierarchy" },
		{ "CurrentLevel.DisplayName", "Merge to Current Level" },
		{ "CurrentLevel.Name", "EDatasmithImportScene::CurrentLevel" },
		{ "CurrentLevel.ToolTip", "Use the current Level to spawn the actors after the import." },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "NewLevel.DisplayName", "Create New Level" },
		{ "NewLevel.Name", "EDatasmithImportScene::NewLevel" },
		{ "NewLevel.ToolTip", "Create a new Level and spawn the actors after the import." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatasmithImportScene::NewLevel", (int64)EDatasmithImportScene::NewLevel },
		{ "EDatasmithImportScene::CurrentLevel", (int64)EDatasmithImportScene::CurrentLevel },
		{ "EDatasmithImportScene::AssetsOnly", (int64)EDatasmithImportScene::AssetsOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	"EDatasmithImportScene",
	"EDatasmithImportScene",
	Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene()
{
	if (!Z_Registration_Info_UEnum_EDatasmithImportScene.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithImportScene.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatasmithImportScene.InnerSingleton;
}
// End Enum EDatasmithImportScene

// Begin Enum EDatasmithCADStitchingTechnique
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique;
static UEnum* EDatasmithCADStitchingTechnique_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithCADStitchingTechnique"));
	}
	return Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.OuterSingleton;
}
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithCADStitchingTechnique>()
{
	return EDatasmithCADStitchingTechnique_StaticEnum();
}
struct Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "StitchingHeal.Name", "EDatasmithCADStitchingTechnique::StitchingHeal" },
		{ "StitchingNone.Name", "EDatasmithCADStitchingTechnique::StitchingNone" },
		{ "StitchingSew.Name", "EDatasmithCADStitchingTechnique::StitchingSew" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatasmithCADStitchingTechnique::StitchingNone", (int64)EDatasmithCADStitchingTechnique::StitchingNone },
		{ "EDatasmithCADStitchingTechnique::StitchingHeal", (int64)EDatasmithCADStitchingTechnique::StitchingHeal },
		{ "EDatasmithCADStitchingTechnique::StitchingSew", (int64)EDatasmithCADStitchingTechnique::StitchingSew },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	"EDatasmithCADStitchingTechnique",
	"EDatasmithCADStitchingTechnique",
	Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique()
{
	if (!Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.InnerSingleton;
}
// End Enum EDatasmithCADStitchingTechnique

// Begin Enum EDatasmithCADRetessellationRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule;
static UEnum* EDatasmithCADRetessellationRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithCADRetessellationRule"));
	}
	return Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.OuterSingleton;
}
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithCADRetessellationRule>()
{
	return EDatasmithCADRetessellationRule_StaticEnum();
}
struct Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Name", "EDatasmithCADRetessellationRule::All" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "SkipDeletedSurfaces.Name", "EDatasmithCADRetessellationRule::SkipDeletedSurfaces" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatasmithCADRetessellationRule::All", (int64)EDatasmithCADRetessellationRule::All },
		{ "EDatasmithCADRetessellationRule::SkipDeletedSurfaces", (int64)EDatasmithCADRetessellationRule::SkipDeletedSurfaces },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	"EDatasmithCADRetessellationRule",
	"EDatasmithCADRetessellationRule",
	Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule()
{
	if (!Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.InnerSingleton;
}
// End Enum EDatasmithCADRetessellationRule

// Begin ScriptStruct FDatasmithAssetImportOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithAssetImportOptions;
class UScriptStruct* FDatasmithAssetImportOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithAssetImportOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithAssetImportOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithAssetImportOptions, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithAssetImportOptions"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithAssetImportOptions.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithAssetImportOptions>()
{
	return FDatasmithAssetImportOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackagePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithAssetImportOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithAssetImportOptions, PackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagePath_MetaData), NewProp_PackagePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::NewProp_PackagePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithAssetImportOptions",
	Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::PropPointers),
	sizeof(FDatasmithAssetImportOptions),
	alignof(FDatasmithAssetImportOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithAssetImportOptions()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithAssetImportOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithAssetImportOptions.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithAssetImportOptions.InnerSingleton;
}
// End ScriptStruct FDatasmithAssetImportOptions

// Begin ScriptStruct FDatasmithStaticMeshImportOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithStaticMeshImportOptions;
class UScriptStruct* FDatasmithStaticMeshImportOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithStaticMeshImportOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithStaticMeshImportOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithStaticMeshImportOptions"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithStaticMeshImportOptions.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithStaticMeshImportOptions>()
{
	return FDatasmithStaticMeshImportOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLightmapResolution_MetaData[] = {
		{ "Category", "Lightmap" },
		{ "Comment", "/** Minimum resolution for auto-generated lightmap UVs */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Minimum resolution for auto-generated lightmap UVs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLightmapResolution_MetaData[] = {
		{ "Category", "Lightmap" },
		{ "Comment", "/** Maximum resolution for auto-generated lightmap UVs */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Maximum resolution for auto-generated lightmap UVs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "Lightmap" },
		{ "DisplayName", "Generate Lightmap UVs" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MinLightmapResolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MinLightmapResolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxLightmapResolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxLightmapResolution;
	static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
	static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithStaticMeshImportOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MinLightmapResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MinLightmapResolution = { "MinLightmapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithStaticMeshImportOptions, MinLightmapResolution), Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLightmapResolution_MetaData), NewProp_MinLightmapResolution_MetaData) }; // 969730223
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MaxLightmapResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MaxLightmapResolution = { "MaxLightmapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithStaticMeshImportOptions, MaxLightmapResolution), Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLightmapResolution_MetaData), NewProp_MaxLightmapResolution_MetaData) }; // 2851641560
void Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
{
	((FDatasmithStaticMeshImportOptions*)Obj)->bGenerateLightmapUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDatasmithStaticMeshImportOptions), &Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateLightmapUVs_MetaData), NewProp_bGenerateLightmapUVs_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
{
	((FDatasmithStaticMeshImportOptions*)Obj)->bRemoveDegenerates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDatasmithStaticMeshImportOptions), &Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveDegenerates_MetaData), NewProp_bRemoveDegenerates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MinLightmapResolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MinLightmapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MaxLightmapResolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_MaxLightmapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bGenerateLightmapUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewProp_bRemoveDegenerates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithStaticMeshImportOptions",
	Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::PropPointers),
	sizeof(FDatasmithStaticMeshImportOptions),
	alignof(FDatasmithStaticMeshImportOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithStaticMeshImportOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithStaticMeshImportOptions.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithStaticMeshImportOptions.InnerSingleton;
}
// End ScriptStruct FDatasmithStaticMeshImportOptions

// Begin ScriptStruct FDatasmithReimportOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithReimportOptions;
class UScriptStruct* FDatasmithReimportOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithReimportOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithReimportOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithReimportOptions, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithReimportOptions"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithReimportOptions.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithReimportOptions>()
{
	return FDatasmithReimportOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateActors_MetaData[] = {
		{ "Category", "SyncCurrentLevelActors" },
		{ "Comment", "/** Specifies whether or not to update Datasmith Scene Actors in the current Level */" },
		{ "DisplayName", "Datasmith Scene Actors" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to update Datasmith Scene Actors in the current Level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespawnDeletedActors_MetaData[] = {
		{ "Category", "SyncCurrentLevelActors" },
		{ "Comment", "/** Specifies whether or not to add back Actors you've deleted from the current Level */" },
		{ "DisplayName", "Re-Spawn Deleted Actors" },
		{ "EditCondition", "bUpdateActors" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to add back Actors you've deleted from the current Level" },
	};
#endif // WITH_METADATA
	static void NewProp_bUpdateActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateActors;
	static void NewProp_bRespawnDeletedActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespawnDeletedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithReimportOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bUpdateActors_SetBit(void* Obj)
{
	((FDatasmithReimportOptions*)Obj)->bUpdateActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bUpdateActors = { "bUpdateActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDatasmithReimportOptions), &Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bUpdateActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateActors_MetaData), NewProp_bUpdateActors_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bRespawnDeletedActors_SetBit(void* Obj)
{
	((FDatasmithReimportOptions*)Obj)->bRespawnDeletedActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bRespawnDeletedActors = { "bRespawnDeletedActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDatasmithReimportOptions), &Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bRespawnDeletedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRespawnDeletedActors_MetaData), NewProp_bRespawnDeletedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bUpdateActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bRespawnDeletedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithReimportOptions",
	Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::PropPointers),
	sizeof(FDatasmithReimportOptions),
	alignof(FDatasmithReimportOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithReimportOptions()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithReimportOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithReimportOptions.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithReimportOptions.InnerSingleton;
}
// End ScriptStruct FDatasmithReimportOptions

// Begin ScriptStruct FDatasmithImportBaseOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithImportBaseOptions;
class UScriptStruct* FDatasmithImportBaseOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithImportBaseOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithImportBaseOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithImportBaseOptions"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithImportBaseOptions.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithImportBaseOptions>()
{
	return FDatasmithImportBaseOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneHandling_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "/** Specifies where to put the content */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies where to put the content" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeGeometry_MetaData[] = {
		{ "Category", "Process" },
		{ "Comment", "/** Specifies whether or not to import geometry */" },
		{ "DisplayName", "Geometry" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to import geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeMaterial_MetaData[] = {
		{ "Category", "Process" },
		{ "Comment", "/** Specifies whether or not to import materials and textures */" },
		{ "DisplayName", "Materials & Textures" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to import materials and textures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeLight_MetaData[] = {
		{ "Category", "Process" },
		{ "Comment", "/** Specifies whether or not to import lights */" },
		{ "DisplayName", "Lights" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to import lights" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeCamera_MetaData[] = {
		{ "Category", "Process" },
		{ "Comment", "/** Specifies whether or not to import cameras */" },
		{ "DisplayName", "Cameras" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to import cameras" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeAnimation_MetaData[] = {
		{ "Category", "Process" },
		{ "Comment", "/** Specifies whether or not to import animations */" },
		{ "DisplayName", "Animations" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies whether or not to import animations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetOptions_MetaData[] = {
		{ "Category", "Process" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshOptions_MetaData[] = {
		{ "Category", "Process" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneHandling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneHandling;
	static void NewProp_bIncludeGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeGeometry;
	static void NewProp_bIncludeMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeMaterial;
	static void NewProp_bIncludeLight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeLight;
	static void NewProp_bIncludeCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeCamera;
	static void NewProp_bIncludeAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAnimation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithImportBaseOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_SceneHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_SceneHandling = { "SceneHandling", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithImportBaseOptions, SceneHandling), Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneHandling_MetaData), NewProp_SceneHandling_MetaData) }; // 1197346863
void Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeGeometry_SetBit(void* Obj)
{
	((FDatasmithImportBaseOptions*)Obj)->bIncludeGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeGeometry = { "bIncludeGeometry", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDatasmithImportBaseOptions), &Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeGeometry_MetaData), NewProp_bIncludeGeometry_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeMaterial_SetBit(void* Obj)
{
	((FDatasmithImportBaseOptions*)Obj)->bIncludeMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeMaterial = { "bIncludeMaterial", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDatasmithImportBaseOptions), &Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeMaterial_MetaData), NewProp_bIncludeMaterial_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeLight_SetBit(void* Obj)
{
	((FDatasmithImportBaseOptions*)Obj)->bIncludeLight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeLight = { "bIncludeLight", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDatasmithImportBaseOptions), &Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeLight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeLight_MetaData), NewProp_bIncludeLight_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeCamera_SetBit(void* Obj)
{
	((FDatasmithImportBaseOptions*)Obj)->bIncludeCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeCamera = { "bIncludeCamera", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDatasmithImportBaseOptions), &Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeCamera_MetaData), NewProp_bIncludeCamera_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeAnimation_SetBit(void* Obj)
{
	((FDatasmithImportBaseOptions*)Obj)->bIncludeAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeAnimation = { "bIncludeAnimation", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDatasmithImportBaseOptions), &Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeAnimation_MetaData), NewProp_bIncludeAnimation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_AssetOptions = { "AssetOptions", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithImportBaseOptions, AssetOptions), Z_Construct_UScriptStruct_FDatasmithAssetImportOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetOptions_MetaData), NewProp_AssetOptions_MetaData) }; // 2542004436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_StaticMeshOptions = { "StaticMeshOptions", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithImportBaseOptions, StaticMeshOptions), Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshOptions_MetaData), NewProp_StaticMeshOptions_MetaData) }; // 3172738165
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_SceneHandling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_SceneHandling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_AssetOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_StaticMeshOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithImportBaseOptions",
	Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::PropPointers),
	sizeof(FDatasmithImportBaseOptions),
	alignof(FDatasmithImportBaseOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportBaseOptions()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithImportBaseOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithImportBaseOptions.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithImportBaseOptions.InnerSingleton;
}
// End ScriptStruct FDatasmithImportBaseOptions

// Begin ScriptStruct FDatasmithTessellationOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithTessellationOptions;
class UScriptStruct* FDatasmithTessellationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithTessellationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithTessellationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithTessellationOptions, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithTessellationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithTessellationOptions.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithTessellationOptions>()
{
	return FDatasmithTessellationOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChordTolerance_MetaData[] = {
		{ "Category", "Geometry & Tessellation Options" },
		{ "ClampMin", "0.005" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Maximum distance between any generated triangle and the original surface. Smaller values make more triangles." },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEdgeLength_MetaData[] = {
		{ "Category", "Geometry & Tessellation Options" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Max Edge Length" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Maximum length of any edge in the generated triangles. Smaller values make more triangles." },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalTolerance_MetaData[] = {
		{ "Category", "Geometry & Tessellation Options" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "5.0" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Maximum angle between adjacent triangles. Smaller values make more triangles." },
		{ "Units", "deg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StitchingTechnique_MetaData[] = {
		{ "Category", "Geometry & Tessellation Options" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Stitching technique applied on model before tessellation. Sewing could impact number of objects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChordTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEdgeLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalTolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StitchingTechnique_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StitchingTechnique;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithTessellationOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_ChordTolerance = { "ChordTolerance", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithTessellationOptions, ChordTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChordTolerance_MetaData), NewProp_ChordTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_MaxEdgeLength = { "MaxEdgeLength", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithTessellationOptions, MaxEdgeLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEdgeLength_MetaData), NewProp_MaxEdgeLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_NormalTolerance = { "NormalTolerance", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithTessellationOptions, NormalTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalTolerance_MetaData), NewProp_NormalTolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_StitchingTechnique_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_StitchingTechnique = { "StitchingTechnique", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithTessellationOptions, StitchingTechnique), Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StitchingTechnique_MetaData), NewProp_StitchingTechnique_MetaData) }; // 2173207511
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_ChordTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_MaxEdgeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_NormalTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_StitchingTechnique_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewProp_StitchingTechnique,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithTessellationOptions",
	Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::PropPointers),
	sizeof(FDatasmithTessellationOptions),
	alignof(FDatasmithTessellationOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithTessellationOptions()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithTessellationOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithTessellationOptions.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithTessellationOptions.InnerSingleton;
}
// End ScriptStruct FDatasmithTessellationOptions

// Begin ScriptStruct FDatasmithRetessellationOptions
static_assert(std::is_polymorphic<FDatasmithRetessellationOptions>() == std::is_polymorphic<FDatasmithTessellationOptions>(), "USTRUCT FDatasmithRetessellationOptions cannot be polymorphic unless super FDatasmithTessellationOptions is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithRetessellationOptions;
class UScriptStruct* FDatasmithRetessellationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithRetessellationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithRetessellationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithRetessellationOptions, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithRetessellationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithRetessellationOptions.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithRetessellationOptions>()
{
	return FDatasmithRetessellationOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetessellationRule_MetaData[] = {
		{ "Category", "Retessellation Options" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Regenerate deleted surfaces during retesselate or ignore them" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RetessellationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RetessellationRule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithRetessellationOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::NewProp_RetessellationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::NewProp_RetessellationRule = { "RetessellationRule", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithRetessellationOptions, RetessellationRule), Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetessellationRule_MetaData), NewProp_RetessellationRule_MetaData) }; // 1625908819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::NewProp_RetessellationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::NewProp_RetessellationRule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	Z_Construct_UScriptStruct_FDatasmithTessellationOptions,
	&NewStructOps,
	"DatasmithRetessellationOptions",
	Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::PropPointers),
	sizeof(FDatasmithRetessellationOptions),
	alignof(FDatasmithRetessellationOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithRetessellationOptions()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithRetessellationOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithRetessellationOptions.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithRetessellationOptions.InnerSingleton;
}
// End ScriptStruct FDatasmithRetessellationOptions

// Begin Class UDatasmithOptionsBase
void UDatasmithOptionsBase::StaticRegisterNativesUDatasmithOptionsBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithOptionsBase);
UClass* Z_Construct_UClass_UDatasmithOptionsBase_NoRegister()
{
	return UDatasmithOptionsBase::StaticClass();
}
struct Z_Construct_UClass_UDatasmithOptionsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all import options in datasmith.\n *\n * Notable feature: forces a full serialization of its properties (by opposition\n * to the standard delta serialization which stores only the diff wrt the CDO)\n * The intent is to store the exact options used in a previous import.\n */" },
		{ "IncludePath", "DatasmithImportOptions.h" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Base class for all import options in datasmith.\n\nNotable feature: forces a full serialization of its properties (by opposition\nto the standard delta serialization which stores only the diff wrt the CDO)\nThe intent is to store the exact options used in a previous import." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithOptionsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDatasmithOptionsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithOptionsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithOptionsBase_Statics::ClassParams = {
	&UDatasmithOptionsBase::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithOptionsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithOptionsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithOptionsBase()
{
	if (!Z_Registration_Info_UClass_UDatasmithOptionsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithOptionsBase.OuterSingleton, Z_Construct_UClass_UDatasmithOptionsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithOptionsBase.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithOptionsBase>()
{
	return UDatasmithOptionsBase::StaticClass();
}
UDatasmithOptionsBase::UDatasmithOptionsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithOptionsBase);
UDatasmithOptionsBase::~UDatasmithOptionsBase() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UDatasmithOptionsBase)
// End Class UDatasmithOptionsBase

// Begin Class UDatasmithCommonTessellationOptions
void UDatasmithCommonTessellationOptions::StaticRegisterNativesUDatasmithCommonTessellationOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithCommonTessellationOptions);
UClass* Z_Construct_UClass_UDatasmithCommonTessellationOptions_NoRegister()
{
	return UDatasmithCommonTessellationOptions::StaticClass();
}
struct Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DatasmithImportOptions.h" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "Geometry & Tessellation Options" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCommonTessellationOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithCommonTessellationOptions, Options), Z_Construct_UScriptStruct_FDatasmithTessellationOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 1974329635
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithOptionsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::ClassParams = {
	&UDatasmithCommonTessellationOptions::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithCommonTessellationOptions()
{
	if (!Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.OuterSingleton, Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCommonTessellationOptions>()
{
	return UDatasmithCommonTessellationOptions::StaticClass();
}
UDatasmithCommonTessellationOptions::UDatasmithCommonTessellationOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCommonTessellationOptions);
UDatasmithCommonTessellationOptions::~UDatasmithCommonTessellationOptions() {}
// End Class UDatasmithCommonTessellationOptions

// Begin Class UDatasmithImportOptions
void UDatasmithImportOptions::StaticRegisterNativesUDatasmithImportOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithImportOptions);
UClass* Z_Construct_UClass_UDatasmithImportOptions_NoRegister()
{
	return UDatasmithImportOptions::StaticClass();
}
struct Z_Construct_UClass_UDatasmithImportOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "NotVisible" },
		{ "IncludePath", "DatasmithImportOptions.h" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchPackagePolicy_MetaData[] = {
		{ "Comment", "/** Specifies where to search for assets */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies where to search for assets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConflictPolicy_MetaData[] = {
		{ "Comment", "/** Specifies what to do when material conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when material conflicts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureConflictPolicy_MetaData[] = {
		{ "Comment", "/** Specifies what to do when texture conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when texture conflicts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshActorImportPolicy_MetaData[] = {
		{ "Comment", "/** Specifies what to do when actor conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when actor conflicts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightImportPolicy_MetaData[] = {
		{ "Comment", "/** Specifies what to do when light conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when light conflicts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraImportPolicy_MetaData[] = {
		{ "Comment", "/** Specifies what to do when material conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when material conflicts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActorImportPolicy_MetaData[] = {
		{ "Comment", "/** Specifies what to do when actor conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when actor conflicts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialQuality_MetaData[] = {
		{ "Comment", "/** Specifies what to do when material conflicts */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Specifies what to do when material conflicts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Not displayed. Kept for future use\n" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Not displayed. Kept for future use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReimportOptions_MetaData[] = {
		{ "Category", "Reimport" },
		{ "Comment", "/** Options specific to the reimport process */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Options specific to the reimport process" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Category", "NotVisible" },
		{ "Comment", "/** Name of the imported file without its path */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Name of the imported file without its path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "NotVisible" },
		{ "Comment", "/** Full path of the imported file */" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
		{ "ToolTip", "Full path of the imported file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceUri_MetaData[] = {
		{ "Category", "NotVisible" },
		{ "ModuleRelativePath", "Public/DatasmithImportOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SearchPackagePolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SearchPackagePolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConflictPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConflictPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureConflictPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureConflictPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StaticMeshActorImportPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StaticMeshActorImportPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightImportPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightImportPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraImportPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraImportPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OtherActorImportPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OtherActorImportPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialQuality;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReimportOptions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceUri;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithImportOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SearchPackagePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SearchPackagePolicy = { "SearchPackagePolicy", nullptr, (EPropertyFlags)0x0010040000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, SearchPackagePolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchPackagePolicy_MetaData), NewProp_SearchPackagePolicy_MetaData) }; // 577616464
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialConflictPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialConflictPolicy = { "MaterialConflictPolicy", nullptr, (EPropertyFlags)0x0010040000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, MaterialConflictPolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConflictPolicy_MetaData), NewProp_MaterialConflictPolicy_MetaData) }; // 2666191984
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_TextureConflictPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_TextureConflictPolicy = { "TextureConflictPolicy", nullptr, (EPropertyFlags)0x0010040000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, TextureConflictPolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureConflictPolicy_MetaData), NewProp_TextureConflictPolicy_MetaData) }; // 2666191984
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_StaticMeshActorImportPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_StaticMeshActorImportPolicy = { "StaticMeshActorImportPolicy", nullptr, (EPropertyFlags)0x0010040000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, StaticMeshActorImportPolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshActorImportPolicy_MetaData), NewProp_StaticMeshActorImportPolicy_MetaData) }; // 3282773809
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_LightImportPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_LightImportPolicy = { "LightImportPolicy", nullptr, (EPropertyFlags)0x0010040000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, LightImportPolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightImportPolicy_MetaData), NewProp_LightImportPolicy_MetaData) }; // 3282773809
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_CameraImportPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_CameraImportPolicy = { "CameraImportPolicy", nullptr, (EPropertyFlags)0x0010040000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, CameraImportPolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraImportPolicy_MetaData), NewProp_CameraImportPolicy_MetaData) }; // 3282773809
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_OtherActorImportPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_OtherActorImportPolicy = { "OtherActorImportPolicy", nullptr, (EPropertyFlags)0x0010040000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, OtherActorImportPolicy), Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActorImportPolicy_MetaData), NewProp_OtherActorImportPolicy_MetaData) }; // 3282773809
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialQuality = { "MaterialQuality", nullptr, (EPropertyFlags)0x0010040000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, MaterialQuality), Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialQuality_MetaData), NewProp_MaterialQuality_MetaData) }; // 3680666822
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_BaseOptions = { "BaseOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, BaseOptions), Z_Construct_UScriptStruct_FDatasmithImportBaseOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseOptions_MetaData), NewProp_BaseOptions_MetaData) }; // 1864737225
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_ReimportOptions = { "ReimportOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, ReimportOptions), Z_Construct_UScriptStruct_FDatasmithReimportOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReimportOptions_MetaData), NewProp_ReimportOptions_MetaData) }; // 2926442533
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SourceUri = { "SourceUri", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithImportOptions, SourceUri), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceUri_MetaData), NewProp_SourceUri_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithImportOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SearchPackagePolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SearchPackagePolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialConflictPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialConflictPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_TextureConflictPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_TextureConflictPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_StaticMeshActorImportPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_StaticMeshActorImportPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_LightImportPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_LightImportPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_CameraImportPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_CameraImportPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_OtherActorImportPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_OtherActorImportPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_MaterialQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_BaseOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_ReimportOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithImportOptions_Statics::NewProp_SourceUri,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithImportOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithOptionsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithImportOptions_Statics::ClassParams = {
	&UDatasmithImportOptions::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithImportOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithImportOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithImportOptions()
{
	if (!Z_Registration_Info_UClass_UDatasmithImportOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithImportOptions.OuterSingleton, Z_Construct_UClass_UDatasmithImportOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithImportOptions.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithImportOptions>()
{
	return UDatasmithImportOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithImportOptions);
UDatasmithImportOptions::~UDatasmithImportOptions() {}
// End Class UDatasmithImportOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDatasmithImportSearchPackagePolicy_StaticEnum, TEXT("EDatasmithImportSearchPackagePolicy"), &Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 577616464U) },
		{ EDatasmithImportAssetConflictPolicy_StaticEnum, TEXT("EDatasmithImportAssetConflictPolicy"), &Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2666191984U) },
		{ EDatasmithImportActorPolicy_StaticEnum, TEXT("EDatasmithImportActorPolicy"), &Z_Registration_Info_UEnum_EDatasmithImportActorPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3282773809U) },
		{ EDatasmithImportMaterialQuality_StaticEnum, TEXT("EDatasmithImportMaterialQuality"), &Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3680666822U) },
		{ EDatasmithImportLightmapMin_StaticEnum, TEXT("EDatasmithImportLightmapMin"), &Z_Registration_Info_UEnum_EDatasmithImportLightmapMin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 969730223U) },
		{ EDatasmithImportLightmapMax_StaticEnum, TEXT("EDatasmithImportLightmapMax"), &Z_Registration_Info_UEnum_EDatasmithImportLightmapMax, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2851641560U) },
		{ EDatasmithImportScene_StaticEnum, TEXT("EDatasmithImportScene"), &Z_Registration_Info_UEnum_EDatasmithImportScene, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1197346863U) },
		{ EDatasmithCADStitchingTechnique_StaticEnum, TEXT("EDatasmithCADStitchingTechnique"), &Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2173207511U) },
		{ EDatasmithCADRetessellationRule_StaticEnum, TEXT("EDatasmithCADRetessellationRule"), &Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1625908819U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDatasmithAssetImportOptions::StaticStruct, Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::NewStructOps, TEXT("DatasmithAssetImportOptions"), &Z_Registration_Info_UScriptStruct_DatasmithAssetImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithAssetImportOptions), 2542004436U) },
		{ FDatasmithStaticMeshImportOptions::StaticStruct, Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewStructOps, TEXT("DatasmithStaticMeshImportOptions"), &Z_Registration_Info_UScriptStruct_DatasmithStaticMeshImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithStaticMeshImportOptions), 3172738165U) },
		{ FDatasmithReimportOptions::StaticStruct, Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewStructOps, TEXT("DatasmithReimportOptions"), &Z_Registration_Info_UScriptStruct_DatasmithReimportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithReimportOptions), 2926442533U) },
		{ FDatasmithImportBaseOptions::StaticStruct, Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewStructOps, TEXT("DatasmithImportBaseOptions"), &Z_Registration_Info_UScriptStruct_DatasmithImportBaseOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithImportBaseOptions), 1864737225U) },
		{ FDatasmithTessellationOptions::StaticStruct, Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewStructOps, TEXT("DatasmithTessellationOptions"), &Z_Registration_Info_UScriptStruct_DatasmithTessellationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithTessellationOptions), 1974329635U) },
		{ FDatasmithRetessellationOptions::StaticStruct, Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::NewStructOps, TEXT("DatasmithRetessellationOptions"), &Z_Registration_Info_UScriptStruct_DatasmithRetessellationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithRetessellationOptions), 3917174799U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithOptionsBase, UDatasmithOptionsBase::StaticClass, TEXT("UDatasmithOptionsBase"), &Z_Registration_Info_UClass_UDatasmithOptionsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithOptionsBase), 982837379U) },
		{ Z_Construct_UClass_UDatasmithCommonTessellationOptions, UDatasmithCommonTessellationOptions::StaticClass, TEXT("UDatasmithCommonTessellationOptions"), &Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithCommonTessellationOptions), 2265669929U) },
		{ Z_Construct_UClass_UDatasmithImportOptions, UDatasmithImportOptions::StaticClass, TEXT("UDatasmithImportOptions"), &Z_Registration_Info_UClass_UDatasmithImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithImportOptions), 3114069628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_3060644753(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
