// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomPCG/Public/BlueprintRegistery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintRegistery() {}

// Begin Cross Module References
CUSTOMPCG_API UClass* Z_Construct_UClass_UBlueprintRegistery();
CUSTOMPCG_API UClass* Z_Construct_UClass_UBlueprintRegistery_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_CustomPCG();
// End Cross Module References

// Begin Class UBlueprintRegistery
void UBlueprintRegistery::StaticRegisterNativesUBlueprintRegistery()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintRegistery);
UClass* Z_Construct_UClass_UBlueprintRegistery_NoRegister()
{
	return UBlueprintRegistery::StaticClass();
}
struct Z_Construct_UClass_UBlueprintRegistery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BlueprintRegistery.h" },
		{ "ModuleRelativePath", "Public/BlueprintRegistery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintClasses_MetaData[] = {
		{ "Category", "Registry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of Blueprint class soft references\n" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintRegistery.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of Blueprint class soft references" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_BlueprintClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlueprintClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintRegistery>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UBlueprintRegistery_Statics::NewProp_BlueprintClasses_Inner = { "BlueprintClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintRegistery_Statics::NewProp_BlueprintClasses = { "BlueprintClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintRegistery, BlueprintClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintClasses_MetaData), NewProp_BlueprintClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintRegistery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintRegistery_Statics::NewProp_BlueprintClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintRegistery_Statics::NewProp_BlueprintClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintRegistery_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprintRegistery_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintRegistery_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintRegistery_Statics::ClassParams = {
	&UBlueprintRegistery::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlueprintRegistery_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintRegistery_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintRegistery_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintRegistery_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintRegistery()
{
	if (!Z_Registration_Info_UClass_UBlueprintRegistery.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintRegistery.OuterSingleton, Z_Construct_UClass_UBlueprintRegistery_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintRegistery.OuterSingleton;
}
template<> CUSTOMPCG_API UClass* StaticClass<UBlueprintRegistery>()
{
	return UBlueprintRegistery::StaticClass();
}
UBlueprintRegistery::UBlueprintRegistery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintRegistery);
UBlueprintRegistery::~UBlueprintRegistery() {}
// End Class UBlueprintRegistery

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_BlueprintRegistery_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintRegistery, UBlueprintRegistery::StaticClass, TEXT("UBlueprintRegistery"), &Z_Registration_Info_UClass_UBlueprintRegistery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintRegistery), 3962649564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_BlueprintRegistery_h_147234217(TEXT("/Script/CustomPCG"),
	Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_BlueprintRegistery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_BlueprintRegistery_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
