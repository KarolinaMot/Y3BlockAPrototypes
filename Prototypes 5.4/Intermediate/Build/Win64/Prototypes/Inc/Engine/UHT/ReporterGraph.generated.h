// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Debug/ReporterGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReporterGraph_generated_h
#error "ReporterGraph.generated.h already included, missing '#pragma once' in ReporterGraph.h"
#endif
#define ENGINE_ReporterGraph_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUReporterGraph(); \
	friend struct Z_Construct_UClass_UReporterGraph_Statics; \
public: \
	DECLARE_CLASS(UReporterGraph, UReporterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UReporterGraph)


#define FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReporterGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReporterGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReporterGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReporterGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReporterGraph(UReporterGraph&&); \
	UReporterGraph(const UReporterGraph&); \
public: \
	ENGINE_API virtual ~UReporterGraph();


#define FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_102_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReporterGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h


#define FOREACH_ENUM_EGRAPHAXISSTYLE(op) \
	op(EGraphAxisStyle::Lines) \
	op(EGraphAxisStyle::Notches) \
	op(EGraphAxisStyle::Grid) 

namespace EGraphAxisStyle { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EGraphAxisStyle::Type>();

#define FOREACH_ENUM_EGRAPHDATASTYLE(op) \
	op(EGraphDataStyle::Lines) \
	op(EGraphDataStyle::Filled) 

namespace EGraphDataStyle { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EGraphDataStyle::Type>();

#define FOREACH_ENUM_ELEGENDPOSITION(op) \
	op(ELegendPosition::Outside) \
	op(ELegendPosition::Inside) 

namespace ELegendPosition { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ELegendPosition::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
