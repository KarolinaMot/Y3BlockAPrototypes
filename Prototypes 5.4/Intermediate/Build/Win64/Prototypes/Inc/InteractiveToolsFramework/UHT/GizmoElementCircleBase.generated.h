// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementCircleBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementCircleBase_generated_h
#error "GizmoElementCircleBase.generated.h already included, missing '#pragma once' in GizmoElementCircleBase.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementCircleBase_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementCircleBase(); \
	friend struct Z_Construct_UClass_UGizmoElementCircleBase_Statics; \
public: \
	DECLARE_CLASS(UGizmoElementCircleBase, UGizmoElementLineBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UGizmoElementCircleBase)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoElementCircleBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGizmoElementCircleBase(UGizmoElementCircleBase&&); \
	UGizmoElementCircleBase(const UGizmoElementCircleBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoElementCircleBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementCircleBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoElementCircleBase) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoElementCircleBase();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h_17_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoElementCircleBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
