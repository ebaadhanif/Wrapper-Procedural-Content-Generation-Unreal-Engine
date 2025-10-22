// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomPCG/Public/PCGPolygonActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPolygonActor() {}

// Begin Cross Module References
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGPolygonActor();
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGPolygonActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CustomPCG();
// End Cross Module References

// Begin Class APCGPolygonActor
void APCGPolygonActor::StaticRegisterNativesAPCGPolygonActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCGPolygonActor);
UClass* Z_Construct_UClass_APCGPolygonActor_NoRegister()
{
	return APCGPolygonActor::StaticClass();
}
struct Z_Construct_UClass_APCGPolygonActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGPolygonActor.h" },
		{ "ModuleRelativePath", "Public/PCGPolygonActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "Category", "CustomPCG|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCGPolygonActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCGComponent_MetaData[] = {
		{ "Category", "CustomPCG|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCGPolygonActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteriorSampleSpacing_MetaData[] = {
		{ "Category", "CustomPCG|Sampling" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PCGPolygonActor.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteriorBorderSpacing_MetaData[] = {
		{ "Category", "CustomPCG|Sampling" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PCGPolygonActor.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "CustomPCG|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCGPolygonActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PCGComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorSampleSpacing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorBorderSpacing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCGPolygonActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPolygonActor_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPolygonActor, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPolygonActor_Statics::NewProp_PCGComponent = { "PCGComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPolygonActor, PCGComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCGComponent_MetaData), NewProp_PCGComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APCGPolygonActor_Statics::NewProp_InteriorSampleSpacing = { "InteriorSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPolygonActor, InteriorSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteriorSampleSpacing_MetaData), NewProp_InteriorSampleSpacing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APCGPolygonActor_Statics::NewProp_InteriorBorderSpacing = { "InteriorBorderSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPolygonActor, InteriorBorderSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteriorBorderSpacing_MetaData), NewProp_InteriorBorderSpacing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPolygonActor_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPolygonActor, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCGPolygonActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPolygonActor_Statics::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPolygonActor_Statics::NewProp_PCGComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPolygonActor_Statics::NewProp_InteriorSampleSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPolygonActor_Statics::NewProp_InteriorBorderSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPolygonActor_Statics::NewProp_BoxCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCGPolygonActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APCGPolygonActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCGPolygonActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APCGPolygonActor_Statics::ClassParams = {
	&APCGPolygonActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APCGPolygonActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APCGPolygonActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCGPolygonActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APCGPolygonActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APCGPolygonActor()
{
	if (!Z_Registration_Info_UClass_APCGPolygonActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCGPolygonActor.OuterSingleton, Z_Construct_UClass_APCGPolygonActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APCGPolygonActor.OuterSingleton;
}
template<> CUSTOMPCG_API UClass* StaticClass<APCGPolygonActor>()
{
	return APCGPolygonActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APCGPolygonActor);
APCGPolygonActor::~APCGPolygonActor() {}
// End Class APCGPolygonActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APCGPolygonActor, APCGPolygonActor::StaticClass, TEXT("APCGPolygonActor"), &Z_Registration_Info_UClass_APCGPolygonActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCGPolygonActor), 3921268715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonActor_h_1980646159(TEXT("/Script/CustomPCG"),
	Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
