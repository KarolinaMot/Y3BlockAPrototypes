// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Core/Connection/EscalationStates.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETCORE_EscalationStates_generated_h
#error "EscalationStates.generated.h already included, missing '#pragma once' in EscalationStates.h"
#endif
#define NETCORE_EscalationStates_generated_h

#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEscalationState_Statics; \
	NETCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FStateStruct Super;


template<> NETCORE_API UScriptStruct* StaticStruct<struct FEscalationState>();

#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_757_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEscalationManagerConfig(); \
	friend struct Z_Construct_UClass_UEscalationManagerConfig_Statics; \
public: \
	DECLARE_CLASS(UEscalationManagerConfig, UStatePerObjectConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetCore"), NETCORE_API) \
	DECLARE_SERIALIZER(UEscalationManagerConfig)


#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_757_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NETCORE_API UEscalationManagerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEscalationManagerConfig(UEscalationManagerConfig&&); \
	UEscalationManagerConfig(const UEscalationManagerConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETCORE_API, UEscalationManagerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEscalationManagerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEscalationManagerConfig) \
	NETCORE_API virtual ~UEscalationManagerConfig();


#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_754_PROLOG
#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_757_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_757_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_757_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETCORE_API UClass* StaticClass<class UEscalationManagerConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
