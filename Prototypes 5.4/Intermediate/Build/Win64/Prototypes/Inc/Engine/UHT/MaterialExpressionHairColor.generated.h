// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionHairColor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionHairColor_generated_h
#error "MaterialExpressionHairColor.generated.h already included, missing '#pragma once' in MaterialExpressionHairColor.h"
#endif
#define ENGINE_MaterialExpressionHairColor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionHairColor(); \
	friend struct Z_Construct_UClass_UMaterialExpressionHairColor_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionHairColor, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionHairColor)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionHairColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionHairColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionHairColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionHairColor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionHairColor(UMaterialExpressionHairColor&&); \
	UMaterialExpressionHairColor(const UMaterialExpressionHairColor&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionHairColor();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionHairColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
