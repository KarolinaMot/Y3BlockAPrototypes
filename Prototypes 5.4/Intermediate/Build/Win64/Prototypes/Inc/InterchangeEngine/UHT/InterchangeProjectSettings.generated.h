// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEENGINE_InterchangeProjectSettings_generated_h
#error "InterchangeProjectSettings.generated.h already included, missing '#pragma once' in InterchangeProjectSettings.h"
#endif
#define INTERCHANGEENGINE_InterchangeProjectSettings_generated_h

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<struct FInterchangeTranslatorPipelines>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<struct FInterchangePipelineStack>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<struct FInterchangeImportSettings>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<struct FInterchangePerTranslatorDialogOverride>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<struct FInterchangeDialogOverride>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FInterchangeImportSettings Super;


template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<struct FInterchangeContentImportSettings>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeProjectSettings(); \
	friend struct Z_Construct_UClass_UInterchangeProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UInterchangeProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), INTERCHANGEENGINE_API) \
	DECLARE_SERIALIZER(UInterchangeProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangeProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeProjectSettings(UInterchangeProjectSettings&&); \
	UInterchangeProjectSettings(const UInterchangeProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeProjectSettings) \
	INTERCHANGEENGINE_API virtual ~UInterchangeProjectSettings();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_102_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_105_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEENGINE_API UClass* StaticClass<class UInterchangeProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS