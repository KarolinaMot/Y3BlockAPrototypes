// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Orientation/ParticleModuleOrientationBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleOrientationBase_generated_h
#error "ParticleModuleOrientationBase.generated.h already included, missing '#pragma once' in ParticleModuleOrientationBase.h"
#endif
#define ENGINE_ParticleModuleOrientationBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleOrientationBase(); \
	friend struct Z_Construct_UClass_UParticleModuleOrientationBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleOrientationBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleOrientationBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleOrientationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleOrientationBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleOrientationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleOrientationBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleOrientationBase(UParticleModuleOrientationBase&&); \
	UParticleModuleOrientationBase(const UParticleModuleOrientationBase&); \
public: \
	NO_API virtual ~UParticleModuleOrientationBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleOrientationBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS