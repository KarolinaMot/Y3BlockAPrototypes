// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Light/ParticleModuleLight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLight_generated_h
#error "ParticleModuleLight.generated.h already included, missing '#pragma once' in ParticleModuleLight.h"
#endif
#define ENGINE_ParticleModuleLight_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLight(); \
	friend struct Z_Construct_UClass_UParticleModuleLight_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLight, UParticleModuleLightBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleLight)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleLight(UParticleModuleLight&&); \
	UParticleModuleLight(const UParticleModuleLight&); \
public: \
	ENGINE_API virtual ~UParticleModuleLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
