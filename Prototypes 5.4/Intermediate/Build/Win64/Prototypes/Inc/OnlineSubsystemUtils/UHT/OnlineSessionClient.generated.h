// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineSessionClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMUTILS_OnlineSessionClient_generated_h
#error "OnlineSessionClient.generated.h already included, missing '#pragma once' in OnlineSessionClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineSessionClient_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionClient(); \
	friend struct Z_Construct_UClass_UOnlineSessionClient_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionClient, UOnlineSession, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionClient)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnlineSessionClient(UOnlineSessionClient&&); \
	UOnlineSessionClient(const UOnlineSessionClient&); \
public: \
	NO_API virtual ~UOnlineSessionClient();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_20_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_23_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UOnlineSessionClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
