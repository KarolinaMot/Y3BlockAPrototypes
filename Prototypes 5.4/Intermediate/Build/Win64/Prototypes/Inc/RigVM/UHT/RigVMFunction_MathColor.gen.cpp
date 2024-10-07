// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMFunction_MathColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathColor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorAdd();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorSub();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_MathColorBase
static_assert(std::is_polymorphic<FRigVMFunction_MathColorBase>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_MathColorBase cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBase;
class UScriptStruct* FRigVMFunction_MathColorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathColorBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathColorBase>()
{
	return FRigVMFunction_MathColorBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Color" },
		{ "MenuDescSuffix", "(Color)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathColorBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
	&NewStructOps,
	"RigVMFunction_MathColorBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathColorBase),
	alignof(FRigVMFunction_MathColorBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathColorBase

// Begin ScriptStruct FRigVMFunction_MathColorBinaryOp
static_assert(std::is_polymorphic<FRigVMFunction_MathColorBinaryOp>() == std::is_polymorphic<FRigVMFunction_MathColorBase>(), "USTRUCT FRigVMFunction_MathColorBinaryOp cannot be polymorphic unless super FRigVMFunction_MathColorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryOp;
class UScriptStruct* FRigVMFunction_MathColorBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathColorBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathColorBinaryOp>()
{
	return FRigVMFunction_MathColorBinaryOp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathColorBinaryOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorBinaryOp, A), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorBinaryOp, B), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorBinaryOp, Result), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase,
	&NewStructOps,
	"RigVMFunction_MathColorBinaryOp",
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::PropPointers),
	sizeof(FRigVMFunction_MathColorBinaryOp),
	alignof(FRigVMFunction_MathColorBinaryOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryOp.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathColorBinaryOp

// Begin ScriptStruct FRigVMFunction_MathColorBinaryAggregateOp
static_assert(std::is_polymorphic<FRigVMFunction_MathColorBinaryAggregateOp>() == std::is_polymorphic<FRigVMFunction_MathColorBase>(), "USTRUCT FRigVMFunction_MathColorBinaryAggregateOp cannot be polymorphic unless super FRigVMFunction_MathColorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryAggregateOp;
class UScriptStruct* FRigVMFunction_MathColorBinaryAggregateOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryAggregateOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryAggregateOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathColorBinaryAggregateOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryAggregateOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathColorBinaryAggregateOp>()
{
	return FRigVMFunction_MathColorBinaryAggregateOp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathColorBinaryAggregateOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorBinaryAggregateOp, A), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorBinaryAggregateOp, B), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorBinaryAggregateOp, Result), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase,
	&NewStructOps,
	"RigVMFunction_MathColorBinaryAggregateOp",
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::PropPointers),
	sizeof(FRigVMFunction_MathColorBinaryAggregateOp),
	alignof(FRigVMFunction_MathColorBinaryAggregateOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryAggregateOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryAggregateOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryAggregateOp.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathColorBinaryAggregateOp

// Begin ScriptStruct FRigVMFunction_MathColorMake
static_assert(std::is_polymorphic<FRigVMFunction_MathColorMake>() == std::is_polymorphic<FRigVMFunction_MathColorBase>(), "USTRUCT FRigVMFunction_MathColorMake cannot be polymorphic unless super FRigVMFunction_MathColorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMake;
class UScriptStruct* FRigVMFunction_MathColorMake::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMake.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMake.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathColorMake"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathColorMake_Execute;
		Arguments_FRigVMFunction_MathColorMake_Execute.Emplace(TEXT("R"), TEXT("float"));
		Arguments_FRigVMFunction_MathColorMake_Execute.Emplace(TEXT("G"), TEXT("float"));
		Arguments_FRigVMFunction_MathColorMake_Execute.Emplace(TEXT("B"), TEXT("float"));
		Arguments_FRigVMFunction_MathColorMake_Execute.Emplace(TEXT("A"), TEXT("float"));
		Arguments_FRigVMFunction_MathColorMake_Execute.Emplace(TEXT("Result"), TEXT("FLinearColor"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathColorMake::Execute"), &FRigVMFunction_MathColorMake::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMake.OuterSingleton, Arguments_FRigVMFunction_MathColorMake_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMake.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathColorMake>()
{
	return FRigVMFunction_MathColorMake::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a color from its components\n */" },
		{ "DisplayName", "Make Color" },
		{ "Keywords", "Make,Construct,Constant" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "ToolTip", "Makes a color from its components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_R;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_G;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathColorMake>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorMake, R), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_MetaData), NewProp_R_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorMake, G), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_G_MetaData), NewProp_G_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorMake, B), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorMake, A), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorMake, Result), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::NewProp_G,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase,
	&NewStructOps,
	"RigVMFunction_MathColorMake",
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::PropPointers),
	sizeof(FRigVMFunction_MathColorMake),
	alignof(FRigVMFunction_MathColorMake),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMake.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMake.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMake.InnerSingleton;
}
void FRigVMFunction_MathColorMake::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathColorMake::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		R,
		G,
		B,
		A,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathColorMake

// Begin ScriptStruct FRigVMFunction_MathColorFromFloat
static_assert(std::is_polymorphic<FRigVMFunction_MathColorFromFloat>() == std::is_polymorphic<FRigVMFunction_MathColorBase>(), "USTRUCT FRigVMFunction_MathColorFromFloat cannot be polymorphic unless super FRigVMFunction_MathColorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromFloat;
class UScriptStruct* FRigVMFunction_MathColorFromFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathColorFromFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathColorFromFloat_Execute;
		Arguments_FRigVMFunction_MathColorFromFloat_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigVMFunction_MathColorFromFloat_Execute.Emplace(TEXT("Result"), TEXT("FLinearColor"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathColorFromFloat::Execute"), &FRigVMFunction_MathColorFromFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromFloat.OuterSingleton, Arguments_FRigVMFunction_MathColorFromFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromFloat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathColorFromFloat>()
{
	return FRigVMFunction_MathColorFromFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a vector from a single float\n */" },
		{ "DisplayName", "From Float" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Makes a vector from a single float" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathColorFromFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorFromFloat, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorFromFloat, Result), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase,
	&NewStructOps,
	"RigVMFunction_MathColorFromFloat",
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::PropPointers),
	sizeof(FRigVMFunction_MathColorFromFloat),
	alignof(FRigVMFunction_MathColorFromFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromFloat.InnerSingleton;
}
void FRigVMFunction_MathColorFromFloat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathColorFromFloat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathColorFromFloat

// Begin ScriptStruct FRigVMFunction_MathColorFromDouble
static_assert(std::is_polymorphic<FRigVMFunction_MathColorFromDouble>() == std::is_polymorphic<FRigVMFunction_MathColorBase>(), "USTRUCT FRigVMFunction_MathColorFromDouble cannot be polymorphic unless super FRigVMFunction_MathColorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromDouble;
class UScriptStruct* FRigVMFunction_MathColorFromDouble::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromDouble.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromDouble.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathColorFromDouble"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathColorFromDouble_Execute;
		Arguments_FRigVMFunction_MathColorFromDouble_Execute.Emplace(TEXT("Value"), TEXT("double"));
		Arguments_FRigVMFunction_MathColorFromDouble_Execute.Emplace(TEXT("Result"), TEXT("FLinearColor"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathColorFromDouble::Execute"), &FRigVMFunction_MathColorFromDouble::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromDouble.OuterSingleton, Arguments_FRigVMFunction_MathColorFromDouble_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromDouble.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathColorFromDouble>()
{
	return FRigVMFunction_MathColorFromDouble::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a vector from a single double\n */" },
		{ "DisplayName", "From Double" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Makes a vector from a single double" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathColorFromDouble>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorFromDouble, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorFromDouble, Result), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase,
	&NewStructOps,
	"RigVMFunction_MathColorFromDouble",
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::PropPointers),
	sizeof(FRigVMFunction_MathColorFromDouble),
	alignof(FRigVMFunction_MathColorFromDouble),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromDouble.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromDouble.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromDouble.InnerSingleton;
}
void FRigVMFunction_MathColorFromDouble::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathColorFromDouble::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathColorFromDouble

// Begin ScriptStruct FRigVMFunction_MathColorAdd
static_assert(std::is_polymorphic<FRigVMFunction_MathColorAdd>() == std::is_polymorphic<FRigVMFunction_MathColorBinaryAggregateOp>(), "USTRUCT FRigVMFunction_MathColorAdd cannot be polymorphic unless super FRigVMFunction_MathColorBinaryAggregateOp is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorAdd;
class UScriptStruct* FRigVMFunction_MathColorAdd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorAdd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorAdd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorAdd, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathColorAdd"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathColorAdd_Execute;
		Arguments_FRigVMFunction_MathColorAdd_Execute.Emplace(TEXT("A"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_MathColorAdd_Execute.Emplace(TEXT("B"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_MathColorAdd_Execute.Emplace(TEXT("Result"), TEXT("FLinearColor"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathColorAdd::Execute"), &FRigVMFunction_MathColorAdd::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorAdd.OuterSingleton, Arguments_FRigVMFunction_MathColorAdd_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorAdd.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathColorAdd>()
{
	return FRigVMFunction_MathColorAdd::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorAdd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the sum of the two values\n */" },
		{ "DisplayName", "Add" },
		{ "Keywords", "Sum,+" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "TemplateName", "Add" },
		{ "ToolTip", "Returns the sum of the two values" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathColorAdd>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorAdd_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp,
	&NewStructOps,
	"RigVMFunction_MathColorAdd",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathColorAdd),
	alignof(FRigVMFunction_MathColorAdd),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorAdd_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathColorAdd_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorAdd()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorAdd.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorAdd.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathColorAdd_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorAdd.InnerSingleton;
}
void FRigVMFunction_MathColorAdd::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathColorAdd::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathColorAdd

// Begin ScriptStruct FRigVMFunction_MathColorSub
static_assert(std::is_polymorphic<FRigVMFunction_MathColorSub>() == std::is_polymorphic<FRigVMFunction_MathColorBinaryOp>(), "USTRUCT FRigVMFunction_MathColorSub cannot be polymorphic unless super FRigVMFunction_MathColorBinaryOp is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorSub;
class UScriptStruct* FRigVMFunction_MathColorSub::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorSub.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorSub.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorSub, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathColorSub"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathColorSub_Execute;
		Arguments_FRigVMFunction_MathColorSub_Execute.Emplace(TEXT("A"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_MathColorSub_Execute.Emplace(TEXT("B"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_MathColorSub_Execute.Emplace(TEXT("Result"), TEXT("FLinearColor"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathColorSub::Execute"), &FRigVMFunction_MathColorSub::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorSub.OuterSingleton, Arguments_FRigVMFunction_MathColorSub_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorSub.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathColorSub>()
{
	return FRigVMFunction_MathColorSub::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorSub_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the difference of the two values\n */" },
		{ "DisplayName", "Subtract" },
		{ "Keywords", "-" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "TemplateName", "Subtract" },
		{ "ToolTip", "Returns the difference of the two values" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathColorSub>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorSub_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp,
	&NewStructOps,
	"RigVMFunction_MathColorSub",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathColorSub),
	alignof(FRigVMFunction_MathColorSub),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorSub_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathColorSub_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorSub()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorSub.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorSub.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathColorSub_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorSub.InnerSingleton;
}
void FRigVMFunction_MathColorSub::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathColorSub::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathColorSub

// Begin ScriptStruct FRigVMFunction_MathColorMul
static_assert(std::is_polymorphic<FRigVMFunction_MathColorMul>() == std::is_polymorphic<FRigVMFunction_MathColorBinaryAggregateOp>(), "USTRUCT FRigVMFunction_MathColorMul cannot be polymorphic unless super FRigVMFunction_MathColorBinaryAggregateOp is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMul;
class UScriptStruct* FRigVMFunction_MathColorMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathColorMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathColorMul_Execute;
		Arguments_FRigVMFunction_MathColorMul_Execute.Emplace(TEXT("A"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_MathColorMul_Execute.Emplace(TEXT("B"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_MathColorMul_Execute.Emplace(TEXT("Result"), TEXT("FLinearColor"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathColorMul::Execute"), &FRigVMFunction_MathColorMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMul.OuterSingleton, Arguments_FRigVMFunction_MathColorMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMul.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathColorMul>()
{
	return FRigVMFunction_MathColorMul::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the product of the two values\n */" },
		{ "DisplayName", "Multiply" },
		{ "Keywords", "Product,*" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "TemplateName", "Multiply" },
		{ "ToolTip", "Returns the product of the two values" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathColorMul>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp,
	&NewStructOps,
	"RigVMFunction_MathColorMul",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathColorMul),
	alignof(FRigVMFunction_MathColorMul),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMul.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMul.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMul.InnerSingleton;
}
void FRigVMFunction_MathColorMul::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathColorMul::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathColorMul

// Begin ScriptStruct FRigVMFunction_MathColorLerp
static_assert(std::is_polymorphic<FRigVMFunction_MathColorLerp>() == std::is_polymorphic<FRigVMFunction_MathColorBase>(), "USTRUCT FRigVMFunction_MathColorLerp cannot be polymorphic unless super FRigVMFunction_MathColorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorLerp;
class UScriptStruct* FRigVMFunction_MathColorLerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorLerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorLerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathColorLerp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathColorLerp_Execute;
		Arguments_FRigVMFunction_MathColorLerp_Execute.Emplace(TEXT("A"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_MathColorLerp_Execute.Emplace(TEXT("B"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_MathColorLerp_Execute.Emplace(TEXT("T"), TEXT("float"));
		Arguments_FRigVMFunction_MathColorLerp_Execute.Emplace(TEXT("Result"), TEXT("FLinearColor"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathColorLerp::Execute"), &FRigVMFunction_MathColorLerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorLerp.OuterSingleton, Arguments_FRigVMFunction_MathColorLerp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorLerp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathColorLerp>()
{
	return FRigVMFunction_MathColorLerp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Linearly interpolates between A and B using the ratio T\n */" },
		{ "DisplayName", "Interpolate" },
		{ "Keywords", "Lerp,Mix,Blend" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "TemplateName", "Interpolate" },
		{ "ToolTip", "Linearly interpolates between A and B using the ratio T" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathColor.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_T;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathColorLerp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorLerp, A), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorLerp, B), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorLerp, T), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_MetaData), NewProp_T_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathColorLerp, Result), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::NewProp_T,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase,
	&NewStructOps,
	"RigVMFunction_MathColorLerp",
	Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::PropPointers),
	sizeof(FRigVMFunction_MathColorLerp),
	alignof(FRigVMFunction_MathColorLerp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorLerp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorLerp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorLerp.InnerSingleton;
}
void FRigVMFunction_MathColorLerp::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathColorLerp::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		T,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathColorLerp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_MathColorBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase_Statics::NewStructOps, TEXT("RigVMFunction_MathColorBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathColorBase), 1233400917U) },
		{ FRigVMFunction_MathColorBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathColorBinaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathColorBinaryOp), 144621774U) },
		{ FRigVMFunction_MathColorBinaryAggregateOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics::NewStructOps, TEXT("RigVMFunction_MathColorBinaryAggregateOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorBinaryAggregateOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathColorBinaryAggregateOp), 2230646548U) },
		{ FRigVMFunction_MathColorMake::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics::NewStructOps, TEXT("RigVMFunction_MathColorMake"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMake, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathColorMake), 3893654218U) },
		{ FRigVMFunction_MathColorFromFloat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics::NewStructOps, TEXT("RigVMFunction_MathColorFromFloat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathColorFromFloat), 86373630U) },
		{ FRigVMFunction_MathColorFromDouble::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics::NewStructOps, TEXT("RigVMFunction_MathColorFromDouble"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorFromDouble, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathColorFromDouble), 1967070981U) },
		{ FRigVMFunction_MathColorAdd::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathColorAdd_Statics::NewStructOps, TEXT("RigVMFunction_MathColorAdd"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorAdd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathColorAdd), 3780835786U) },
		{ FRigVMFunction_MathColorSub::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathColorSub_Statics::NewStructOps, TEXT("RigVMFunction_MathColorSub"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorSub, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathColorSub), 1931711931U) },
		{ FRigVMFunction_MathColorMul::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul_Statics::NewStructOps, TEXT("RigVMFunction_MathColorMul"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathColorMul), 1575871768U) },
		{ FRigVMFunction_MathColorLerp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::NewStructOps, TEXT("RigVMFunction_MathColorLerp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathColorLerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathColorLerp), 1886026969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_3502772504(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
