// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMDrawContainer.h"
#include "RigVM/Public/RigVMCore/RigVMDrawInstruction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDrawContainer() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawContainer();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawInstruction();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMDrawContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDrawContainer;
class UScriptStruct* FRigVMDrawContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDrawContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDrawContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDrawContainer, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDrawContainer"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDrawContainer.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDrawContainer>()
{
	return FRigVMDrawContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instructions_MetaData[] = {
		{ "Category", "DrawContainer" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Instructions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Instructions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDrawContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewProp_Instructions_Inner = { "Instructions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMDrawInstruction, METADATA_PARAMS(0, nullptr) }; // 523164675
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewProp_Instructions = { "Instructions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMDrawContainer, Instructions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instructions_MetaData), NewProp_Instructions_MetaData) }; // 523164675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewProp_Instructions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewProp_Instructions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMDrawContainer",
	Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::PropPointers),
	sizeof(FRigVMDrawContainer),
	alignof(FRigVMDrawContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawContainer()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDrawContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDrawContainer.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMDrawContainer.InnerSingleton;
}
// End ScriptStruct FRigVMDrawContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawContainer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMDrawContainer::StaticStruct, Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewStructOps, TEXT("RigVMDrawContainer"), &Z_Registration_Info_UScriptStruct_RigVMDrawContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDrawContainer), 3941096795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawContainer_h_2550291319(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawContainer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS