// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/SMInstance/SMInstanceElementAssetDataInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SMInstanceElementAssetDataInterface_generated_h
#error "SMInstanceElementAssetDataInterface.generated.h already included, missing '#pragma once' in SMInstanceElementAssetDataInterface.h"
#endif
#define ENGINE_SMInstanceElementAssetDataInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMInstanceElementAssetDataInterface(); \
	friend struct Z_Construct_UClass_USMInstanceElementAssetDataInterface_Statics; \
public: \
	DECLARE_CLASS(USMInstanceElementAssetDataInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USMInstanceElementAssetDataInterface) \
	virtual UObject* _getUObject() const override { return const_cast<USMInstanceElementAssetDataInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USMInstanceElementAssetDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USMInstanceElementAssetDataInterface(USMInstanceElementAssetDataInterface&&); \
	USMInstanceElementAssetDataInterface(const USMInstanceElementAssetDataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USMInstanceElementAssetDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceElementAssetDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceElementAssetDataInterface) \
	ENGINE_API virtual ~USMInstanceElementAssetDataInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USMInstanceElementAssetDataInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementAssetDataInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
