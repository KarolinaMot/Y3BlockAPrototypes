// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelScriptBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelScriptBlueprint_generated_h
#error "LevelScriptBlueprint.generated.h already included, missing '#pragma once' in LevelScriptBlueprint.h"
#endif
#define ENGINE_LevelScriptBlueprint_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULevelScriptBlueprint(); \
	friend struct Z_Construct_UClass_ULevelScriptBlueprint_Statics; \
public: \
	DECLARE_CLASS(ULevelScriptBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelScriptBlueprint)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelScriptBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelScriptBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelScriptBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelScriptBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelScriptBlueprint(ULevelScriptBlueprint&&); \
	ULevelScriptBlueprint(const ULevelScriptBlueprint&); \
public: \
	ENGINE_API virtual ~ULevelScriptBlueprint();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelScriptBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS