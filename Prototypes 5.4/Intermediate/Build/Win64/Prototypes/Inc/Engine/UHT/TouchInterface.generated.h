// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/TouchInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TouchInterface_generated_h
#error "TouchInterface.generated.h already included, missing '#pragma once' in TouchInterface.h"
#endif
#define ENGINE_TouchInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTouchInputControl_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTouchInputControl>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUTouchInterface(); \
	friend struct Z_Construct_UClass_UTouchInterface_Statics; \
public: \
	DECLARE_CLASS(UTouchInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTouchInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTouchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTouchInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTouchInterface(UTouchInterface&&); \
	UTouchInterface(const UTouchInterface&); \
public: \
	ENGINE_API virtual ~UTouchInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_61_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTouchInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
