// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mesh/InterchangeSkeletalMeshFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEIMPORT_InterchangeSkeletalMeshFactory_generated_h
#error "InterchangeSkeletalMeshFactory.generated.h already included, missing '#pragma once' in InterchangeSkeletalMeshFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeSkeletalMeshFactory_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSkeletalMeshFactory(); \
	friend struct Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSkeletalMeshFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSkeletalMeshFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeSkeletalMeshFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeSkeletalMeshFactory(UInterchangeSkeletalMeshFactory&&); \
	UInterchangeSkeletalMeshFactory(const UInterchangeSkeletalMeshFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSkeletalMeshFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSkeletalMeshFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeSkeletalMeshFactory) \
	NO_API virtual ~UInterchangeSkeletalMeshFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_28_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UInterchangeSkeletalMeshFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS