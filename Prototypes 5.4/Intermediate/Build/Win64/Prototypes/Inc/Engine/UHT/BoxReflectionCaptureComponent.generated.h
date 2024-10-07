// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BoxReflectionCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BoxReflectionCaptureComponent_generated_h
#error "BoxReflectionCaptureComponent.generated.h already included, missing '#pragma once' in BoxReflectionCaptureComponent.h"
#endif
#define ENGINE_BoxReflectionCaptureComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBoxReflectionCaptureComponent(); \
	friend struct Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UBoxReflectionCaptureComponent, UReflectionCaptureComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBoxReflectionCaptureComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBoxReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoxReflectionCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBoxReflectionCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoxReflectionCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBoxReflectionCaptureComponent(UBoxReflectionCaptureComponent&&); \
	UBoxReflectionCaptureComponent(const UBoxReflectionCaptureComponent&); \
public: \
	ENGINE_API virtual ~UBoxReflectionCaptureComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBoxReflectionCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
