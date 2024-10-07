// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/AudioMixerSubmixEffectReverb.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UReverbEffect;
struct FSubmixEffectReverbSettings;
#ifdef AUDIOMIXER_AudioMixerSubmixEffectReverb_generated_h
#error "AudioMixerSubmixEffectReverb.generated.h already included, missing '#pragma once' in AudioMixerSubmixEffectReverb.h"
#endif
#define AUDIOMIXER_AudioMixerSubmixEffectReverb_generated_h

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics; \
	AUDIOMIXER_API static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FSubmixEffectReverbSettings>();

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettingsWithReverbEffect); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectReverbPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectReverbPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectReverbPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), AUDIOMIXER_API) \
	DECLARE_SERIALIZER(USubmixEffectReverbPreset)


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMIXER_API USubmixEffectReverbPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USubmixEffectReverbPreset(USubmixEffectReverbPreset&&); \
	USubmixEffectReverbPreset(const USubmixEffectReverbPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMIXER_API, USubmixEffectReverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectReverbPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectReverbPreset) \
	AUDIOMIXER_API virtual ~USubmixEffectReverbPreset();


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_170_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_173_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USubmixEffectReverbPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS