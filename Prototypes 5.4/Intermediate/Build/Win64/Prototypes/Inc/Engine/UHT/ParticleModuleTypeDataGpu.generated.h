// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/TypeData/ParticleModuleTypeDataGpu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleTypeDataGpu_generated_h
#error "ParticleModuleTypeDataGpu.generated.h already included, missing '#pragma once' in ParticleModuleTypeDataGpu.h"
#endif
#define ENGINE_ParticleModuleTypeDataGpu_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGPUSpriteLocalVectorFieldInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGPUSpriteEmitterInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_252_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGPUSpriteResourceData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_459_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleTypeDataGpu(); \
	friend struct Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleTypeDataGpu, UParticleModuleTypeDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleTypeDataGpu)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_459_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTypeDataGpu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTypeDataGpu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTypeDataGpu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTypeDataGpu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleTypeDataGpu(UParticleModuleTypeDataGpu&&); \
	UParticleModuleTypeDataGpu(const UParticleModuleTypeDataGpu&); \
public: \
	ENGINE_API virtual ~UParticleModuleTypeDataGpu();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_456_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_459_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_459_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_459_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleTypeDataGpu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS