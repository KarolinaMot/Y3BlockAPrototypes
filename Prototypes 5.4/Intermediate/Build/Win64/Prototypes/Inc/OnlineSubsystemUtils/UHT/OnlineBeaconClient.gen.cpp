// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/OnlineBeaconClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconClient() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeacon();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister();
ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Enum EBeaconConnectionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBeaconConnectionState;
static UEnum* EBeaconConnectionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("EBeaconConnectionState"));
	}
	return Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EBeaconConnectionState>()
{
	return EBeaconConnectionState_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Closed.Comment", "// Connection is invalid, possibly uninitialized.\n" },
		{ "Closed.Name", "EBeaconConnectionState::Closed" },
		{ "Closed.ToolTip", "Connection is invalid, possibly uninitialized." },
		{ "Comment", "/**\n * State of a connection.\n */" },
		{ "Invalid.Name", "EBeaconConnectionState::Invalid" },
		{ "ModuleRelativePath", "Public/OnlineBeaconClient.h" },
		{ "Open.Comment", "// Connection is awaiting connection.\n" },
		{ "Open.Name", "EBeaconConnectionState::Open" },
		{ "Open.ToolTip", "Connection is awaiting connection." },
		{ "Pending.Comment", "// Connection permanently closed.\n" },
		{ "Pending.Name", "EBeaconConnectionState::Pending" },
		{ "Pending.ToolTip", "Connection permanently closed." },
		{ "ToolTip", "State of a connection." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBeaconConnectionState::Invalid", (int64)EBeaconConnectionState::Invalid },
		{ "EBeaconConnectionState::Closed", (int64)EBeaconConnectionState::Closed },
		{ "EBeaconConnectionState::Pending", (int64)EBeaconConnectionState::Pending },
		{ "EBeaconConnectionState::Open", (int64)EBeaconConnectionState::Open },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	"EBeaconConnectionState",
	"EBeaconConnectionState",
	Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState()
{
	if (!Z_Registration_Info_UEnum_EBeaconConnectionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBeaconConnectionState.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBeaconConnectionState.InnerSingleton;
}
// End Enum EBeaconConnectionState

// Begin Class AOnlineBeaconClient Function ClientOnConnected
static FName NAME_AOnlineBeaconClient_ClientOnConnected = FName(TEXT("ClientOnConnected"));
void AOnlineBeaconClient::ClientOnConnected()
{
	ProcessEvent(FindFunctionChecked(NAME_AOnlineBeaconClient_ClientOnConnected),NULL);
}
struct Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called on the server side to open up the actor channel that will allow RPCs to occur\n\x09 * (DO NOT OVERLOAD, implement OnConnected() instead)\n\x09 */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconClient.h" },
		{ "ToolTip", "Called on the server side to open up the actor channel that will allow RPCs to occur\n(DO NOT OVERLOAD, implement OnConnected() instead)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconClient, nullptr, "ClientOnConnected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOnlineBeaconClient::execClientOnConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientOnConnected_Implementation();
	P_NATIVE_END;
}
// End Class AOnlineBeaconClient Function ClientOnConnected

// Begin Class AOnlineBeaconClient
void AOnlineBeaconClient::StaticRegisterNativesAOnlineBeaconClient()
{
	UClass* Class = AOnlineBeaconClient::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientOnConnected", &AOnlineBeaconClient::execClientOnConnected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineBeaconClient);
UClass* Z_Construct_UClass_AOnlineBeaconClient_NoRegister()
{
	return AOnlineBeaconClient::StaticClass();
}
struct Z_Construct_UClass_AOnlineBeaconClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for any unique beacon connectivity, paired with an AOnlineBeaconHostObject implementation \n *\n * This is the actual actor that replicates across client/server and where all RPCs occur\n * On the host, the life cycle is managed by an AOnlineBeaconHostObject\n * On the client, the life cycle is managed by the game \n */" },
		{ "IncludePath", "OnlineBeaconClient.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconClient.h" },
		{ "ToolTip", "Base class for any unique beacon connectivity, paired with an AOnlineBeaconHostObject implementation\n\nThis is the actual actor that replicates across client/server and where all RPCs occur\nOn the host, the life cycle is managed by an AOnlineBeaconHostObject\nOn the client, the life cycle is managed by the game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeaconOwner_MetaData[] = {
		{ "Comment", "/** Owning beacon host of this beacon actor (server only) */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconClient.h" },
		{ "ToolTip", "Owning beacon host of this beacon actor (server only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeaconConnection_MetaData[] = {
		{ "Comment", "/** Network connection associated with this beacon client instance */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconClient.h" },
		{ "ToolTip", "Network connection associated with this beacon client instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionState_MetaData[] = {
		{ "Comment", "/** State of the connection */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconClient.h" },
		{ "ToolTip", "State of the connection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BeaconOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BeaconConnection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectionState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected, "ClientOnConnected" }, // 3645249542
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconOwner = { "BeaconOwner", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOnlineBeaconClient, BeaconOwner), Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeaconOwner_MetaData), NewProp_BeaconOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconConnection = { "BeaconConnection", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOnlineBeaconClient, BeaconConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeaconConnection_MetaData), NewProp_BeaconConnection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_ConnectionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_ConnectionState = { "ConnectionState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOnlineBeaconClient, ConnectionState), Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionState_MetaData), NewProp_ConnectionState_MetaData) }; // 4151259049
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnlineBeaconClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconConnection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_ConnectionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_ConnectionState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconClient_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOnlineBeaconClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeacon,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconClient_Statics::ClassParams = {
	&AOnlineBeaconClient::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOnlineBeaconClient_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconClient_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconClient_Statics::Class_MetaDataParams), Z_Construct_UClass_AOnlineBeaconClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOnlineBeaconClient()
{
	if (!Z_Registration_Info_UClass_AOnlineBeaconClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineBeaconClient.OuterSingleton, Z_Construct_UClass_AOnlineBeaconClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOnlineBeaconClient.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<AOnlineBeaconClient>()
{
	return AOnlineBeaconClient::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconClient);
AOnlineBeaconClient::~AOnlineBeaconClient() {}
// End Class AOnlineBeaconClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBeaconConnectionState_StaticEnum, TEXT("EBeaconConnectionState"), &Z_Registration_Info_UEnum_EBeaconConnectionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4151259049U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineBeaconClient, AOnlineBeaconClient::StaticClass, TEXT("AOnlineBeaconClient"), &Z_Registration_Info_UClass_AOnlineBeaconClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineBeaconClient), 4054781476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_371492436(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS