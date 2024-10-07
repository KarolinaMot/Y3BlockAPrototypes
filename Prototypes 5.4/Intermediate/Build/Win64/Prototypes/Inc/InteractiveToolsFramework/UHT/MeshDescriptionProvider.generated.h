// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/MeshDescriptionProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_MeshDescriptionProvider_generated_h
#error "MeshDescriptionProvider.generated.h already included, missing '#pragma once' in MeshDescriptionProvider.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_MeshDescriptionProvider_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UMeshDescriptionProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshDescriptionProvider(UMeshDescriptionProvider&&); \
	UMeshDescriptionProvider(const UMeshDescriptionProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UMeshDescriptionProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDescriptionProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshDescriptionProvider) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UMeshDescriptionProvider();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMeshDescriptionProvider(); \
	friend struct Z_Construct_UClass_UMeshDescriptionProvider_Statics; \
public: \
	DECLARE_CLASS(UMeshDescriptionProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UMeshDescriptionProvider)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMeshDescriptionProvider() {} \
public: \
	typedef UMeshDescriptionProvider UClassType; \
	typedef IMeshDescriptionProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_12_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UMeshDescriptionProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
