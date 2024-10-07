// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextObjectStore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_ContextObjectStore_generated_h
#error "ContextObjectStore.generated.h already included, missing '#pragma once' in ContextObjectStore.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_ContextObjectStore_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextObjectStore(); \
	friend struct Z_Construct_UClass_UContextObjectStore_Statics; \
public: \
	DECLARE_CLASS(UContextObjectStore, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UContextObjectStore)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UContextObjectStore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContextObjectStore(UContextObjectStore&&); \
	UContextObjectStore(const UContextObjectStore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UContextObjectStore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextObjectStore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextObjectStore) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UContextObjectStore();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h_23_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UContextObjectStore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ContextObjectStore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS