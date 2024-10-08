// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProfilingDebugging/HealthSnapshot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HealthSnapshot_generated_h
#error "HealthSnapshot.generated.h already included, missing '#pragma once' in HealthSnapshot.h"
#endif
#define ENGINE_HealthSnapshot_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execLogPerformanceSnapshot); \
	DECLARE_FUNCTION(execStopPerformanceSnapshots); \
	DECLARE_FUNCTION(execStartPerformanceSnapshots);


#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHealthSnapshotBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UHealthSnapshotBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UHealthSnapshotBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHealthSnapshotBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthSnapshotBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHealthSnapshotBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthSnapshotBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealthSnapshotBlueprintLibrary(UHealthSnapshotBlueprintLibrary&&); \
	UHealthSnapshotBlueprintLibrary(const UHealthSnapshotBlueprintLibrary&); \
public: \
	ENGINE_API virtual ~UHealthSnapshotBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHealthSnapshotBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
