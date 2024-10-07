// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_BlueprintBase() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryGenerator_BlueprintBase Function AddGeneratedActor
struct Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics
{
	struct EnvQueryGenerator_BlueprintBase_eventAddGeneratedActor_Parms
	{
		AActor* GeneratedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::NewProp_GeneratedActor = { "GeneratedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventAddGeneratedActor_Parms, GeneratedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::NewProp_GeneratedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, nullptr, "AddGeneratedActor", nullptr, nullptr, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::EnvQueryGenerator_BlueprintBase_eventAddGeneratedActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::EnvQueryGenerator_BlueprintBase_eventAddGeneratedActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnvQueryGenerator_BlueprintBase::execAddGeneratedActor)
{
	P_GET_OBJECT(AActor,Z_Param_GeneratedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddGeneratedActor(Z_Param_GeneratedActor);
	P_NATIVE_END;
}
// End Class UEnvQueryGenerator_BlueprintBase Function AddGeneratedActor

// Begin Class UEnvQueryGenerator_BlueprintBase Function AddGeneratedVector
struct Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics
{
	struct EnvQueryGenerator_BlueprintBase_eventAddGeneratedVector_Parms
	{
		FVector GeneratedVector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::NewProp_GeneratedVector = { "GeneratedVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventAddGeneratedVector_Parms, GeneratedVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::NewProp_GeneratedVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, nullptr, "AddGeneratedVector", nullptr, nullptr, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::EnvQueryGenerator_BlueprintBase_eventAddGeneratedVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::EnvQueryGenerator_BlueprintBase_eventAddGeneratedVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnvQueryGenerator_BlueprintBase::execAddGeneratedVector)
{
	P_GET_STRUCT(FVector,Z_Param_GeneratedVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddGeneratedVector(Z_Param_GeneratedVector);
	P_NATIVE_END;
}
// End Class UEnvQueryGenerator_BlueprintBase Function AddGeneratedVector

// Begin Class UEnvQueryGenerator_BlueprintBase Function DoItemGeneration
struct EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms
{
	TArray<FVector> ContextLocations;
};
static FName NAME_UEnvQueryGenerator_BlueprintBase_DoItemGeneration = FName(TEXT("DoItemGeneration"));
void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<FVector> const& ContextLocations) const
{
	EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms Parms;
	Parms.ContextLocations=ContextLocations;
	const_cast<UEnvQueryGenerator_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryGenerator_BlueprintBase_DoItemGeneration),&Parms);
}
struct Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextLocations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextLocations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::NewProp_ContextLocations_Inner = { "ContextLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::NewProp_ContextLocations = { "ContextLocations", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms, ContextLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextLocations_MetaData), NewProp_ContextLocations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::NewProp_ContextLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::NewProp_ContextLocations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, nullptr, "DoItemGeneration", nullptr, nullptr, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::PropPointers), sizeof(EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::Function_MetaDataParams) };
static_assert(sizeof(EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEnvQueryGenerator_BlueprintBase Function DoItemGeneration

// Begin Class UEnvQueryGenerator_BlueprintBase Function DoItemGenerationFromActors
struct EnvQueryGenerator_BlueprintBase_eventDoItemGenerationFromActors_Parms
{
	TArray<AActor*> ContextActors;
};
static FName NAME_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors = FName(TEXT("DoItemGenerationFromActors"));
void UEnvQueryGenerator_BlueprintBase::DoItemGenerationFromActors(TArray<AActor*> const& ContextActors) const
{
	EnvQueryGenerator_BlueprintBase_eventDoItemGenerationFromActors_Parms Parms;
	Parms.ContextActors=ContextActors;
	const_cast<UEnvQueryGenerator_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors),&Parms);
}
struct Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics::NewProp_ContextActors_Inner = { "ContextActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics::NewProp_ContextActors = { "ContextActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventDoItemGenerationFromActors_Parms, ContextActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextActors_MetaData), NewProp_ContextActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics::NewProp_ContextActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics::NewProp_ContextActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, nullptr, "DoItemGenerationFromActors", nullptr, nullptr, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics::PropPointers), sizeof(EnvQueryGenerator_BlueprintBase_eventDoItemGenerationFromActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(EnvQueryGenerator_BlueprintBase_eventDoItemGenerationFromActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEnvQueryGenerator_BlueprintBase Function DoItemGenerationFromActors

// Begin Class UEnvQueryGenerator_BlueprintBase Function GetQuerier
struct Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics
{
	struct EnvQueryGenerator_BlueprintBase_eventGetQuerier_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryGenerator_BlueprintBase_eventGetQuerier_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, nullptr, "GetQuerier", nullptr, nullptr, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::EnvQueryGenerator_BlueprintBase_eventGetQuerier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::EnvQueryGenerator_BlueprintBase_eventGetQuerier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnvQueryGenerator_BlueprintBase::execGetQuerier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetQuerier();
	P_NATIVE_END;
}
// End Class UEnvQueryGenerator_BlueprintBase Function GetQuerier

// Begin Class UEnvQueryGenerator_BlueprintBase
void UEnvQueryGenerator_BlueprintBase::StaticRegisterNativesUEnvQueryGenerator_BlueprintBase()
{
	UClass* Class = UEnvQueryGenerator_BlueprintBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGeneratedActor", &UEnvQueryGenerator_BlueprintBase::execAddGeneratedActor },
		{ "AddGeneratedVector", &UEnvQueryGenerator_BlueprintBase::execAddGeneratedVector },
		{ "GetQuerier", &UEnvQueryGenerator_BlueprintBase::execGetQuerier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_BlueprintBase);
UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_NoRegister()
{
	return UEnvQueryGenerator_BlueprintBase::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorsActionDescription_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** A short description of what test does, like \"Generate pawn named Joe\" */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
		{ "ToolTip", "A short description of what test does, like \"Generate pawn named Joe\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
		{ "ToolTip", "context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedItemType_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** @todo this should show up only in the generator's BP, but \n\x09 *\x09""due to the way EQS editor is generating widgets it's there as well\n\x09 *\x09It's a bug and we'll fix it */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h" },
		{ "ToolTip", "@todo this should show up only in the generator's BP, but\n    due to the way EQS editor is generating widgets it's there as well\n    It's a bug and we'll fix it" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_GeneratorsActionDescription;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Context;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GeneratedItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor, "AddGeneratedActor" }, // 346418219
		{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector, "AddGeneratedVector" }, // 1748620986
		{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration, "DoItemGeneration" }, // 2139416411
		{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors, "DoItemGenerationFromActors" }, // 3139739498
		{ &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier, "GetQuerier" }, // 2596438476
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_BlueprintBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratorsActionDescription = { "GeneratorsActionDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_BlueprintBase, GeneratorsActionDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratorsActionDescription_MetaData), NewProp_GeneratorsActionDescription_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_BlueprintBase, Context), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratedItemType = { "GeneratedItemType", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_BlueprintBase, GeneratedItemType), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryItemType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedItemType_MetaData), NewProp_GeneratedItemType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratorsActionDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::NewProp_GeneratedItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::ClassParams = {
	&UEnvQueryGenerator_BlueprintBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase()
{
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_BlueprintBase>()
{
	return UEnvQueryGenerator_BlueprintBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_BlueprintBase);
UEnvQueryGenerator_BlueprintBase::~UEnvQueryGenerator_BlueprintBase() {}
// End Class UEnvQueryGenerator_BlueprintBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase, UEnvQueryGenerator_BlueprintBase::StaticClass, TEXT("UEnvQueryGenerator_BlueprintBase"), &Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_BlueprintBase), 2513577165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_1854272548(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
