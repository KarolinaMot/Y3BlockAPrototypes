// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EnvQueryGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryGenerator_generated_h
#error "EnvQueryGenerator.generated.h already included, missing '#pragma once' in EnvQueryGenerator.h"
#endif
#define AIMODULE_EnvQueryGenerator_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryGenerator(); \
	friend struct Z_Construct_UClass_UEnvQueryGenerator_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryGenerator, UEnvQueryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEnvQueryGenerator)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvQueryGenerator(UEnvQueryGenerator&&); \
	UEnvQueryGenerator(const UEnvQueryGenerator&); \
public: \
	AIMODULE_API virtual ~UEnvQueryGenerator();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_20_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS