// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecalComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDecalComponent Function CreateDynamicMaterialInstance
struct Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics
{
	struct DecalComponent_eventCreateDynamicMaterialInstance_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** Utility to allocate a new Dynamic Material Instance, set its parent to the currently applied material, and assign it */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Utility to allocate a new Dynamic Material Instance, set its parent to the currently applied material, and assign it" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventCreateDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "CreateDynamicMaterialInstance", nullptr, nullptr, Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::DecalComponent_eventCreateDynamicMaterialInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::DecalComponent_eventCreateDynamicMaterialInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecalComponent::execCreateDynamicMaterialInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateDynamicMaterialInstance();
	P_NATIVE_END;
}
// End Class UDecalComponent Function CreateDynamicMaterialInstance

// Begin Class UDecalComponent Function GetDecalMaterial
struct Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics
{
	struct DecalComponent_eventGetDecalMaterial_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** Accessor for decal material */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Accessor for decal material" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventGetDecalMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "GetDecalMaterial", nullptr, nullptr, Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::DecalComponent_eventGetDecalMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::DecalComponent_eventGetDecalMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecalComponent_GetDecalMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecalComponent_GetDecalMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecalComponent::execGetDecalMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetDecalMaterial();
	P_NATIVE_END;
}
// End Class UDecalComponent Function GetDecalMaterial

// Begin Class UDecalComponent Function GetFadeDuration
struct Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics
{
	struct DecalComponent_eventGetFadeDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventGetFadeDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "GetFadeDuration", nullptr, nullptr, Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::DecalComponent_eventGetFadeDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::DecalComponent_eventGetFadeDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecalComponent_GetFadeDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecalComponent_GetFadeDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecalComponent::execGetFadeDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFadeDuration();
	P_NATIVE_END;
}
// End Class UDecalComponent Function GetFadeDuration

// Begin Class UDecalComponent Function GetFadeInDuration
struct Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics
{
	struct DecalComponent_eventGetFadeInDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventGetFadeInDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "GetFadeInDuration", nullptr, nullptr, Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::DecalComponent_eventGetFadeInDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::DecalComponent_eventGetFadeInDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecalComponent_GetFadeInDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecalComponent_GetFadeInDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecalComponent::execGetFadeInDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFadeInDuration();
	P_NATIVE_END;
}
// End Class UDecalComponent Function GetFadeInDuration

// Begin Class UDecalComponent Function GetFadeInStartDelay
struct Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics
{
	struct DecalComponent_eventGetFadeInStartDelay_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventGetFadeInStartDelay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "GetFadeInStartDelay", nullptr, nullptr, Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::DecalComponent_eventGetFadeInStartDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::DecalComponent_eventGetFadeInStartDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecalComponent::execGetFadeInStartDelay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFadeInStartDelay();
	P_NATIVE_END;
}
// End Class UDecalComponent Function GetFadeInStartDelay

// Begin Class UDecalComponent Function GetFadeStartDelay
struct Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics
{
	struct DecalComponent_eventGetFadeStartDelay_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventGetFadeStartDelay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "GetFadeStartDelay", nullptr, nullptr, Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::DecalComponent_eventGetFadeStartDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::DecalComponent_eventGetFadeStartDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecalComponent::execGetFadeStartDelay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFadeStartDelay();
	P_NATIVE_END;
}
// End Class UDecalComponent Function GetFadeStartDelay

// Begin Class UDecalComponent Function SetDecalColor
struct Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics
{
	struct DecalComponent_eventSetDecalColor_Parms
	{
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** Sets the decal color. */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Sets the decal color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventSetDecalColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "SetDecalColor", nullptr, nullptr, Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics::DecalComponent_eventSetDecalColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics::DecalComponent_eventSetDecalColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecalComponent_SetDecalColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecalComponent_SetDecalColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecalComponent::execSetDecalColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDecalColor(Z_Param_Out_Color);
	P_NATIVE_END;
}
// End Class UDecalComponent Function SetDecalColor

// Begin Class UDecalComponent Function SetDecalMaterial
struct Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics
{
	struct DecalComponent_eventSetDecalMaterial_Parms
	{
		UMaterialInterface* NewDecalMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** setting decal material on decal component. This will force the decal to reattach */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "setting decal material on decal component. This will force the decal to reattach" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDecalMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::NewProp_NewDecalMaterial = { "NewDecalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventSetDecalMaterial_Parms, NewDecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::NewProp_NewDecalMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "SetDecalMaterial", nullptr, nullptr, Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::DecalComponent_eventSetDecalMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::DecalComponent_eventSetDecalMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecalComponent_SetDecalMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecalComponent_SetDecalMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecalComponent::execSetDecalMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewDecalMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDecalMaterial(Z_Param_NewDecalMaterial);
	P_NATIVE_END;
}
// End Class UDecalComponent Function SetDecalMaterial

// Begin Class UDecalComponent Function SetFadeIn
struct Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics
{
	struct DecalComponent_eventSetFadeIn_Parms
	{
		float StartDelay;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventSetFadeIn_Parms, StartDelay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventSetFadeIn_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::NewProp_StartDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "SetFadeIn", nullptr, nullptr, Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::DecalComponent_eventSetFadeIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::DecalComponent_eventSetFadeIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecalComponent_SetFadeIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecalComponent_SetFadeIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecalComponent::execSetFadeIn)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartDelay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFadeIn(Z_Param_StartDelay,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UDecalComponent Function SetFadeIn

// Begin Class UDecalComponent Function SetFadeOut
struct Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics
{
	struct DecalComponent_eventSetFadeOut_Parms
	{
		float StartDelay;
		float Duration;
		bool DestroyOwnerAfterFade;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/**\n\x09* Sets the decal's fade start time, duration and if the owning actor should be destroyed after the decal is fully faded out.\n\x09* The default value of 0 for FadeStartDelay and FadeDuration makes the decal persistent. See DecalLifetimeOpacity material \n\x09* node to control the look of \"fading out.\"\n\x09*\n\x09* @param StartDelay - Time in seconds to wait before beginning to fade out the decal.\n\x09* @param Duration - Time in second for the decal to fade out.\n\x09* @param DestroyOwnerAfterFade - Should the owning actor automatically be destroyed after it is completely faded out.\n\x09*/" },
		{ "CPP_Default_DestroyOwnerAfterFade", "true" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Sets the decal's fade start time, duration and if the owning actor should be destroyed after the decal is fully faded out.\nThe default value of 0 for FadeStartDelay and FadeDuration makes the decal persistent. See DecalLifetimeOpacity material\nnode to control the look of \"fading out.\"\n\n@param StartDelay - Time in seconds to wait before beginning to fade out the decal.\n@param Duration - Time in second for the decal to fade out.\n@param DestroyOwnerAfterFade - Should the owning actor automatically be destroyed after it is completely faded out." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_DestroyOwnerAfterFade_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyOwnerAfterFade;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventSetFadeOut_Parms, StartDelay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventSetFadeOut_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_DestroyOwnerAfterFade_SetBit(void* Obj)
{
	((DecalComponent_eventSetFadeOut_Parms*)Obj)->DestroyOwnerAfterFade = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_DestroyOwnerAfterFade = { "DestroyOwnerAfterFade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DecalComponent_eventSetFadeOut_Parms), &Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_DestroyOwnerAfterFade_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_StartDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::NewProp_DestroyOwnerAfterFade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "SetFadeOut", nullptr, nullptr, Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::DecalComponent_eventSetFadeOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::DecalComponent_eventSetFadeOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecalComponent_SetFadeOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecalComponent_SetFadeOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecalComponent::execSetFadeOut)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartDelay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_DestroyOwnerAfterFade);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFadeOut(Z_Param_StartDelay,Z_Param_Duration,Z_Param_DestroyOwnerAfterFade);
	P_NATIVE_END;
}
// End Class UDecalComponent Function SetFadeOut

// Begin Class UDecalComponent Function SetFadeScreenSize
struct Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics
{
	struct DecalComponent_eventSetFadeScreenSize_Parms
	{
		float NewFadeScreenSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** Set the FadeScreenSize for this decal component */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Set the FadeScreenSize for this decal component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFadeScreenSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::NewProp_NewFadeScreenSize = { "NewFadeScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventSetFadeScreenSize_Parms, NewFadeScreenSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::NewProp_NewFadeScreenSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "SetFadeScreenSize", nullptr, nullptr, Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::DecalComponent_eventSetFadeScreenSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::DecalComponent_eventSetFadeScreenSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecalComponent::execSetFadeScreenSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFadeScreenSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFadeScreenSize(Z_Param_NewFadeScreenSize);
	P_NATIVE_END;
}
// End Class UDecalComponent Function SetFadeScreenSize

// Begin Class UDecalComponent Function SetSortOrder
struct Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics
{
	struct DecalComponent_eventSetSortOrder_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "/** Sets the sort order for the decal component. Higher values draw later (on top). This will force the decal to reattach */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Sets the sort order for the decal component. Higher values draw later (on top). This will force the decal to reattach" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecalComponent_eventSetSortOrder_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, nullptr, "SetSortOrder", nullptr, nullptr, Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::DecalComponent_eventSetSortOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::DecalComponent_eventSetSortOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecalComponent_SetSortOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecalComponent_SetSortOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecalComponent::execSetSortOrder)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSortOrder(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UDecalComponent Function SetSortOrder

// Begin Class UDecalComponent
void UDecalComponent::StaticRegisterNativesUDecalComponent()
{
	UClass* Class = UDecalComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDynamicMaterialInstance", &UDecalComponent::execCreateDynamicMaterialInstance },
		{ "GetDecalMaterial", &UDecalComponent::execGetDecalMaterial },
		{ "GetFadeDuration", &UDecalComponent::execGetFadeDuration },
		{ "GetFadeInDuration", &UDecalComponent::execGetFadeInDuration },
		{ "GetFadeInStartDelay", &UDecalComponent::execGetFadeInStartDelay },
		{ "GetFadeStartDelay", &UDecalComponent::execGetFadeStartDelay },
		{ "SetDecalColor", &UDecalComponent::execSetDecalColor },
		{ "SetDecalMaterial", &UDecalComponent::execSetDecalMaterial },
		{ "SetFadeIn", &UDecalComponent::execSetFadeIn },
		{ "SetFadeOut", &UDecalComponent::execSetFadeOut },
		{ "SetFadeScreenSize", &UDecalComponent::execSetFadeScreenSize },
		{ "SetSortOrder", &UDecalComponent::execSetSortOrder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDecalComponent);
UClass* Z_Construct_UClass_UDecalComponent_NoRegister()
{
	return UDecalComponent::StaticClass();
}
struct Z_Construct_UClass_UDecalComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * A material that is rendered onto the surface of a mesh. A kind of 'bumper sticker' for a model.\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Actors/DecalActor\n * @see UDecalActor\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/DecalComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "A material that is rendered onto the surface of a mesh. A kind of 'bumper sticker' for a model.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/DecalActor\n@see UDecalActor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/** Decal material. */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Decal material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/** \n\x09 * Controls the order in which decal elements are rendered.  Higher values draw later (on top). \n\x09 * Setting many different sort orders on many different decals prevents sorting by state and can reduce performance.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Controls the order in which decal elements are rendered.  Higher values draw later (on top).\nSetting many different sort orders on many different decals prevents sorting by state and can reduce performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeScreenSize_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeStartDelay_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/**\n\x09* Time in seconds to wait before beginning to fade out the decal. Set fade duration and start delay to 0 to make persistent.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Time in seconds to wait before beginning to fade out the decal. Set fade duration and start delay to 0 to make persistent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeDuration_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/**\n\x09* Time in seconds for the decal to fade out. Set fade duration and start delay to 0 to make persistent. Only fades in active simulation or game.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Time in seconds for the decal to fade out. Set fade duration and start delay to 0 to make persistent. Only fades in active simulation or game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeInDuration_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeInStartDelay_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOwnerAfterFade_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/**\n\x09* Automatically destroys the owning actor after fully fading out.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Automatically destroys the owning actor after fully fading out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[] = {
		{ "AllowPreserveRatio", "true" },
		{ "Category", "Decal" },
		{ "Comment", "/** Decal size in local space (does not include the component scale), technically redundant but there for convenience */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Decal size in local space (does not include the component scale), technically redundant but there for convenience" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalColor_MetaData[] = {
		{ "Category", "Decal" },
		{ "Comment", "/** Decal color, can be accessed using the material Decal Color node. */" },
		{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
		{ "ToolTip", "Decal color, can be accessed using the material Decal Color node." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortOrder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeScreenSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeStartDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInStartDelay;
	static void NewProp_bDestroyOwnerAfterFade_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOwnerAfterFade;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance, "CreateDynamicMaterialInstance" }, // 215856563
		{ &Z_Construct_UFunction_UDecalComponent_GetDecalMaterial, "GetDecalMaterial" }, // 1124677064
		{ &Z_Construct_UFunction_UDecalComponent_GetFadeDuration, "GetFadeDuration" }, // 2330878527
		{ &Z_Construct_UFunction_UDecalComponent_GetFadeInDuration, "GetFadeInDuration" }, // 1578277034
		{ &Z_Construct_UFunction_UDecalComponent_GetFadeInStartDelay, "GetFadeInStartDelay" }, // 319363401
		{ &Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay, "GetFadeStartDelay" }, // 873405235
		{ &Z_Construct_UFunction_UDecalComponent_SetDecalColor, "SetDecalColor" }, // 910618393
		{ &Z_Construct_UFunction_UDecalComponent_SetDecalMaterial, "SetDecalMaterial" }, // 703679635
		{ &Z_Construct_UFunction_UDecalComponent_SetFadeIn, "SetFadeIn" }, // 2929469000
		{ &Z_Construct_UFunction_UDecalComponent_SetFadeOut, "SetFadeOut" }, // 2293780909
		{ &Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize, "SetFadeScreenSize" }, // 1734003939
		{ &Z_Construct_UFunction_UDecalComponent_SetSortOrder, "SetSortOrder" }, // 2935337409
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDecalComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDecalComponent, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalMaterial_MetaData), NewProp_DecalMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDecalComponent, SortOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortOrder_MetaData), NewProp_SortOrder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeScreenSize = { "FadeScreenSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDecalComponent, FadeScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeScreenSize_MetaData), NewProp_FadeScreenSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeStartDelay = { "FadeStartDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDecalComponent, FadeStartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeStartDelay_MetaData), NewProp_FadeStartDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeDuration = { "FadeDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDecalComponent, FadeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeDuration_MetaData), NewProp_FadeDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDecalComponent, FadeInDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeInDuration_MetaData), NewProp_FadeInDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInStartDelay = { "FadeInStartDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDecalComponent, FadeInStartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeInStartDelay_MetaData), NewProp_FadeInStartDelay_MetaData) };
void Z_Construct_UClass_UDecalComponent_Statics::NewProp_bDestroyOwnerAfterFade_SetBit(void* Obj)
{
	((UDecalComponent*)Obj)->bDestroyOwnerAfterFade = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_bDestroyOwnerAfterFade = { "bDestroyOwnerAfterFade", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDecalComponent), &Z_Construct_UClass_UDecalComponent_Statics::NewProp_bDestroyOwnerAfterFade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyOwnerAfterFade_MetaData), NewProp_bDestroyOwnerAfterFade_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDecalComponent, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalSize_MetaData), NewProp_DecalSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalColor = { "DecalColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDecalComponent, DecalColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalColor_MetaData), NewProp_DecalColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDecalComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_SortOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeStartDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_FadeInStartDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_bDestroyOwnerAfterFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalComponent_Statics::NewProp_DecalColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDecalComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDecalComponent_Statics::ClassParams = {
	&UDecalComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDecalComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDecalComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDecalComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDecalComponent()
{
	if (!Z_Registration_Info_UClass_UDecalComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDecalComponent.OuterSingleton, Z_Construct_UClass_UDecalComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDecalComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDecalComponent>()
{
	return UDecalComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDecalComponent);
UDecalComponent::~UDecalComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDecalComponent)
// End Class UDecalComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDecalComponent, UDecalComponent::StaticClass, TEXT("UDecalComponent"), &Z_Registration_Info_UClass_UDecalComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDecalComponent), 2013598792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_2592329165(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DecalComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS