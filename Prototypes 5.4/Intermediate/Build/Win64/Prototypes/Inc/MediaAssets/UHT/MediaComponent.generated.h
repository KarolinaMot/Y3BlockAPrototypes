// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
class UMediaTexture;
#ifdef MEDIAASSETS_MediaComponent_generated_h
#error "MediaComponent.generated.h already included, missing '#pragma once' in MediaComponent.h"
#endif
#define MEDIAASSETS_MediaComponent_generated_h

#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMediaTexture); \
	DECLARE_FUNCTION(execGetMediaPlayer);


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaComponent(); \
	friend struct Z_Construct_UClass_UMediaComponent_Statics; \
public: \
	DECLARE_CLASS(UMediaComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaAssets"), MEDIAASSETS_API) \
	DECLARE_SERIALIZER(UMediaComponent)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMediaComponent(UMediaComponent&&); \
	UMediaComponent(const UMediaComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaComponent) \
	MEDIAASSETS_API virtual ~UMediaComponent();


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_12_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
