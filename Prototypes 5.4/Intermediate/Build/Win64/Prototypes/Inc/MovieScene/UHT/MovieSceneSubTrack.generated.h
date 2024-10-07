// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneSubTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSubTrack_generated_h
#error "MovieSceneSubTrack.generated.h already included, missing '#pragma once' in MovieSceneSubTrack.h"
#endif
#define MOVIESCENE_MovieSceneSubTrack_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSubTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneSubTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSubTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSubTrack)


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneSubTrack(UMovieSceneSubTrack&&); \
	UMovieSceneSubTrack(const UMovieSceneSubTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSubTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSubTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSubTrack) \
	MOVIESCENE_API virtual ~UMovieSceneSubTrack();


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_28_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSubTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
