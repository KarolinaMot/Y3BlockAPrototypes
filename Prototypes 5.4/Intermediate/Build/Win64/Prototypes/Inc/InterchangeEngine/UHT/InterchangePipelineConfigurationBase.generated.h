// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangePipelineConfigurationBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;
class UInterchangePipelineBase;
class UInterchangeSourceData;
class UInterchangeTranslatorBase;
class UObject;
enum class EInterchangePipelineConfigurationDialogResult : uint8;
struct FInterchangeStackInfo;
#ifdef INTERCHANGEENGINE_InterchangePipelineConfigurationBase_generated_h
#error "InterchangePipelineConfigurationBase.generated.h already included, missing '#pragma once' in InterchangePipelineConfigurationBase.h"
#endif
#define INTERCHANGEENGINE_InterchangePipelineConfigurationBase_generated_h

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<struct FInterchangeStackInfo>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execScriptedShowReimportPipelineConfigurationDialog); \
	DECLARE_FUNCTION(execScriptedShowScenePipelineConfigurationDialog); \
	DECLARE_FUNCTION(execScriptedShowPipelineConfigurationDialog);


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_37_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePipelineConfigurationBase(); \
	friend struct Z_Construct_UClass_UInterchangePipelineConfigurationBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangePipelineConfigurationBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), INTERCHANGEENGINE_API) \
	DECLARE_SERIALIZER(UInterchangePipelineConfigurationBase)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangePipelineConfigurationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangePipelineConfigurationBase(UInterchangePipelineConfigurationBase&&); \
	UInterchangePipelineConfigurationBase(const UInterchangePipelineConfigurationBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangePipelineConfigurationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePipelineConfigurationBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePipelineConfigurationBase) \
	INTERCHANGEENGINE_API virtual ~UInterchangePipelineConfigurationBase();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_34_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_37_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEENGINE_API UClass* StaticClass<class UInterchangePipelineConfigurationBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h


#define FOREACH_ENUM_EINTERCHANGEPIPELINECONFIGURATIONDIALOGRESULT(op) \
	op(EInterchangePipelineConfigurationDialogResult::Cancel) \
	op(EInterchangePipelineConfigurationDialogResult::Import) \
	op(EInterchangePipelineConfigurationDialogResult::ImportAll) 

enum class EInterchangePipelineConfigurationDialogResult : uint8;
template<> struct TIsUEnumClass<EInterchangePipelineConfigurationDialogResult> { enum { Value = true }; };
template<> INTERCHANGEENGINE_API UEnum* StaticEnum<EInterchangePipelineConfigurationDialogResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
