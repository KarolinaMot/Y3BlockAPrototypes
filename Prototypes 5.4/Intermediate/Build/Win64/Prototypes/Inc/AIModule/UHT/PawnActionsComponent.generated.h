// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/PawnActionsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UDEPRECATED_PawnAction;
class UObject;
#ifdef AIMODULE_PawnActionsComponent_generated_h
#error "PawnActionsComponent.generated.h already included, missing '#pragma once' in PawnActionsComponent.h"
#endif
#define AIMODULE_PawnActionsComponent_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPawnActionEvent_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FPawnActionEvent>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPawnActionStack_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FPawnActionStack>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_RPC_WRAPPERS \
	DECLARE_FUNCTION(execK2_ForceAbortAction); \
	DECLARE_FUNCTION(execK2_AbortAction); \
	DECLARE_FUNCTION(execK2_PushAction); \
	DECLARE_FUNCTION(execK2_PerformAction);


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_PawnActionsComponent(); \
	friend struct Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_PawnActionsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UDEPRECATED_PawnActionsComponent)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UDEPRECATED_PawnActionsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_PawnActionsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UDEPRECATED_PawnActionsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_PawnActionsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_PawnActionsComponent(UDEPRECATED_PawnActionsComponent&&); \
	UDEPRECATED_PawnActionsComponent(const UDEPRECATED_PawnActionsComponent&); \
public: \
	AIMODULE_API virtual ~UDEPRECATED_PawnActionsComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_77_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UDEPRECATED_PawnActionsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
