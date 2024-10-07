// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneBindingOwnerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBindingOwnerInterface_generated_h
#error "MovieSceneBindingOwnerInterface.generated.h already included, missing '#pragma once' in MovieSceneBindingOwnerInterface.h"
#endif
#define MOVIESCENE_MovieSceneBindingOwnerInterface_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneBindingOwnerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneBindingOwnerInterface(UMovieSceneBindingOwnerInterface&&); \
	UMovieSceneBindingOwnerInterface(const UMovieSceneBindingOwnerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBindingOwnerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingOwnerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingOwnerInterface) \
	MOVIESCENE_API virtual ~UMovieSceneBindingOwnerInterface();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneBindingOwnerInterface(); \
	friend struct Z_Construct_UClass_UMovieSceneBindingOwnerInterface_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBindingOwnerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneBindingOwnerInterface)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneBindingOwnerInterface() {} \
public: \
	typedef UMovieSceneBindingOwnerInterface UClassType; \
	typedef IMovieSceneBindingOwnerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_18_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBindingOwnerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
