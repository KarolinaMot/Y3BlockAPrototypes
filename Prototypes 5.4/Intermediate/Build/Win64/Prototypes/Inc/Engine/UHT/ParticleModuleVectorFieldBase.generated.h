// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/VectorField/ParticleModuleVectorFieldBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleVectorFieldBase_generated_h
#error "ParticleModuleVectorFieldBase.generated.h already included, missing '#pragma once' in ParticleModuleVectorFieldBase.h"
#endif
#define ENGINE_ParticleModuleVectorFieldBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleVectorFieldBase(); \
	friend struct Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleVectorFieldBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleVectorFieldBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleVectorFieldBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleVectorFieldBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleVectorFieldBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleVectorFieldBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleVectorFieldBase(UParticleModuleVectorFieldBase&&); \
	UParticleModuleVectorFieldBase(const UParticleModuleVectorFieldBase&); \
public: \
	NO_API virtual ~UParticleModuleVectorFieldBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleVectorFieldBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
