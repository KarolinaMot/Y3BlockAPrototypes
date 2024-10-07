// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintTypes() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConeConstraint();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintBaseParams();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearConstraint();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTwistConstraint();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FConstraintBaseParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintBaseParams;
class UScriptStruct* FConstraintBaseParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintBaseParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintBaseParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintBaseParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintBaseParams"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintBaseParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintBaseParams>()
{
	return FConstraintBaseParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintBaseParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Stiffness of the soft constraint. Only used when Soft Constraint is on. */" },
		{ "editcondition", "bSoftConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Stiffness of the soft constraint. Only used when Soft Constraint is on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Damping of the soft constraint. Only used when Soft Constraint is on. */" },
		{ "editcondition", "bSoftConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Damping of the soft constraint. Only used when Soft Constraint is on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Restitution_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactDistance_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSoftConstraint_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Whether we want to use a soft constraint (spring). */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Whether we want to use a soft constraint (spring)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Restitution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactDistance;
	static void NewProp_bSoftConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintBaseParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintBaseParams, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintBaseParams, Damping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damping_MetaData), NewProp_Damping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Restitution = { "Restitution", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintBaseParams, Restitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Restitution_MetaData), NewProp_Restitution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_ContactDistance = { "ContactDistance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintBaseParams, ContactDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactDistance_MetaData), NewProp_ContactDistance_MetaData) };
void Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_bSoftConstraint_SetBit(void* Obj)
{
	((FConstraintBaseParams*)Obj)->bSoftConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_bSoftConstraint = { "bSoftConstraint", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintBaseParams), &Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_bSoftConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSoftConstraint_MetaData), NewProp_bSoftConstraint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Damping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Restitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_ContactDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_bSoftConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ConstraintBaseParams",
	Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::PropPointers),
	sizeof(FConstraintBaseParams),
	alignof(FConstraintBaseParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintBaseParams()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintBaseParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintBaseParams.InnerSingleton, Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintBaseParams.InnerSingleton;
}
// End ScriptStruct FConstraintBaseParams

// Begin ScriptStruct FLinearConstraint
static_assert(std::is_polymorphic<FLinearConstraint>() == std::is_polymorphic<FConstraintBaseParams>(), "USTRUCT FLinearConstraint cannot be polymorphic unless super FConstraintBaseParams is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LinearConstraint;
class UScriptStruct* FLinearConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LinearConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LinearConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinearConstraint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LinearConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_LinearConstraint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLinearConstraint>()
{
	return FLinearConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLinearConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Distance constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Distance constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The distance allowed between the two joint reference frames. Distance applies on all axes enabled (one axis means line, two axes implies circle, three axes implies sphere) */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "The distance allowed between the two joint reference frames. Distance applies on all axes enabled (one axis means line, two axes implies circle, three axes implies sphere)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XMotion_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Indicates the linear constraint applied along the X-axis. Free implies no constraint at all. Locked implies no movement along X is allowed. Limited implies the distance in the joint along all active axes must be less than the Distance provided. */" },
		{ "DisplayName", "X Motion" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Indicates the linear constraint applied along the X-axis. Free implies no constraint at all. Locked implies no movement along X is allowed. Limited implies the distance in the joint along all active axes must be less than the Distance provided." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YMotion_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Indicates the linear constraint applied along the Y-axis. Free implies no constraint at all. Locked implies no movement along Y is allowed. Limited implies the distance in the joint along all active axes must be less than the Distance provided. */" },
		{ "DisplayName", "Y Motion" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Indicates the linear constraint applied along the Y-axis. Free implies no constraint at all. Locked implies no movement along Y is allowed. Limited implies the distance in the joint along all active axes must be less than the Distance provided." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZMotion_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Indicates the linear constraint applied along theZX-axis. Free implies no constraint at all. Locked implies no movement along Z is allowed. Limited implies the distance in the joint along all active axes must be less than the Distance provided. */" },
		{ "DisplayName", "Z Motion" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Indicates the linear constraint applied along theZX-axis. Free implies no constraint at all. Locked implies no movement along Z is allowed. Limited implies the distance in the joint along all active axes must be less than the Distance provided." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_XMotion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_YMotion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ZMotion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinearConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLinearConstraint, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_XMotion = { "XMotion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLinearConstraint, XMotion), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XMotion_MetaData), NewProp_XMotion_MetaData) }; // 2172304196
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_YMotion = { "YMotion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLinearConstraint, YMotion), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YMotion_MetaData), NewProp_YMotion_MetaData) }; // 2172304196
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_ZMotion = { "ZMotion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLinearConstraint, ZMotion), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZMotion_MetaData), NewProp_ZMotion_MetaData) }; // 2172304196
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLinearConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_XMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_YMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_ZMotion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinearConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FConstraintBaseParams,
	&NewStructOps,
	"LinearConstraint",
	Z_Construct_UScriptStruct_FLinearConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearConstraint_Statics::PropPointers),
	sizeof(FLinearConstraint),
	alignof(FLinearConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLinearConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLinearConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_LinearConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LinearConstraint.InnerSingleton, Z_Construct_UScriptStruct_FLinearConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LinearConstraint.InnerSingleton;
}
// End ScriptStruct FLinearConstraint

// Begin ScriptStruct FConeConstraint
static_assert(std::is_polymorphic<FConeConstraint>() == std::is_polymorphic<FConstraintBaseParams>(), "USTRUCT FConeConstraint cannot be polymorphic unless super FConstraintBaseParams is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConeConstraint;
class UScriptStruct* FConeConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConeConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConeConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConeConstraint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ConeConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_ConeConstraint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConeConstraint>()
{
	return FConeConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConeConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Cone constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Cone constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing1LimitDegrees_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Angle of movement along the XY plane. This defines the first symmetric angle of the cone. */" },
		{ "DisplayName", "Swing 1 Limit" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Angle of movement along the XY plane. This defines the first symmetric angle of the cone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing2LimitDegrees_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Angle of movement along the XZ plane. This defines the second symmetric angle of the cone. */" },
		{ "DisplayName", "Swing 2 Limit" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Angle of movement along the XZ plane. This defines the second symmetric angle of the cone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing1Motion_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Indicates whether the Swing1 limit is used.*/" },
		{ "DisplayName", "Swing 1 Motion" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Indicates whether the Swing1 limit is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing2Motion_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Indicates whether the Swing2 limit is used.*/" },
		{ "DisplayName", "Swing 2 Motion" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Indicates whether the Swing2 limit is used." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitDegrees;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Swing1Motion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Swing2Motion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConeConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1LimitDegrees = { "Swing1LimitDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConeConstraint, Swing1LimitDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing1LimitDegrees_MetaData), NewProp_Swing1LimitDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2LimitDegrees = { "Swing2LimitDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConeConstraint, Swing2LimitDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing2LimitDegrees_MetaData), NewProp_Swing2LimitDegrees_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1Motion = { "Swing1Motion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConeConstraint, Swing1Motion), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing1Motion_MetaData), NewProp_Swing1Motion_MetaData) }; // 2222529340
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2Motion = { "Swing2Motion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConeConstraint, Swing2Motion), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing2Motion_MetaData), NewProp_Swing2Motion_MetaData) }; // 2222529340
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConeConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1LimitDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2LimitDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1Motion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2Motion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConeConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConeConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FConstraintBaseParams,
	&NewStructOps,
	"ConeConstraint",
	Z_Construct_UScriptStruct_FConeConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConeConstraint_Statics::PropPointers),
	sizeof(FConeConstraint),
	alignof(FConeConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConeConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConeConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConeConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_ConeConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConeConstraint.InnerSingleton, Z_Construct_UScriptStruct_FConeConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConeConstraint.InnerSingleton;
}
// End ScriptStruct FConeConstraint

// Begin ScriptStruct FTwistConstraint
static_assert(std::is_polymorphic<FTwistConstraint>() == std::is_polymorphic<FConstraintBaseParams>(), "USTRUCT FTwistConstraint cannot be polymorphic unless super FConstraintBaseParams is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwistConstraint;
class UScriptStruct* FTwistConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwistConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwistConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwistConstraint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TwistConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_TwistConstraint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTwistConstraint>()
{
	return FTwistConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTwistConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Angular roll constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Angular roll constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimitDegrees_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Symmetric angle of roll along the X-axis. */" },
		{ "DisplayName", "Twist Limit" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Symmetric angle of roll along the X-axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistMotion_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Indicates whether the Twist limit is used.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Indicates whether the Twist limit is used." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitDegrees;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TwistMotion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwistConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistLimitDegrees = { "TwistLimitDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwistConstraint, TwistLimitDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistLimitDegrees_MetaData), NewProp_TwistLimitDegrees_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistMotion = { "TwistMotion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwistConstraint, TwistMotion), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistMotion_MetaData), NewProp_TwistMotion_MetaData) }; // 2222529340
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwistConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistLimitDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistMotion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwistConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwistConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FConstraintBaseParams,
	&NewStructOps,
	"TwistConstraint",
	Z_Construct_UScriptStruct_FTwistConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwistConstraint_Statics::PropPointers),
	sizeof(FTwistConstraint),
	alignof(FTwistConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwistConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwistConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTwistConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_TwistConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwistConstraint.InnerSingleton, Z_Construct_UScriptStruct_FTwistConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TwistConstraint.InnerSingleton;
}
// End ScriptStruct FTwistConstraint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConstraintBaseParams::StaticStruct, Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewStructOps, TEXT("ConstraintBaseParams"), &Z_Registration_Info_UScriptStruct_ConstraintBaseParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintBaseParams), 573396608U) },
		{ FLinearConstraint::StaticStruct, Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewStructOps, TEXT("LinearConstraint"), &Z_Registration_Info_UScriptStruct_LinearConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLinearConstraint), 3157075599U) },
		{ FConeConstraint::StaticStruct, Z_Construct_UScriptStruct_FConeConstraint_Statics::NewStructOps, TEXT("ConeConstraint"), &Z_Registration_Info_UScriptStruct_ConeConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConeConstraint), 3650821860U) },
		{ FTwistConstraint::StaticStruct, Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewStructOps, TEXT("TwistConstraint"), &Z_Registration_Info_UScriptStruct_TwistConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwistConstraint), 2903573168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h_701620950(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
