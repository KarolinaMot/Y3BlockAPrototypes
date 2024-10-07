// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/ContentBundle/ContentBundleDescriptor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ContentBundleDescriptor_generated_h
#error "ContentBundleDescriptor.generated.h already included, missing '#pragma once' in ContentBundleDescriptor.h"
#endif
#define ENGINE_ContentBundleDescriptor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUContentBundleDescriptor(); \
	friend struct Z_Construct_UClass_UContentBundleDescriptor_Statics; \
public: \
	DECLARE_CLASS(UContentBundleDescriptor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UContentBundleDescriptor)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UContentBundleDescriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBundleDescriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UContentBundleDescriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBundleDescriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContentBundleDescriptor(UContentBundleDescriptor&&); \
	UContentBundleDescriptor(const UContentBundleDescriptor&); \
public: \
	ENGINE_API virtual ~UContentBundleDescriptor();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UContentBundleDescriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
