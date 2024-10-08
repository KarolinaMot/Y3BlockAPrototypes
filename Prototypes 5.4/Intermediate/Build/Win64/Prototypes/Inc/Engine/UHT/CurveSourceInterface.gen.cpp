// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/CurveSourceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveSourceInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UCurveSourceInterface();
ENGINE_API UClass* Z_Construct_UClass_UCurveSourceInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedCurveValue();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FNamedCurveValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedCurveValue;
class UScriptStruct* FNamedCurveValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedCurveValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedCurveValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedCurveValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NamedCurveValue"));
	}
	return Z_Registration_Info_UScriptStruct_NamedCurveValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedCurveValue>()
{
	return FNamedCurveValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNamedCurveValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Name/value pair for retrieving curve values */" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "Name/value pair for retrieving curve values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** The name of the curve */" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "The name of the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** The value of the curve */" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "The value of the curve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedCurveValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedCurveValue, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedCurveValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedCurveValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedCurveValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NamedCurveValue",
	Z_Construct_UScriptStruct_FNamedCurveValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::PropPointers),
	sizeof(FNamedCurveValue),
	alignof(FNamedCurveValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCurveValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNamedCurveValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNamedCurveValue()
{
	if (!Z_Registration_Info_UScriptStruct_NamedCurveValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedCurveValue.InnerSingleton, Z_Construct_UScriptStruct_FNamedCurveValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NamedCurveValue.InnerSingleton;
}
// End ScriptStruct FNamedCurveValue

// Begin Interface UCurveSourceInterface Function GetBindingName
struct CurveSourceInterface_eventGetBindingName_Parms
{
	FName ReturnValue;
};
FName ICurveSourceInterface::GetBindingName() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBindingName instead.");
	CurveSourceInterface_eventGetBindingName_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCurveSourceInterface_GetBindingName = FName(TEXT("GetBindingName"));
FName ICurveSourceInterface::Execute_GetBindingName(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass()));
	CurveSourceInterface_eventGetBindingName_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCurveSourceInterface_GetBindingName);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICurveSourceInterface*)(O->GetNativeInterfaceAddress(UCurveSourceInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetBindingName_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** \n\x09 * Get the name that this curve source can be bound to by.\n\x09 * Clients of this curve source will use this name to identify this source.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "Get the name that this curve source can be bound to by.\nClients of this curve source will use this name to identify this source." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveSourceInterface_eventGetBindingName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveSourceInterface, nullptr, "GetBindingName", nullptr, nullptr, Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::PropPointers), sizeof(CurveSourceInterface_eventGetBindingName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::Function_MetaDataParams) };
static_assert(sizeof(CurveSourceInterface_eventGetBindingName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetBindingName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICurveSourceInterface::execGetBindingName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetBindingName_Implementation();
	P_NATIVE_END;
}
// End Interface UCurveSourceInterface Function GetBindingName

// Begin Interface UCurveSourceInterface Function GetCurves
struct CurveSourceInterface_eventGetCurves_Parms
{
	TArray<FNamedCurveValue> OutValues;
};
void ICurveSourceInterface::GetCurves(TArray<FNamedCurveValue>& OutValues) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurves instead.");
}
static FName NAME_UCurveSourceInterface_GetCurves = FName(TEXT("GetCurves"));
void ICurveSourceInterface::Execute_GetCurves(const UObject* O, TArray<FNamedCurveValue>& OutValues)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass()));
	CurveSourceInterface_eventGetCurves_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCurveSourceInterface_GetCurves);
	if (Func)
	{
		Parms.OutValues=OutValues;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		OutValues=Parms.OutValues;
	}
	else if (auto I = (const ICurveSourceInterface*)(O->GetNativeInterfaceAddress(UCurveSourceInterface::StaticClass())))
	{
		I->GetCurves_Implementation(OutValues);
	}
}
struct Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Evaluate all curves that this source provides */" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "Evaluate all curves that this source provides" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNamedCurveValue, METADATA_PARAMS(0, nullptr) }; // 1338562003
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveSourceInterface_eventGetCurves_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1338562003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::NewProp_OutValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::NewProp_OutValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveSourceInterface, nullptr, "GetCurves", nullptr, nullptr, Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::PropPointers), sizeof(CurveSourceInterface_eventGetCurves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::Function_MetaDataParams) };
static_assert(sizeof(CurveSourceInterface_eventGetCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetCurves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICurveSourceInterface::execGetCurves)
{
	P_GET_TARRAY_REF(FNamedCurveValue,Z_Param_Out_OutValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurves_Implementation(Z_Param_Out_OutValues);
	P_NATIVE_END;
}
// End Interface UCurveSourceInterface Function GetCurves

// Begin Interface UCurveSourceInterface Function GetCurveValue
struct CurveSourceInterface_eventGetCurveValue_Parms
{
	FName CurveName;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	CurveSourceInterface_eventGetCurveValue_Parms()
		: ReturnValue(0)
	{
	}
};
float ICurveSourceInterface::GetCurveValue(FName CurveName) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurveValue instead.");
	CurveSourceInterface_eventGetCurveValue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCurveSourceInterface_GetCurveValue = FName(TEXT("GetCurveValue"));
float ICurveSourceInterface::Execute_GetCurveValue(const UObject* O, FName CurveName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCurveSourceInterface::StaticClass()));
	CurveSourceInterface_eventGetCurveValue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCurveSourceInterface_GetCurveValue);
	if (Func)
	{
		Parms.CurveName=CurveName;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICurveSourceInterface*)(O->GetNativeInterfaceAddress(UCurveSourceInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCurveValue_Implementation(CurveName);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Get the value for a specified curve */" },
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
		{ "ToolTip", "Get the value for a specified curve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveSourceInterface_eventGetCurveValue_Parms, CurveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveSourceInterface_eventGetCurveValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveSourceInterface, nullptr, "GetCurveValue", nullptr, nullptr, Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::PropPointers), sizeof(CurveSourceInterface_eventGetCurveValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(CurveSourceInterface_eventGetCurveValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICurveSourceInterface::execGetCurveValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurveValue_Implementation(Z_Param_CurveName);
	P_NATIVE_END;
}
// End Interface UCurveSourceInterface Function GetCurveValue

// Begin Interface UCurveSourceInterface
void UCurveSourceInterface::StaticRegisterNativesUCurveSourceInterface()
{
	UClass* Class = UCurveSourceInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBindingName", &ICurveSourceInterface::execGetBindingName },
		{ "GetCurves", &ICurveSourceInterface::execGetCurves },
		{ "GetCurveValue", &ICurveSourceInterface::execGetCurveValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveSourceInterface);
UClass* Z_Construct_UClass_UCurveSourceInterface_NoRegister()
{
	return UCurveSourceInterface::StaticClass();
}
struct Z_Construct_UClass_UCurveSourceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/CurveSourceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveSourceInterface_GetBindingName, "GetBindingName" }, // 2220569086
		{ &Z_Construct_UFunction_UCurveSourceInterface_GetCurves, "GetCurves" }, // 3172980418
		{ &Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue, "GetCurveValue" }, // 2568479535
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICurveSourceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCurveSourceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveSourceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveSourceInterface_Statics::ClassParams = {
	&UCurveSourceInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveSourceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveSourceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurveSourceInterface()
{
	if (!Z_Registration_Info_UClass_UCurveSourceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveSourceInterface.OuterSingleton, Z_Construct_UClass_UCurveSourceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveSourceInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCurveSourceInterface>()
{
	return UCurveSourceInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveSourceInterface);
UCurveSourceInterface::~UCurveSourceInterface() {}
// End Interface UCurveSourceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNamedCurveValue::StaticStruct, Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewStructOps, TEXT("NamedCurveValue"), &Z_Registration_Info_UScriptStruct_NamedCurveValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedCurveValue), 1338562003U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveSourceInterface, UCurveSourceInterface::StaticClass, TEXT("UCurveSourceInterface"), &Z_Registration_Info_UClass_UCurveSourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveSourceInterface), 3101867631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_252595204(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
