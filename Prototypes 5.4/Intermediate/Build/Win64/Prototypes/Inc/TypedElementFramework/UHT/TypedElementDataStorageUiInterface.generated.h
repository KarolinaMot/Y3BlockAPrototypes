// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementDataStorageUiInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPEDELEMENTFRAMEWORK_TypedElementDataStorageUiInterface_generated_h
#error "TypedElementDataStorageUiInterface.generated.h already included, missing '#pragma once' in TypedElementDataStorageUiInterface.h"
#endif
#define TYPEDELEMENTFRAMEWORK_TypedElementDataStorageUiInterface_generated_h

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FTypedElementWidgetConstructor>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTFRAMEWORK_API UTypedElementDataStorageUiInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTypedElementDataStorageUiInterface(UTypedElementDataStorageUiInterface&&); \
	UTypedElementDataStorageUiInterface(const UTypedElementDataStorageUiInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTFRAMEWORK_API, UTypedElementDataStorageUiInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementDataStorageUiInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementDataStorageUiInterface) \
	TYPEDELEMENTFRAMEWORK_API virtual ~UTypedElementDataStorageUiInterface();


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_108_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTypedElementDataStorageUiInterface(); \
	friend struct Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics; \
public: \
	DECLARE_CLASS(UTypedElementDataStorageUiInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), TYPEDELEMENTFRAMEWORK_API) \
	DECLARE_SERIALIZER(UTypedElementDataStorageUiInterface)


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_108_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_108_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_108_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_108_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITypedElementDataStorageUiInterface() {} \
public: \
	typedef UTypedElementDataStorageUiInterface UClassType; \
	typedef ITypedElementDataStorageUiInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_105_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_108_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<class UTypedElementDataStorageUiInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS