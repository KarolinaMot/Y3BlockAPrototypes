// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombineMeshesTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLS_CombineMeshesTool_generated_h
#error "CombineMeshesTool.generated.h already included, missing '#pragma once' in CombineMeshesTool.h"
#endif
#define MESHMODELINGTOOLS_CombineMeshesTool_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombineMeshesToolBuilder(); \
	friend struct Z_Construct_UClass_UCombineMeshesToolBuilder_Statics; \
public: \
	DECLARE_CLASS(UCombineMeshesToolBuilder, UMultiSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), NO_API) \
	DECLARE_SERIALIZER(UCombineMeshesToolBuilder)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombineMeshesToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombineMeshesToolBuilder(UCombineMeshesToolBuilder&&); \
	UCombineMeshesToolBuilder(const UCombineMeshesToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombineMeshesToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombineMeshesToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombineMeshesToolBuilder) \
	NO_API virtual ~UCombineMeshesToolBuilder();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLS_API UClass* StaticClass<class UCombineMeshesToolBuilder>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombineMeshesToolProperties(); \
	friend struct Z_Construct_UClass_UCombineMeshesToolProperties_Statics; \
public: \
	DECLARE_CLASS(UCombineMeshesToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), NO_API) \
	DECLARE_SERIALIZER(UCombineMeshesToolProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombineMeshesToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombineMeshesToolProperties(UCombineMeshesToolProperties&&); \
	UCombineMeshesToolProperties(const UCombineMeshesToolProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombineMeshesToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombineMeshesToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombineMeshesToolProperties) \
	NO_API virtual ~UCombineMeshesToolProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_38_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLS_API UClass* StaticClass<class UCombineMeshesToolProperties>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombineMeshesTool(); \
	friend struct Z_Construct_UClass_UCombineMeshesTool_Statics; \
public: \
	DECLARE_CLASS(UCombineMeshesTool, UMultiSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), NO_API) \
	DECLARE_SERIALIZER(UCombineMeshesTool) \
	virtual UObject* _getUObject() const override { return const_cast<UCombineMeshesTool*>(this); }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombineMeshesTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombineMeshesTool(UCombineMeshesTool&&); \
	UCombineMeshesTool(const UCombineMeshesTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombineMeshesTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombineMeshesTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombineMeshesTool) \
	NO_API virtual ~UCombineMeshesTool();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_67_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLS_API UClass* StaticClass<class UCombineMeshesTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
