// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Slate/SlateTextureAtlasInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SlateTextureAtlasInterface_generated_h
#error "SlateTextureAtlasInterface.generated.h already included, missing '#pragma once' in SlateTextureAtlasInterface.h"
#endif
#define ENGINE_SlateTextureAtlasInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USlateTextureAtlasInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateTextureAtlasInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USlateTextureAtlasInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateTextureAtlasInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USlateTextureAtlasInterface(USlateTextureAtlasInterface&&); \
	USlateTextureAtlasInterface(const USlateTextureAtlasInterface&); \
public: \
	ENGINE_API virtual ~USlateTextureAtlasInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSlateTextureAtlasInterface(); \
	friend struct Z_Construct_UClass_USlateTextureAtlasInterface_Statics; \
public: \
	DECLARE_CLASS(USlateTextureAtlasInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USlateTextureAtlasInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_INCLASS_IINTERFACE \
protected: \
	virtual ~ISlateTextureAtlasInterface() {} \
public: \
	typedef USlateTextureAtlasInterface UClassType; \
	typedef ISlateTextureAtlasInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_54_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_57_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USlateTextureAtlasInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS