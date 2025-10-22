// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomPCG/Public/PCGCesiumHeightAdjusterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCesiumHeightAdjusterSettings() {}

// Begin Cross Module References
CUSTOMPCG_API UClass* Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings();
CUSTOMPCG_API UClass* Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
UPackage* Z_Construct_UPackage__Script_CustomPCG();
// End Cross Module References

// Begin Class UPCGCesiumHeightAdjusterSettings
void UPCGCesiumHeightAdjusterSettings::StaticRegisterNativesUPCGCesiumHeightAdjusterSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCesiumHeightAdjusterSettings);
UClass* Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_NoRegister()
{
	return UPCGCesiumHeightAdjusterSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PCGCesiumHeightAdjusterSettings.h" },
		{ "ModuleRelativePath", "Public/PCGCesiumHeightAdjusterSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeightTrace_MetaData[] = {
		{ "Category", "Cesium PCG" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum and Minimum heights to perform the trace **/" },
#endif
		{ "ModuleRelativePath", "Public/PCGCesiumHeightAdjusterSettings.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum and Minimum heights to perform the trace *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHeightTrace_MetaData[] = {
		{ "Category", "Cesium PCG" },
		{ "ModuleRelativePath", "Public/PCGCesiumHeightAdjusterSettings.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeightTrace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeightTrace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCesiumHeightAdjusterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::NewProp_MaxHeightTrace = { "MaxHeightTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCesiumHeightAdjusterSettings, MaxHeightTrace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeightTrace_MetaData), NewProp_MaxHeightTrace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::NewProp_MinHeightTrace = { "MinHeightTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCesiumHeightAdjusterSettings, MinHeightTrace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHeightTrace_MetaData), NewProp_MinHeightTrace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::NewProp_MaxHeightTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::NewProp_MinHeightTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::ClassParams = {
	&UPCGCesiumHeightAdjusterSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings()
{
	if (!Z_Registration_Info_UClass_UPCGCesiumHeightAdjusterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCesiumHeightAdjusterSettings.OuterSingleton, Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGCesiumHeightAdjusterSettings.OuterSingleton;
}
template<> CUSTOMPCG_API UClass* StaticClass<UPCGCesiumHeightAdjusterSettings>()
{
	return UPCGCesiumHeightAdjusterSettings::StaticClass();
}
UPCGCesiumHeightAdjusterSettings::UPCGCesiumHeightAdjusterSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCesiumHeightAdjusterSettings);
UPCGCesiumHeightAdjusterSettings::~UPCGCesiumHeightAdjusterSettings() {}
// End Class UPCGCesiumHeightAdjusterSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGCesiumHeightAdjusterSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCesiumHeightAdjusterSettings, UPCGCesiumHeightAdjusterSettings::StaticClass, TEXT("UPCGCesiumHeightAdjusterSettings"), &Z_Registration_Info_UClass_UPCGCesiumHeightAdjusterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCesiumHeightAdjusterSettings), 584966583U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGCesiumHeightAdjusterSettings_h_3457203946(TEXT("/Script/CustomPCG"),
	Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGCesiumHeightAdjusterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGCesiumHeightAdjusterSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
