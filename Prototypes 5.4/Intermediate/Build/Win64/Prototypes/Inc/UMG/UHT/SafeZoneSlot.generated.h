// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SafeZoneSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_SafeZoneSlot_generated_h
#error "SafeZoneSlot.generated.h already included, missing '#pragma once' in SafeZoneSlot.h"
#endif
#define UMG_SafeZoneSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_17_ACCESSORS \
static void GetbIsTitleSafe_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsTitleSafe_WrapperImpl(void* Object, const void* InValue); \
static void GetSafeAreaScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetSafeAreaScale_WrapperImpl(void* Object, const void* InValue); \
static void GetHAlign_WrapperImpl(const void* Object, void* OutValue); \
static void SetHAlign_WrapperImpl(void* Object, const void* InValue); \
static void GetVAlign_WrapperImpl(const void* Object, void* OutValue); \
static void SetVAlign_WrapperImpl(void* Object, const void* InValue); \
static void GetPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSafeZoneSlot(); \
	friend struct Z_Construct_UClass_USafeZoneSlot_Statics; \
public: \
	DECLARE_CLASS(USafeZoneSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(USafeZoneSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USafeZoneSlot(USafeZoneSlot&&); \
	USafeZoneSlot(const USafeZoneSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, USafeZoneSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USafeZoneSlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USafeZoneSlot) \
	UMG_API virtual ~USafeZoneSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_14_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USafeZoneSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS