// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioAnalyzerAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOANALYZER_AudioAnalyzerAsset_generated_h
#error "AudioAnalyzerAsset.generated.h already included, missing '#pragma once' in AudioAnalyzerAsset.h"
#endif
#define AUDIOANALYZER_AudioAnalyzerAsset_generated_h

#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerAssetBase(); \
	friend struct Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics; \
public: \
	DECLARE_CLASS(UAudioAnalyzerAssetBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioAnalyzer"), AUDIOANALYZER_API) \
	DECLARE_SERIALIZER(UAudioAnalyzerAssetBase)


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOANALYZER_API UAudioAnalyzerAssetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioAnalyzerAssetBase(UAudioAnalyzerAssetBase&&); \
	UAudioAnalyzerAssetBase(const UAudioAnalyzerAssetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOANALYZER_API, UAudioAnalyzerAssetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerAssetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzerAssetBase) \
	AUDIOANALYZER_API virtual ~UAudioAnalyzerAssetBase();


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_16_PROLOG
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOANALYZER_API UClass* StaticClass<class UAudioAnalyzerAssetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
