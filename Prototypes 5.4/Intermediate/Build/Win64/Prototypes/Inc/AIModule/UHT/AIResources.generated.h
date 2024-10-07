// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIResources.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIResources_generated_h
#error "AIResources.generated.h already included, missing '#pragma once' in AIResources.h"
#endif
#define AIMODULE_AIResources_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIResource_Movement(); \
	friend struct Z_Construct_UClass_UAIResource_Movement_Statics; \
public: \
	DECLARE_CLASS(UAIResource_Movement, UGameplayTaskResource, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAIResource_Movement)


#define FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIResource_Movement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAIResource_Movement(UAIResource_Movement&&); \
	UAIResource_Movement(const UAIResource_Movement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIResource_Movement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIResource_Movement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIResource_Movement) \
	AIMODULE_API virtual ~UAIResource_Movement();


#define FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_9_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIResource_Movement>();

#define FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIResource_Logic(); \
	friend struct Z_Construct_UClass_UAIResource_Logic_Statics; \
public: \
	DECLARE_CLASS(UAIResource_Logic, UGameplayTaskResource, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAIResource_Logic)


#define FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIResource_Logic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAIResource_Logic(UAIResource_Logic&&); \
	UAIResource_Logic(const UAIResource_Logic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIResource_Logic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIResource_Logic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIResource_Logic) \
	AIMODULE_API virtual ~UAIResource_Logic();


#define FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_19_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIResource_Logic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
