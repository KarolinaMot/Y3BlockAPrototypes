// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperFlipbook.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperSprite;
#ifdef PAPER2D_PaperFlipbook_generated_h
#error "PaperFlipbook.generated.h already included, missing '#pragma once' in PaperFlipbook.h"
#endif
#define PAPER2D_PaperFlipbook_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics; \
	PAPER2D_API static class UScriptStruct* StaticStruct();


template<> PAPER2D_API UScriptStruct* StaticStruct<struct FPaperFlipbookKeyFrame>();

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_54_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsValidKeyFrameIndex); \
	DECLARE_FUNCTION(execGetNumKeyFrames); \
	DECLARE_FUNCTION(execGetSpriteAtFrame); \
	DECLARE_FUNCTION(execGetSpriteAtTime); \
	DECLARE_FUNCTION(execGetKeyFrameIndexAtTime); \
	DECLARE_FUNCTION(execGetTotalDuration); \
	DECLARE_FUNCTION(execGetNumFrames);


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_54_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperFlipbook, NO_API)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUPaperFlipbook(); \
	friend struct Z_Construct_UClass_UPaperFlipbook_Statics; \
public: \
	DECLARE_CLASS(UPaperFlipbook, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperFlipbook) \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_54_ARCHIVESERIALIZER


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperFlipbook(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperFlipbook) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperFlipbook); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperFlipbook); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperFlipbook(UPaperFlipbook&&); \
	UPaperFlipbook(const UPaperFlipbook&); \
public: \
	NO_API virtual ~UPaperFlipbook();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_51_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_54_RPC_WRAPPERS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_54_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperFlipbook>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h


#define FOREACH_ENUM_EFLIPBOOKCOLLISIONMODE(op) \
	op(EFlipbookCollisionMode::NoCollision) \
	op(EFlipbookCollisionMode::FirstFrameCollision) \
	op(EFlipbookCollisionMode::EachFrameCollision) 

namespace EFlipbookCollisionMode { enum Type : int; }
template<> PAPER2D_API UEnum* StaticEnum<EFlipbookCollisionMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
