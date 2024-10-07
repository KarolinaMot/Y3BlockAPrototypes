// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InputVectorAxisDelegateBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InputVectorAxisDelegateBinding_generated_h
#error "InputVectorAxisDelegateBinding.generated.h already included, missing '#pragma once' in InputVectorAxisDelegateBinding.h"
#endif
#define ENGINE_InputVectorAxisDelegateBinding_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputVectorAxisDelegateBinding_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInputVectorAxisDelegateBinding(); \
	friend struct Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UInputVectorAxisDelegateBinding, UInputAxisKeyDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInputVectorAxisDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputVectorAxisDelegateBinding_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputVectorAxisDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputVectorAxisDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputVectorAxisDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputVectorAxisDelegateBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputVectorAxisDelegateBinding(UInputVectorAxisDelegateBinding&&); \
	UInputVectorAxisDelegateBinding(const UInputVectorAxisDelegateBinding&); \
public: \
	ENGINE_API virtual ~UInputVectorAxisDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputVectorAxisDelegateBinding_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputVectorAxisDelegateBinding_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputVectorAxisDelegateBinding_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputVectorAxisDelegateBinding_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputVectorAxisDelegateBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InputVectorAxisDelegateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
