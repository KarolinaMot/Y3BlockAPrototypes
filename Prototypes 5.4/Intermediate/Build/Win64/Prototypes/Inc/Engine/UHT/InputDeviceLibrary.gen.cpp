// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/InputDeviceLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/InputDevicePropertyHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDeviceLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EInputDeviceConnectionState();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceLibrary();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceLibrary_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDevicePropertyHandle();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UInputDeviceLibrary Function EqualEqual_InputDeviceId
struct Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventEqualEqual_InputDeviceId_Parms
	{
		FInputDeviceId A;
		FInputDeviceId B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns true if InputDeviceId A is equal to InputDeviceId B (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (InputDeviceId)" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ScriptMethod", "Equals" },
		{ "ScriptOperator", "==" },
		{ "ToolTip", "Returns true if InputDeviceId A is equal to InputDeviceId B (A == B)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventEqualEqual_InputDeviceId_Parms, A), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventEqualEqual_InputDeviceId_Parms, B), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputDeviceLibrary_eventEqualEqual_InputDeviceId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputDeviceLibrary_eventEqualEqual_InputDeviceId_Parms), &Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "EqualEqual_InputDeviceId", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::InputDeviceLibrary_eventEqualEqual_InputDeviceId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::InputDeviceLibrary_eventEqualEqual_InputDeviceId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execEqualEqual_InputDeviceId)
{
	P_GET_STRUCT(FInputDeviceId,Z_Param_A);
	P_GET_STRUCT(FInputDeviceId,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInputDeviceLibrary::EqualEqual_InputDeviceId(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function EqualEqual_InputDeviceId

// Begin Class UInputDeviceLibrary Function EqualEqual_PlatformUserId
struct Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventEqualEqual_PlatformUserId_Parms
	{
		FPlatformUserId A;
		FPlatformUserId B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns true if PlatformUserId A is equal to PlatformUserId B (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (PlatformUserId)" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ScriptMethod", "Equals" },
		{ "ScriptOperator", "==" },
		{ "ToolTip", "Returns true if PlatformUserId A is equal to PlatformUserId B (A == B)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventEqualEqual_PlatformUserId_Parms, A), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventEqualEqual_PlatformUserId_Parms, B), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputDeviceLibrary_eventEqualEqual_PlatformUserId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputDeviceLibrary_eventEqualEqual_PlatformUserId_Parms), &Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "EqualEqual_PlatformUserId", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::InputDeviceLibrary_eventEqualEqual_PlatformUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::InputDeviceLibrary_eventEqualEqual_PlatformUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execEqualEqual_PlatformUserId)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_A);
	P_GET_STRUCT(FPlatformUserId,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInputDeviceLibrary::EqualEqual_PlatformUserId(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function EqualEqual_PlatformUserId

// Begin Class UInputDeviceLibrary Function GetAllActiveUsers
struct Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventGetAllActiveUsers_Parms
	{
		TArray<FPlatformUserId> OutUsers;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Get all currently active platform ids, anyone who has a mapped input device\n\x09 *\n\x09 * @param OutUsers\x09\x09""Array that will be populated with the platform users.\n\x09 * @return\x09\x09\x09\x09The number of active platform users\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Get all currently active platform ids, anyone who has a mapped input device\n\n@param OutUsers              Array that will be populated with the platform users.\n@return                              The number of active platform users" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutUsers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutUsers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::NewProp_OutUsers_Inner = { "OutUsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::NewProp_OutUsers = { "OutUsers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetAllActiveUsers_Parms, OutUsers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetAllActiveUsers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::NewProp_OutUsers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::NewProp_OutUsers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "GetAllActiveUsers", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::InputDeviceLibrary_eventGetAllActiveUsers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::InputDeviceLibrary_eventGetAllActiveUsers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execGetAllActiveUsers)
{
	P_GET_TARRAY_REF(FPlatformUserId,Z_Param_Out_OutUsers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UInputDeviceLibrary::GetAllActiveUsers(Z_Param_Out_OutUsers);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function GetAllActiveUsers

// Begin Class UInputDeviceLibrary Function GetAllConnectedInputDevices
struct Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventGetAllConnectedInputDevices_Parms
	{
		TArray<FInputDeviceId> OutInputDevices;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Gather all currently connected input devices\n\x09 * \n\x09 * @param OutInputDevices\x09""Array of input devices to populate\n\x09 * @return\x09\x09\x09\x09\x09The number of connected input devices\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Gather all currently connected input devices\n\n@param OutInputDevices       Array of input devices to populate\n@return                                      The number of connected input devices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInputDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInputDevices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::NewProp_OutInputDevices_Inner = { "OutInputDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::NewProp_OutInputDevices = { "OutInputDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetAllConnectedInputDevices_Parms, OutInputDevices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetAllConnectedInputDevices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::NewProp_OutInputDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::NewProp_OutInputDevices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "GetAllConnectedInputDevices", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::InputDeviceLibrary_eventGetAllConnectedInputDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::InputDeviceLibrary_eventGetAllConnectedInputDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execGetAllConnectedInputDevices)
{
	P_GET_TARRAY_REF(FInputDeviceId,Z_Param_Out_OutInputDevices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UInputDeviceLibrary::GetAllConnectedInputDevices(Z_Param_Out_OutInputDevices);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function GetAllConnectedInputDevices

// Begin Class UInputDeviceLibrary Function GetAllInputDevices
struct Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventGetAllInputDevices_Parms
	{
		TArray<FInputDeviceId> OutInputDevices;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Get all mapped input devices on this platform regardless of their connection state.\n\x09 * \n\x09 * @param OutInputDevices\x09""Array of input devices to populate\n\x09 * @return\x09\x09\x09\x09\x09The number of connected input devices\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Get all mapped input devices on this platform regardless of their connection state.\n\n@param OutInputDevices       Array of input devices to populate\n@return                                      The number of connected input devices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInputDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInputDevices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::NewProp_OutInputDevices_Inner = { "OutInputDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::NewProp_OutInputDevices = { "OutInputDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetAllInputDevices_Parms, OutInputDevices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetAllInputDevices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::NewProp_OutInputDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::NewProp_OutInputDevices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "GetAllInputDevices", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::InputDeviceLibrary_eventGetAllInputDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::InputDeviceLibrary_eventGetAllInputDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execGetAllInputDevices)
{
	P_GET_TARRAY_REF(FInputDeviceId,Z_Param_Out_OutInputDevices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UInputDeviceLibrary::GetAllInputDevices(Z_Param_Out_OutInputDevices);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function GetAllInputDevices

// Begin Class UInputDeviceLibrary Function GetAllInputDevicesForUser
struct Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventGetAllInputDevicesForUser_Parms
	{
		FPlatformUserId UserId;
		TArray<FInputDeviceId> OutInputDevices;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Populates the OutInputDevices array with any InputDeviceID's that are mapped to the given platform user\n\x09 *\n\x09 * @param UserId\x09\x09\x09\x09The Platform User to gather the input devices of.\n\x09 * @param OutInputDevices\x09\x09""Array of input device ID's that will be populated with the mapped devices.\n\x09 * @return\x09\x09\x09\x09\x09\x09The number of mapped devices, INDEX_NONE if the user was not found.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Populates the OutInputDevices array with any InputDeviceID's that are mapped to the given platform user\n\n@param UserId                                The Platform User to gather the input devices of.\n@param OutInputDevices               Array of input device ID's that will be populated with the mapped devices.\n@return                                              The number of mapped devices, INDEX_NONE if the user was not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInputDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInputDevices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetAllInputDevicesForUser_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::NewProp_OutInputDevices_Inner = { "OutInputDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::NewProp_OutInputDevices = { "OutInputDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetAllInputDevicesForUser_Parms, OutInputDevices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetAllInputDevicesForUser_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::NewProp_OutInputDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::NewProp_OutInputDevices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "GetAllInputDevicesForUser", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::InputDeviceLibrary_eventGetAllInputDevicesForUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::InputDeviceLibrary_eventGetAllInputDevicesForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execGetAllInputDevicesForUser)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_UserId);
	P_GET_TARRAY_REF(FInputDeviceId,Z_Param_Out_OutInputDevices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UInputDeviceLibrary::GetAllInputDevicesForUser(Z_Param_UserId,Z_Param_Out_OutInputDevices);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function GetAllInputDevicesForUser

// Begin Class UInputDeviceLibrary Function GetDefaultInputDevice
struct Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventGetDefaultInputDevice_Parms
	{
		FInputDeviceId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns the default device id used for things like keyboard/mouse input */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Returns the default device id used for things like keyboard/mouse input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetDefaultInputDevice_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "GetDefaultInputDevice", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics::InputDeviceLibrary_eventGetDefaultInputDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics::InputDeviceLibrary_eventGetDefaultInputDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execGetDefaultInputDevice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputDeviceId*)Z_Param__Result=UInputDeviceLibrary::GetDefaultInputDevice();
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function GetDefaultInputDevice

// Begin Class UInputDeviceLibrary Function GetInputDeviceConnectionState
struct Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventGetInputDeviceConnectionState_Parms
	{
		FInputDeviceId DeviceId;
		EInputDeviceConnectionState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Gets the connection state of the given input device.\n\x09 * \n\x09 * @param DeviceId\x09\x09The device to get the connection state of\n\x09 * @return\x09\x09\x09\x09The connection state of the given device. EInputDeviceConnectionState::Unknown if the device is not mapped\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Gets the connection state of the given input device.\n\n@param DeviceId              The device to get the connection state of\n@return                              The connection state of the given device. EInputDeviceConnectionState::Unknown if the device is not mapped" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetInputDeviceConnectionState_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetInputDeviceConnectionState_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EInputDeviceConnectionState, METADATA_PARAMS(0, nullptr) }; // 1587276391
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "GetInputDeviceConnectionState", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::InputDeviceLibrary_eventGetInputDeviceConnectionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::InputDeviceLibrary_eventGetInputDeviceConnectionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execGetInputDeviceConnectionState)
{
	P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EInputDeviceConnectionState*)Z_Param__Result=UInputDeviceLibrary::GetInputDeviceConnectionState(Z_Param_DeviceId);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function GetInputDeviceConnectionState

// Begin Class UInputDeviceLibrary Function GetPlayerControllerFromInputDevice
struct Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventGetPlayerControllerFromInputDevice_Parms
	{
		FInputDeviceId DeviceId;
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Devices" },
		{ "Comment", "/** Get the player controller who owns the given input device id */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Get the player controller who owns the given input device id" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetPlayerControllerFromInputDevice_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetPlayerControllerFromInputDevice_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "GetPlayerControllerFromInputDevice", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::InputDeviceLibrary_eventGetPlayerControllerFromInputDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::InputDeviceLibrary_eventGetPlayerControllerFromInputDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execGetPlayerControllerFromInputDevice)
{
	P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=UInputDeviceLibrary::GetPlayerControllerFromInputDevice(Z_Param_DeviceId);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function GetPlayerControllerFromInputDevice

// Begin Class UInputDeviceLibrary Function GetPlayerControllerFromPlatformUser
struct Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventGetPlayerControllerFromPlatformUser_Parms
	{
		FPlatformUserId UserId;
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Devices" },
		{ "Comment", "/** Get the player controller who has the given Platform User ID. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Get the player controller who has the given Platform User ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetPlayerControllerFromPlatformUser_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetPlayerControllerFromPlatformUser_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "GetPlayerControllerFromPlatformUser", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::InputDeviceLibrary_eventGetPlayerControllerFromPlatformUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::InputDeviceLibrary_eventGetPlayerControllerFromPlatformUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execGetPlayerControllerFromPlatformUser)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_UserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=UInputDeviceLibrary::GetPlayerControllerFromPlatformUser(Z_Param_UserId);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function GetPlayerControllerFromPlatformUser

// Begin Class UInputDeviceLibrary Function GetPrimaryInputDeviceForUser
struct Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventGetPrimaryInputDeviceForUser_Parms
	{
		FPlatformUserId UserId;
		FInputDeviceId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns the primary input device used by a specific player, or INPUTDEVICEID_NONE if invalid */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Returns the primary input device used by a specific player, or INPUTDEVICEID_NONE if invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetPrimaryInputDeviceForUser_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetPrimaryInputDeviceForUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "GetPrimaryInputDeviceForUser", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::InputDeviceLibrary_eventGetPrimaryInputDeviceForUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::InputDeviceLibrary_eventGetPrimaryInputDeviceForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execGetPrimaryInputDeviceForUser)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_UserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputDeviceId*)Z_Param__Result=UInputDeviceLibrary::GetPrimaryInputDeviceForUser(Z_Param_UserId);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function GetPrimaryInputDeviceForUser

// Begin Class UInputDeviceLibrary Function GetPrimaryPlatformUser
struct Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventGetPrimaryPlatformUser_Parms
	{
		FPlatformUserId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Returns the 'Primary' Platform user for this platform.\n\x09 * This typically has an internal ID of '0' and is used as the default platform user to\n\x09 * map devices such as the keyboard and mouse that don't get assigned unique ID's from their\n\x09 * owning platform code.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Returns the 'Primary' Platform user for this platform.\nThis typically has an internal ID of '0' and is used as the default platform user to\nmap devices such as the keyboard and mouse that don't get assigned unique ID's from their\nowning platform code." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetPrimaryPlatformUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "GetPrimaryPlatformUser", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics::InputDeviceLibrary_eventGetPrimaryPlatformUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics::InputDeviceLibrary_eventGetPrimaryPlatformUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execGetPrimaryPlatformUser)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlatformUserId*)Z_Param__Result=UInputDeviceLibrary::GetPrimaryPlatformUser();
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function GetPrimaryPlatformUser

// Begin Class UInputDeviceLibrary Function GetUserForInputDevice
struct Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventGetUserForInputDevice_Parms
	{
		FInputDeviceId DeviceId;
		FPlatformUserId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns the platform user attached to this input device, or PLATFORMUSERID_NONE if invalid */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Returns the platform user attached to this input device, or PLATFORMUSERID_NONE if invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetUserForInputDevice_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetUserForInputDevice_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "GetUserForInputDevice", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::InputDeviceLibrary_eventGetUserForInputDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::InputDeviceLibrary_eventGetUserForInputDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execGetUserForInputDevice)
{
	P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlatformUserId*)Z_Param__Result=UInputDeviceLibrary::GetUserForInputDevice(Z_Param_DeviceId);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function GetUserForInputDevice

// Begin Class UInputDeviceLibrary Function GetUserForUnpairedInputDevices
struct Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventGetUserForUnpairedInputDevices_Parms
	{
		FPlatformUserId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Returns the platform user id that is being used for unmapped input devices.\n\x09 * Will be PLATFORMUSERID_NONE if platform does not support this (this is the default behavior)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Returns the platform user id that is being used for unmapped input devices.\nWill be PLATFORMUSERID_NONE if platform does not support this (this is the default behavior)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventGetUserForUnpairedInputDevices_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "GetUserForUnpairedInputDevices", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics::InputDeviceLibrary_eventGetUserForUnpairedInputDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics::InputDeviceLibrary_eventGetUserForUnpairedInputDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execGetUserForUnpairedInputDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlatformUserId*)Z_Param__Result=UInputDeviceLibrary::GetUserForUnpairedInputDevices();
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function GetUserForUnpairedInputDevices

// Begin Class UInputDeviceLibrary Function InputDeviceId_None
struct Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventInputDeviceId_None_Parms
	{
		FInputDeviceId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Static invalid input device */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ScriptConstant", "None" },
		{ "ScriptConstantHost", "/Script/CoreUObject.InputDeviceId" },
		{ "ToolTip", "Static invalid input device" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventInputDeviceId_None_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "InputDeviceId_None", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics::InputDeviceLibrary_eventInputDeviceId_None_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics::InputDeviceLibrary_eventInputDeviceId_None_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execInputDeviceId_None)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputDeviceId*)Z_Param__Result=UInputDeviceLibrary::InputDeviceId_None();
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function InputDeviceId_None

// Begin Class UInputDeviceLibrary Function IsDevicePropertyHandleValid
struct Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics
{
	struct InputDeviceLibrary_eventIsDevicePropertyHandleValid_Parms
	{
		FInputDevicePropertyHandle InHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Devices" },
		{ "Comment", "/** Returns true if the given handle is valid */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ReturnDisplayName", "Is Valid" },
		{ "ToolTip", "Returns true if the given handle is valid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventIsDevicePropertyHandleValid_Parms, InHandle), Z_Construct_UScriptStruct_FInputDevicePropertyHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHandle_MetaData), NewProp_InHandle_MetaData) }; // 158936348
void Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputDeviceLibrary_eventIsDevicePropertyHandleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputDeviceLibrary_eventIsDevicePropertyHandleValid_Parms), &Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::NewProp_InHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "IsDevicePropertyHandleValid", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::InputDeviceLibrary_eventIsDevicePropertyHandleValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::InputDeviceLibrary_eventIsDevicePropertyHandleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execIsDevicePropertyHandleValid)
{
	P_GET_STRUCT_REF(FInputDevicePropertyHandle,Z_Param_Out_InHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInputDeviceLibrary::IsDevicePropertyHandleValid(Z_Param_Out_InHandle);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function IsDevicePropertyHandleValid

// Begin Class UInputDeviceLibrary Function IsInputDeviceMappedToUnpairedUser
struct Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventIsInputDeviceMappedToUnpairedUser_Parms
	{
		FInputDeviceId InputDevice;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns true if the given input device is mapped to the unpaired platform user id. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Returns true if the given input device is mapped to the unpaired platform user id." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDevice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputDevice;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_InputDevice = { "InputDevice", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventIsInputDeviceMappedToUnpairedUser_Parms, InputDevice), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDevice_MetaData), NewProp_InputDevice_MetaData) };
void Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputDeviceLibrary_eventIsInputDeviceMappedToUnpairedUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputDeviceLibrary_eventIsInputDeviceMappedToUnpairedUser_Parms), &Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_InputDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "IsInputDeviceMappedToUnpairedUser", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::InputDeviceLibrary_eventIsInputDeviceMappedToUnpairedUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::InputDeviceLibrary_eventIsInputDeviceMappedToUnpairedUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execIsInputDeviceMappedToUnpairedUser)
{
	P_GET_STRUCT(FInputDeviceId,Z_Param_InputDevice);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInputDeviceLibrary::IsInputDeviceMappedToUnpairedUser(Z_Param_InputDevice);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function IsInputDeviceMappedToUnpairedUser

// Begin Class UInputDeviceLibrary Function IsUnpairedUserId
struct Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventIsUnpairedUserId_Parms
	{
		FPlatformUserId PlatformId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns true if the given Platform User Id is the user for unpaired input devices on this platform. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Returns true if the given Platform User Id is the user for unpaired input devices on this platform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventIsUnpairedUserId_Parms, PlatformId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformId_MetaData), NewProp_PlatformId_MetaData) };
void Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputDeviceLibrary_eventIsUnpairedUserId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputDeviceLibrary_eventIsUnpairedUserId_Parms), &Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::NewProp_PlatformId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "IsUnpairedUserId", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::InputDeviceLibrary_eventIsUnpairedUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::InputDeviceLibrary_eventIsUnpairedUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execIsUnpairedUserId)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_PlatformId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInputDeviceLibrary::IsUnpairedUserId(Z_Param_PlatformId);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function IsUnpairedUserId

// Begin Class UInputDeviceLibrary Function IsValidInputDevice
struct Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventIsValidInputDevice_Parms
	{
		FInputDeviceId DeviceId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Check if the given input device is valid\n\x09 * \n\x09 * @return\x09True if the given input device is valid (it has been assigned an ID by the PlatformInputDeviceMapper)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Check if the given input device is valid\n\n@return      True if the given input device is valid (it has been assigned an ID by the PlatformInputDeviceMapper)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventIsValidInputDevice_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputDeviceLibrary_eventIsValidInputDevice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputDeviceLibrary_eventIsValidInputDevice_Parms), &Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "IsValidInputDevice", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::InputDeviceLibrary_eventIsValidInputDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::InputDeviceLibrary_eventIsValidInputDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execIsValidInputDevice)
{
	P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInputDeviceLibrary::IsValidInputDevice(Z_Param_DeviceId);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function IsValidInputDevice

// Begin Class UInputDeviceLibrary Function IsValidPlatformId
struct Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventIsValidPlatformId_Parms
	{
		FPlatformUserId UserId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Check if the given platform ID is valid\n\x09 * \n\x09 * @return\x09True if the platform ID is valid (it has been assigned by the PlatformInputDeviceMapper)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "Check if the given platform ID is valid\n\n@return      True if the platform ID is valid (it has been assigned by the PlatformInputDeviceMapper)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventIsValidPlatformId_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputDeviceLibrary_eventIsValidPlatformId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputDeviceLibrary_eventIsValidPlatformId_Parms), &Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "IsValidPlatformId", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::InputDeviceLibrary_eventIsValidPlatformId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::InputDeviceLibrary_eventIsValidPlatformId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execIsValidPlatformId)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_UserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInputDeviceLibrary::IsValidPlatformId(Z_Param_UserId);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function IsValidPlatformId

// Begin Class UInputDeviceLibrary Function NotEqual_InputDeviceId
struct Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventNotEqual_InputDeviceId_Parms
	{
		FInputDeviceId A;
		FInputDeviceId B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns true if InputDeviceId A is not equal to InputDeviceId B (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal (InputDeviceId)" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ScriptMethod", "NotEqual" },
		{ "ScriptOperator", "!=" },
		{ "ToolTip", "Returns true if InputDeviceId A is not equal to InputDeviceId B (A != B)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventNotEqual_InputDeviceId_Parms, A), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventNotEqual_InputDeviceId_Parms, B), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputDeviceLibrary_eventNotEqual_InputDeviceId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputDeviceLibrary_eventNotEqual_InputDeviceId_Parms), &Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "NotEqual_InputDeviceId", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::InputDeviceLibrary_eventNotEqual_InputDeviceId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::InputDeviceLibrary_eventNotEqual_InputDeviceId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execNotEqual_InputDeviceId)
{
	P_GET_STRUCT(FInputDeviceId,Z_Param_A);
	P_GET_STRUCT(FInputDeviceId,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInputDeviceLibrary::NotEqual_InputDeviceId(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function NotEqual_InputDeviceId

// Begin Class UInputDeviceLibrary Function NotEqual_PlatformUserId
struct Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventNotEqual_PlatformUserId_Parms
	{
		FPlatformUserId A;
		FPlatformUserId B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns true if PlatformUserId A is not equal to PlatformUserId B (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal (PlatformUserId)" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ScriptMethod", "NotEqual" },
		{ "ScriptOperator", "!=" },
		{ "ToolTip", "Returns true if PlatformUserId A is not equal to PlatformUserId B (A != B)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventNotEqual_PlatformUserId_Parms, A), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventNotEqual_PlatformUserId_Parms, B), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputDeviceLibrary_eventNotEqual_PlatformUserId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputDeviceLibrary_eventNotEqual_PlatformUserId_Parms), &Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "NotEqual_PlatformUserId", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::InputDeviceLibrary_eventNotEqual_PlatformUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::InputDeviceLibrary_eventNotEqual_PlatformUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execNotEqual_PlatformUserId)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_A);
	P_GET_STRUCT(FPlatformUserId,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInputDeviceLibrary::NotEqual_PlatformUserId(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function NotEqual_PlatformUserId

// Begin Class UInputDeviceLibrary Function PlatformUserId_None
struct Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceLibrary_eventPlatformUserId_None_Parms
	{
		FPlatformUserId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Static invalid platform user */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ScriptConstant", "None" },
		{ "ScriptConstantHost", "/Script/CoreUObject.PlatformUserId" },
		{ "ToolTip", "Static invalid platform user" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceLibrary_eventPlatformUserId_None_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceLibrary, nullptr, "PlatformUserId_None", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics::InputDeviceLibrary_eventPlatformUserId_None_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics::InputDeviceLibrary_eventPlatformUserId_None_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceLibrary::execPlatformUserId_None)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlatformUserId*)Z_Param__Result=UInputDeviceLibrary::PlatformUserId_None();
	P_NATIVE_END;
}
// End Class UInputDeviceLibrary Function PlatformUserId_None

// Begin Class UInputDeviceLibrary
void UInputDeviceLibrary::StaticRegisterNativesUInputDeviceLibrary()
{
	UClass* Class = UInputDeviceLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EqualEqual_InputDeviceId", &UInputDeviceLibrary::execEqualEqual_InputDeviceId },
		{ "EqualEqual_PlatformUserId", &UInputDeviceLibrary::execEqualEqual_PlatformUserId },
		{ "GetAllActiveUsers", &UInputDeviceLibrary::execGetAllActiveUsers },
		{ "GetAllConnectedInputDevices", &UInputDeviceLibrary::execGetAllConnectedInputDevices },
		{ "GetAllInputDevices", &UInputDeviceLibrary::execGetAllInputDevices },
		{ "GetAllInputDevicesForUser", &UInputDeviceLibrary::execGetAllInputDevicesForUser },
		{ "GetDefaultInputDevice", &UInputDeviceLibrary::execGetDefaultInputDevice },
		{ "GetInputDeviceConnectionState", &UInputDeviceLibrary::execGetInputDeviceConnectionState },
		{ "GetPlayerControllerFromInputDevice", &UInputDeviceLibrary::execGetPlayerControllerFromInputDevice },
		{ "GetPlayerControllerFromPlatformUser", &UInputDeviceLibrary::execGetPlayerControllerFromPlatformUser },
		{ "GetPrimaryInputDeviceForUser", &UInputDeviceLibrary::execGetPrimaryInputDeviceForUser },
		{ "GetPrimaryPlatformUser", &UInputDeviceLibrary::execGetPrimaryPlatformUser },
		{ "GetUserForInputDevice", &UInputDeviceLibrary::execGetUserForInputDevice },
		{ "GetUserForUnpairedInputDevices", &UInputDeviceLibrary::execGetUserForUnpairedInputDevices },
		{ "InputDeviceId_None", &UInputDeviceLibrary::execInputDeviceId_None },
		{ "IsDevicePropertyHandleValid", &UInputDeviceLibrary::execIsDevicePropertyHandleValid },
		{ "IsInputDeviceMappedToUnpairedUser", &UInputDeviceLibrary::execIsInputDeviceMappedToUnpairedUser },
		{ "IsUnpairedUserId", &UInputDeviceLibrary::execIsUnpairedUserId },
		{ "IsValidInputDevice", &UInputDeviceLibrary::execIsValidInputDevice },
		{ "IsValidPlatformId", &UInputDeviceLibrary::execIsValidPlatformId },
		{ "NotEqual_InputDeviceId", &UInputDeviceLibrary::execNotEqual_InputDeviceId },
		{ "NotEqual_PlatformUserId", &UInputDeviceLibrary::execNotEqual_PlatformUserId },
		{ "PlatformUserId_None", &UInputDeviceLibrary::execPlatformUserId_None },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceLibrary);
UClass* Z_Construct_UClass_UInputDeviceLibrary_NoRegister()
{
	return UInputDeviceLibrary::StaticClass();
}
struct Z_Construct_UClass_UInputDeviceLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A static BP library that exposes Input Device data to blueprints\n *\n * @see IPlatformInputDeviceMapper\n * @note Keep any function comments up to date with those in GenericPlatformInputDeviceMapper.h!\n */" },
		{ "IncludePath", "GameFramework/InputDeviceLibrary.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceLibrary.h" },
		{ "ToolTip", "A static BP library that exposes Input Device data to blueprints\n\n@see IPlatformInputDeviceMapper\n@note Keep any function comments up to date with those in GenericPlatformInputDeviceMapper.h!" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_InputDeviceId, "EqualEqual_InputDeviceId" }, // 3909976670
		{ &Z_Construct_UFunction_UInputDeviceLibrary_EqualEqual_PlatformUserId, "EqualEqual_PlatformUserId" }, // 2948994330
		{ &Z_Construct_UFunction_UInputDeviceLibrary_GetAllActiveUsers, "GetAllActiveUsers" }, // 2164078589
		{ &Z_Construct_UFunction_UInputDeviceLibrary_GetAllConnectedInputDevices, "GetAllConnectedInputDevices" }, // 2879590677
		{ &Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevices, "GetAllInputDevices" }, // 1261706324
		{ &Z_Construct_UFunction_UInputDeviceLibrary_GetAllInputDevicesForUser, "GetAllInputDevicesForUser" }, // 4003747584
		{ &Z_Construct_UFunction_UInputDeviceLibrary_GetDefaultInputDevice, "GetDefaultInputDevice" }, // 1805920020
		{ &Z_Construct_UFunction_UInputDeviceLibrary_GetInputDeviceConnectionState, "GetInputDeviceConnectionState" }, // 382906840
		{ &Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromInputDevice, "GetPlayerControllerFromInputDevice" }, // 3494953073
		{ &Z_Construct_UFunction_UInputDeviceLibrary_GetPlayerControllerFromPlatformUser, "GetPlayerControllerFromPlatformUser" }, // 198140248
		{ &Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryInputDeviceForUser, "GetPrimaryInputDeviceForUser" }, // 329774054
		{ &Z_Construct_UFunction_UInputDeviceLibrary_GetPrimaryPlatformUser, "GetPrimaryPlatformUser" }, // 2451851518
		{ &Z_Construct_UFunction_UInputDeviceLibrary_GetUserForInputDevice, "GetUserForInputDevice" }, // 1107791659
		{ &Z_Construct_UFunction_UInputDeviceLibrary_GetUserForUnpairedInputDevices, "GetUserForUnpairedInputDevices" }, // 4252714704
		{ &Z_Construct_UFunction_UInputDeviceLibrary_InputDeviceId_None, "InputDeviceId_None" }, // 2914558767
		{ &Z_Construct_UFunction_UInputDeviceLibrary_IsDevicePropertyHandleValid, "IsDevicePropertyHandleValid" }, // 2807406093
		{ &Z_Construct_UFunction_UInputDeviceLibrary_IsInputDeviceMappedToUnpairedUser, "IsInputDeviceMappedToUnpairedUser" }, // 2724336276
		{ &Z_Construct_UFunction_UInputDeviceLibrary_IsUnpairedUserId, "IsUnpairedUserId" }, // 1221265420
		{ &Z_Construct_UFunction_UInputDeviceLibrary_IsValidInputDevice, "IsValidInputDevice" }, // 810256499
		{ &Z_Construct_UFunction_UInputDeviceLibrary_IsValidPlatformId, "IsValidPlatformId" }, // 2314109420
		{ &Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_InputDeviceId, "NotEqual_InputDeviceId" }, // 4048374851
		{ &Z_Construct_UFunction_UInputDeviceLibrary_NotEqual_PlatformUserId, "NotEqual_PlatformUserId" }, // 1475457229
		{ &Z_Construct_UFunction_UInputDeviceLibrary_PlatformUserId_None, "PlatformUserId_None" }, // 1643314782
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputDeviceLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceLibrary_Statics::ClassParams = {
	&UInputDeviceLibrary::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDeviceLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDeviceLibrary()
{
	if (!Z_Registration_Info_UClass_UInputDeviceLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceLibrary.OuterSingleton, Z_Construct_UClass_UInputDeviceLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDeviceLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputDeviceLibrary>()
{
	return UInputDeviceLibrary::StaticClass();
}
UInputDeviceLibrary::UInputDeviceLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceLibrary);
UInputDeviceLibrary::~UInputDeviceLibrary() {}
// End Class UInputDeviceLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputDeviceLibrary, UInputDeviceLibrary::StaticClass, TEXT("UInputDeviceLibrary"), &Z_Registration_Info_UClass_UInputDeviceLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceLibrary), 2340516465U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_261117819(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS