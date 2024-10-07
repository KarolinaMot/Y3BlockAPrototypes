// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/CameraBlockingVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CameraBlockingVolume_generated_h
#error "CameraBlockingVolume.generated.h already included, missing '#pragma once' in CameraBlockingVolume.h"
#endif
#define ENGINE_CameraBlockingVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACameraBlockingVolume(); \
	friend struct Z_Construct_UClass_ACameraBlockingVolume_Statics; \
public: \
	DECLARE_CLASS(ACameraBlockingVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ACameraBlockingVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ACameraBlockingVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraBlockingVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ACameraBlockingVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraBlockingVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACameraBlockingVolume(ACameraBlockingVolume&&); \
	ACameraBlockingVolume(const ACameraBlockingVolume&); \
public: \
	ENGINE_API virtual ~ACameraBlockingVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ACameraBlockingVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS