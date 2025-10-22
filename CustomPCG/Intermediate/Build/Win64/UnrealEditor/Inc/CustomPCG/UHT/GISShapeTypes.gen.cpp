// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomPCG/Public/GISShapeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGISShapeTypes() {}

// Begin Cross Module References
CUSTOMPCG_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonRing();
CUSTOMPCG_API UScriptStruct* Z_Construct_UScriptStruct_FShapeAttribute();
CUSTOMPCG_API UScriptStruct* Z_Construct_UScriptStruct_FShapeFeature();
CUSTOMPCG_API UScriptStruct* Z_Construct_UScriptStruct_FShapeFeatureGroup();
UPackage* Z_Construct_UPackage__Script_CustomPCG();
// End Cross Module References

// Begin ScriptStruct FPolygonRing
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolygonRing;
class UScriptStruct* FPolygonRing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolygonRing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolygonRing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygonRing, (UObject*)Z_Construct_UPackage__Script_CustomPCG(), TEXT("PolygonRing"));
	}
	return Z_Registration_Info_UScriptStruct_PolygonRing.OuterSingleton;
}
template<> CUSTOMPCG_API UScriptStruct* StaticStruct<FPolygonRing>()
{
	return FPolygonRing::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPolygonRing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GISShapeTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygonRing>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygonRing_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
	nullptr,
	&NewStructOps,
	"PolygonRing",
	nullptr,
	0,
	sizeof(FPolygonRing),
	alignof(FPolygonRing),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonRing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPolygonRing_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPolygonRing()
{
	if (!Z_Registration_Info_UScriptStruct_PolygonRing.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PolygonRing.InnerSingleton, Z_Construct_UScriptStruct_FPolygonRing_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PolygonRing.InnerSingleton;
}
// End ScriptStruct FPolygonRing

// Begin ScriptStruct FShapeAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShapeAttribute;
class UScriptStruct* FShapeAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShapeAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShapeAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapeAttribute, (UObject*)Z_Construct_UPackage__Script_CustomPCG(), TEXT("ShapeAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_ShapeAttribute.OuterSingleton;
}
template<> CUSTOMPCG_API UScriptStruct* StaticStruct<FShapeAttribute>()
{
	return FShapeAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShapeAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GISShapeTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapeAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShapeAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
	nullptr,
	&NewStructOps,
	"ShapeAttribute",
	nullptr,
	0,
	sizeof(FShapeAttribute),
	alignof(FShapeAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShapeAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShapeAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_ShapeAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShapeAttribute.InnerSingleton, Z_Construct_UScriptStruct_FShapeAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShapeAttribute.InnerSingleton;
}
// End ScriptStruct FShapeAttribute

// Begin ScriptStruct FShapeFeature
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShapeFeature;
class UScriptStruct* FShapeFeature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShapeFeature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShapeFeature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapeFeature, (UObject*)Z_Construct_UPackage__Script_CustomPCG(), TEXT("ShapeFeature"));
	}
	return Z_Registration_Info_UScriptStruct_ShapeFeature.OuterSingleton;
}
template<> CUSTOMPCG_API UScriptStruct* StaticStruct<FShapeFeature>()
{
	return FShapeFeature::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShapeFeature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GISShapeTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapeFeature>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShapeFeature_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
	nullptr,
	&NewStructOps,
	"ShapeFeature",
	nullptr,
	0,
	sizeof(FShapeFeature),
	alignof(FShapeFeature),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeFeature_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShapeFeature_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShapeFeature()
{
	if (!Z_Registration_Info_UScriptStruct_ShapeFeature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShapeFeature.InnerSingleton, Z_Construct_UScriptStruct_FShapeFeature_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShapeFeature.InnerSingleton;
}
// End ScriptStruct FShapeFeature

// Begin ScriptStruct FShapeFeatureGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShapeFeatureGroup;
class UScriptStruct* FShapeFeatureGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShapeFeatureGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShapeFeatureGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapeFeatureGroup, (UObject*)Z_Construct_UPackage__Script_CustomPCG(), TEXT("ShapeFeatureGroup"));
	}
	return Z_Registration_Info_UScriptStruct_ShapeFeatureGroup.OuterSingleton;
}
template<> CUSTOMPCG_API UScriptStruct* StaticStruct<FShapeFeatureGroup>()
{
	return FShapeFeatureGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShapeFeatureGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GISShapeTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapeFeatureGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShapeFeatureGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
	nullptr,
	&NewStructOps,
	"ShapeFeatureGroup",
	nullptr,
	0,
	sizeof(FShapeFeatureGroup),
	alignof(FShapeFeatureGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeFeatureGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShapeFeatureGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShapeFeatureGroup()
{
	if (!Z_Registration_Info_UScriptStruct_ShapeFeatureGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShapeFeatureGroup.InnerSingleton, Z_Construct_UScriptStruct_FShapeFeatureGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShapeFeatureGroup.InnerSingleton;
}
// End ScriptStruct FShapeFeatureGroup

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_GISShapeTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPolygonRing::StaticStruct, Z_Construct_UScriptStruct_FPolygonRing_Statics::NewStructOps, TEXT("PolygonRing"), &Z_Registration_Info_UScriptStruct_PolygonRing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolygonRing), 4105837474U) },
		{ FShapeAttribute::StaticStruct, Z_Construct_UScriptStruct_FShapeAttribute_Statics::NewStructOps, TEXT("ShapeAttribute"), &Z_Registration_Info_UScriptStruct_ShapeAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShapeAttribute), 215986867U) },
		{ FShapeFeature::StaticStruct, Z_Construct_UScriptStruct_FShapeFeature_Statics::NewStructOps, TEXT("ShapeFeature"), &Z_Registration_Info_UScriptStruct_ShapeFeature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShapeFeature), 1919893231U) },
		{ FShapeFeatureGroup::StaticStruct, Z_Construct_UScriptStruct_FShapeFeatureGroup_Statics::NewStructOps, TEXT("ShapeFeatureGroup"), &Z_Registration_Info_UScriptStruct_ShapeFeatureGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShapeFeatureGroup), 1271702859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_GISShapeTypes_h_2940700388(TEXT("/Script/CustomPCG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_GISShapeTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_GISShapeTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
