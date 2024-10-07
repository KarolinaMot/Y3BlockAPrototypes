// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototypes/CustomPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPass() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROTOTYPES_API UClass* Z_Construct_UClass_ACustomPass();
PROTOTYPES_API UClass* Z_Construct_UClass_ACustomPass_NoRegister();
UPackage* Z_Construct_UPackage__Script_Prototypes();
// End Cross Module References

// Begin Class ACustomPass
void ACustomPass::StaticRegisterNativesACustomPass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomPass);
UClass* Z_Construct_UClass_ACustomPass_NoRegister()
{
	return ACustomPass::StaticClass();
}
struct Z_Construct_UClass_ACustomPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CustomPass.h" },
		{ "ModuleRelativePath", "CustomPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassColor_MetaData[] = {
		{ "Category", "CustomPass" },
		{ "ModuleRelativePath", "CustomPass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PassColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACustomPass_Statics::NewProp_PassColor = { "PassColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPass, PassColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassColor_MetaData), NewProp_PassColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPass_Statics::NewProp_PassColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACustomPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Prototypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomPass_Statics::ClassParams = {
	&ACustomPass::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACustomPass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPass_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPass_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomPass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACustomPass()
{
	if (!Z_Registration_Info_UClass_ACustomPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomPass.OuterSingleton, Z_Construct_UClass_ACustomPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustomPass.OuterSingleton;
}
template<> PROTOTYPES_API UClass* StaticClass<ACustomPass>()
{
	return ACustomPass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomPass);
ACustomPass::~ACustomPass() {}
// End Class ACustomPass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Univertsity_Y3A_Prototype_Prototypes_5_4_Source_Prototypes_CustomPass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustomPass, ACustomPass::StaticClass, TEXT("ACustomPass"), &Z_Registration_Info_UClass_ACustomPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomPass), 1445189373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Univertsity_Y3A_Prototype_Prototypes_5_4_Source_Prototypes_CustomPass_h_1607117446(TEXT("/Script/Prototypes"),
	Z_CompiledInDeferFile_FID_Univertsity_Y3A_Prototype_Prototypes_5_4_Source_Prototypes_CustomPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Univertsity_Y3A_Prototype_Prototypes_5_4_Source_Prototypes_CustomPass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
