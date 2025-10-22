// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomPCG/Public/PCGPointContent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPointContent() {}

// Begin Cross Module References
CESIUMRUNTIME_API UClass* Z_Construct_UClass_ACesium3DTileset_NoRegister();
CESIUMRUNTIME_API UClass* Z_Construct_UClass_ACesiumGeoreference_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGContent();
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGPointContent();
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGPointContent_NoRegister();
CUSTOMPCG_API UClass* Z_Construct_UClass_UBlueprintRegistery_NoRegister();
CUSTOMPCG_API UScriptStruct* Z_Construct_UScriptStruct_FVegetationPointData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_CustomPCG();
// End Cross Module References

// Begin ScriptStruct FVegetationPointData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VegetationPointData;
class UScriptStruct* FVegetationPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VegetationPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VegetationPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVegetationPointData, (UObject*)Z_Construct_UPackage__Script_CustomPCG(), TEXT("VegetationPointData"));
	}
	return Z_Registration_Info_UScriptStruct_VegetationPointData.OuterSingleton;
}
template<> CUSTOMPCG_API UScriptStruct* StaticStruct<FVegetationPointData>()
{
	return FVegetationPointData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVegetationPointData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- STRUCT 1: For vegetation_elev.shp ---\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- STRUCT 1: For vegetation_elev.shp ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Category groups pins on Make/Break struct nodes and satisfies the Engine-module rule.\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Category groups pins on Make/Break struct nodes and satisfies the Engine-module rule." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lat_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Long_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Elev_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Altitude_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KindID_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KindDesc_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DomainID_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DomainDesc_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryID_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryDes_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryID_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryDe_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubCategID_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubCategDe_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificID_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificDe_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityEnum_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Category", "CustomPCG|PointData" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Long;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Elev;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStrPropertyParams NewProp_State;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Altitude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KindID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_KindDesc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DomainID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DomainDesc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountryID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CountryDes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryDe;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubCategID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SubCategDe;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpecificID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpecificDe;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntityEnum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVegetationPointData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Lat = { "Lat", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, Lat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lat_MetaData), NewProp_Lat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Long = { "Long", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, Long), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Long_MetaData), NewProp_Long_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Elev = { "Elev", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, Elev), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Elev_MetaData), NewProp_Elev_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, Code), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Code_MetaData), NewProp_Code_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, Model), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, State), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Altitude = { "Altitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, Altitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Altitude_MetaData), NewProp_Altitude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_KindID = { "KindID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, KindID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KindID_MetaData), NewProp_KindID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_KindDesc = { "KindDesc", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, KindDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KindDesc_MetaData), NewProp_KindDesc_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_DomainID = { "DomainID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, DomainID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DomainID_MetaData), NewProp_DomainID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_DomainDesc = { "DomainDesc", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, DomainDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DomainDesc_MetaData), NewProp_DomainDesc_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_CountryID = { "CountryID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, CountryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryID_MetaData), NewProp_CountryID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_CountryDes = { "CountryDes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, CountryDes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryDes_MetaData), NewProp_CountryDes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_CategoryID = { "CategoryID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, CategoryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryID_MetaData), NewProp_CategoryID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_CategoryDe = { "CategoryDe", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, CategoryDe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryDe_MetaData), NewProp_CategoryDe_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_SubCategID = { "SubCategID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, SubCategID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubCategID_MetaData), NewProp_SubCategID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_SubCategDe = { "SubCategDe", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, SubCategDe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubCategDe_MetaData), NewProp_SubCategDe_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_SpecificID = { "SpecificID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, SpecificID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificID_MetaData), NewProp_SpecificID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_SpecificDe = { "SpecificDe", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, SpecificDe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificDe_MetaData), NewProp_SpecificDe_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_EntityEnum = { "EntityEnum", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, EntityEnum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityEnum_MetaData), NewProp_EntityEnum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVegetationPointData, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVegetationPointData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Lat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Long,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Elev,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Code,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Altitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_KindID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_KindDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_DomainID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_DomainDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_CountryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_CountryDes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_CategoryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_CategoryDe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_SubCategID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_SubCategDe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_SpecificID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_SpecificDe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_EntityEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewProp_FileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetationPointData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVegetationPointData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
	nullptr,
	&NewStructOps,
	"VegetationPointData",
	Z_Construct_UScriptStruct_FVegetationPointData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetationPointData_Statics::PropPointers),
	sizeof(FVegetationPointData),
	alignof(FVegetationPointData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetationPointData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVegetationPointData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVegetationPointData()
{
	if (!Z_Registration_Info_UScriptStruct_VegetationPointData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VegetationPointData.InnerSingleton, Z_Construct_UScriptStruct_FVegetationPointData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VegetationPointData.InnerSingleton;
}
// End ScriptStruct FVegetationPointData

// Begin Class APCGPointContent
void APCGPointContent::StaticRegisterNativesAPCGPointContent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCGPointContent);
UClass* Z_Construct_UClass_APCGPointContent_NoRegister()
{
	return APCGPointContent::StaticClass();
}
struct Z_Construct_UClass_APCGPointContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGPointContent.h" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CesiumGeoreference_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If you want to see these in Details, add VisibleAnywhere + Category.\n// Otherwise, keep them as plain members or minimally as UPROPERTY without exposure.\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you want to see these in Details, add VisibleAnywhere + Category.\nOtherwise, keep them as plain members or minimally as UPROPERTY without exposure." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tileset_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintRegistry_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshesPerType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Caches extracted static meshes for each object type\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Caches extracted static meshes for each object type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maps type name to its corresponding HISM component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCGPointContent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps type name to its corresponding HISM component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CesiumGeoreference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tileset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintRegistry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshesPerType_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StaticMeshesPerType_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StaticMeshesPerType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMeshMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstancedMeshMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InstancedMeshMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCGPointContent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPointContent_Statics::NewProp_CesiumGeoreference = { "CesiumGeoreference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPointContent, CesiumGeoreference), Z_Construct_UClass_ACesiumGeoreference_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CesiumGeoreference_MetaData), NewProp_CesiumGeoreference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPointContent_Statics::NewProp_Tileset = { "Tileset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPointContent, Tileset), Z_Construct_UClass_ACesium3DTileset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tileset_MetaData), NewProp_Tileset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPointContent_Statics::NewProp_BlueprintRegistry = { "BlueprintRegistry", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPointContent, BlueprintRegistry), Z_Construct_UClass_UBlueprintRegistery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintRegistry_MetaData), NewProp_BlueprintRegistry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPointContent_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPointContent, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentActor_MetaData), NewProp_ParentActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPointContent_Statics::NewProp_StaticMeshesPerType_ValueProp = { "StaticMeshesPerType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APCGPointContent_Statics::NewProp_StaticMeshesPerType_Key_KeyProp = { "StaticMeshesPerType_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APCGPointContent_Statics::NewProp_StaticMeshesPerType = { "StaticMeshesPerType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPointContent, StaticMeshesPerType), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshesPerType_MetaData), NewProp_StaticMeshesPerType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPointContent_Statics::NewProp_InstancedMeshMap_ValueProp = { "InstancedMeshMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APCGPointContent_Statics::NewProp_InstancedMeshMap_Key_KeyProp = { "InstancedMeshMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APCGPointContent_Statics::NewProp_InstancedMeshMap = { "InstancedMeshMap", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPointContent, InstancedMeshMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMeshMap_MetaData), NewProp_InstancedMeshMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCGPointContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPointContent_Statics::NewProp_CesiumGeoreference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPointContent_Statics::NewProp_Tileset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPointContent_Statics::NewProp_BlueprintRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPointContent_Statics::NewProp_ParentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPointContent_Statics::NewProp_StaticMeshesPerType_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPointContent_Statics::NewProp_StaticMeshesPerType_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPointContent_Statics::NewProp_StaticMeshesPerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPointContent_Statics::NewProp_InstancedMeshMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPointContent_Statics::NewProp_InstancedMeshMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPointContent_Statics::NewProp_InstancedMeshMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCGPointContent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APCGPointContent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APCGContent,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCGPointContent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APCGPointContent_Statics::ClassParams = {
	&APCGPointContent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APCGPointContent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APCGPointContent_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCGPointContent_Statics::Class_MetaDataParams), Z_Construct_UClass_APCGPointContent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APCGPointContent()
{
	if (!Z_Registration_Info_UClass_APCGPointContent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCGPointContent.OuterSingleton, Z_Construct_UClass_APCGPointContent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APCGPointContent.OuterSingleton;
}
template<> CUSTOMPCG_API UClass* StaticClass<APCGPointContent>()
{
	return APCGPointContent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APCGPointContent);
APCGPointContent::~APCGPointContent() {}
// End Class APCGPointContent

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVegetationPointData::StaticStruct, Z_Construct_UScriptStruct_FVegetationPointData_Statics::NewStructOps, TEXT("VegetationPointData"), &Z_Registration_Info_UScriptStruct_VegetationPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVegetationPointData), 3446430940U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APCGPointContent, APCGPointContent::StaticClass, TEXT("APCGPointContent"), &Z_Registration_Info_UClass_APCGPointContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCGPointContent), 3707519722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_909834608(TEXT("/Script/CustomPCG"),
	Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
