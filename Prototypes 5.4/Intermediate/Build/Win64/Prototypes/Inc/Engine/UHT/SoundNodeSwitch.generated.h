// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeSwitch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeSwitch_generated_h
#error "SoundNodeSwitch.generated.h already included, missing '#pragma once' in SoundNodeSwitch.h"
#endif
#define ENGINE_SoundNodeSwitch_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeSwitch(); \
	friend struct Z_Construct_UClass_USoundNodeSwitch_Statics; \
public: \
	DECLARE_CLASS(USoundNodeSwitch, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeSwitch)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeSwitch(USoundNodeSwitch&&); \
	USoundNodeSwitch(const USoundNodeSwitch&); \
public: \
	ENGINE_API virtual ~USoundNodeSwitch();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
