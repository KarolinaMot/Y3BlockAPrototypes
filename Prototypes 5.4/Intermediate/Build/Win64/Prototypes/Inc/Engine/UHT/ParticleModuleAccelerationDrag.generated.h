// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Acceleration/ParticleModuleAccelerationDrag.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleAccelerationDrag_generated_h
#error "ParticleModuleAccelerationDrag.generated.h already included, missing '#pragma once' in ParticleModuleAccelerationDrag.h"
#endif
#define ENGINE_ParticleModuleAccelerationDrag_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleAccelerationDrag(); \
	friend struct Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleAccelerationDrag, UParticleModuleAccelerationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleAccelerationDrag)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleAccelerationDrag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAccelerationDrag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleAccelerationDrag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAccelerationDrag); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleAccelerationDrag(UParticleModuleAccelerationDrag&&); \
	UParticleModuleAccelerationDrag(const UParticleModuleAccelerationDrag&); \
public: \
	ENGINE_API virtual ~UParticleModuleAccelerationDrag();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleAccelerationDrag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
