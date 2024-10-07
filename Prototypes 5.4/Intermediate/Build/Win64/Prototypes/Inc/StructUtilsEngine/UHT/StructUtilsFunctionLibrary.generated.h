// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StructUtilsFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UScriptStruct;
enum class EStructUtilsResult : uint8;
struct FInstancedStruct;
#ifdef STRUCTUTILSENGINE_StructUtilsFunctionLibrary_generated_h
#error "StructUtilsFunctionLibrary.generated.h already included, missing '#pragma once' in StructUtilsFunctionLibrary.h"
#endif
#define STRUCTUTILSENGINE_StructUtilsFunctionLibrary_generated_h

#define FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEngine_Public_StructUtilsFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValid_InstancedStruct); \
	DECLARE_FUNCTION(execNotEqual_InstancedStruct); \
	DECLARE_FUNCTION(execEqualEqual_InstancedStruct); \
	DECLARE_FUNCTION(execIsInstancedStructValid); \
	DECLARE_FUNCTION(execReset);


#define FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEngine_Public_StructUtilsFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStructUtilsFunctionLibrary(); \
	friend struct Z_Construct_UClass_UStructUtilsFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UStructUtilsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StructUtilsEngine"), NO_API) \
	DECLARE_SERIALIZER(UStructUtilsFunctionLibrary)


#define FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEngine_Public_StructUtilsFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStructUtilsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStructUtilsFunctionLibrary(UStructUtilsFunctionLibrary&&); \
	UStructUtilsFunctionLibrary(const UStructUtilsFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStructUtilsFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructUtilsFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructUtilsFunctionLibrary) \
	NO_API virtual ~UStructUtilsFunctionLibrary();


#define FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEngine_Public_StructUtilsFunctionLibrary_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEngine_Public_StructUtilsFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEngine_Public_StructUtilsFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEngine_Public_StructUtilsFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEngine_Public_StructUtilsFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRUCTUTILSENGINE_API UClass* StaticClass<class UStructUtilsFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEngine_Public_StructUtilsFunctionLibrary_h


#define FOREACH_ENUM_ESTRUCTUTILSRESULT(op) \
	op(EStructUtilsResult::Valid) \
	op(EStructUtilsResult::NotValid) 

enum class EStructUtilsResult : uint8;
template<> struct TIsUEnumClass<EStructUtilsResult> { enum { Value = true }; };
template<> STRUCTUTILSENGINE_API UEnum* StaticEnum<EStructUtilsResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS