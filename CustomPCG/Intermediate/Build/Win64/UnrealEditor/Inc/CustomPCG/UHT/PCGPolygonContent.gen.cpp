// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomPCG/Public/PCGPolygonContent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPolygonContent() {}

// Begin Cross Module References
CESIUMRUNTIME_API UClass* Z_Construct_UClass_ACesium3DTileset_NoRegister();
CESIUMRUNTIME_API UClass* Z_Construct_UClass_ACesiumGeoreference_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGContent();
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGPolygonActor_NoRegister();
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGPolygonContent();
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGPolygonContent_NoRegister();
CUSTOMPCG_API UScriptStruct* Z_Construct_UScriptStruct_FGrassPolygonData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CustomPCG();
// End Cross Module References

// Begin ScriptStruct FGrassPolygonData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GrassPolygonData;
class UScriptStruct* FGrassPolygonData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GrassPolygonData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GrassPolygonData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrassPolygonData, (UObject*)Z_Construct_UPackage__Script_CustomPCG(), TEXT("GrassPolygonData"));
	}
	return Z_Registration_Info_UScriptStruct_GrassPolygonData.OuterSingleton;
}
template<> CUSTOMPCG_API UScriptStruct* StaticStruct<FGrassPolygonData>()
{
	return FGrassPolygonData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGrassPolygonData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- STRUCT 2: For grass.shp ---\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- STRUCT 2: For grass.shp ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Area_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KindID_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KindDesc_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DomainID_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DomainDesc_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryID_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountryDes_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryID_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryDe_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubCategID_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubCategDe_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificID_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificDe_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityEnum_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Foliage_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygonPoints_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Category", "CustomPCG|PolygonData" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Area;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Model;
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Foliage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonPoints;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrassPolygonData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, Density), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Density_MetaData), NewProp_Density_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, Area), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Area_MetaData), NewProp_Area_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, Model), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_KindID = { "KindID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, KindID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KindID_MetaData), NewProp_KindID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_KindDesc = { "KindDesc", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, KindDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KindDesc_MetaData), NewProp_KindDesc_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_DomainID = { "DomainID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, DomainID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DomainID_MetaData), NewProp_DomainID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_DomainDesc = { "DomainDesc", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, DomainDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DomainDesc_MetaData), NewProp_DomainDesc_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_CountryID = { "CountryID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, CountryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryID_MetaData), NewProp_CountryID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_CountryDes = { "CountryDes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, CountryDes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountryDes_MetaData), NewProp_CountryDes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_CategoryID = { "CategoryID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, CategoryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryID_MetaData), NewProp_CategoryID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_CategoryDe = { "CategoryDe", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, CategoryDe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryDe_MetaData), NewProp_CategoryDe_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_SubCategID = { "SubCategID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, SubCategID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubCategID_MetaData), NewProp_SubCategID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_SubCategDe = { "SubCategDe", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, SubCategDe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubCategDe_MetaData), NewProp_SubCategDe_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_SpecificID = { "SpecificID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, SpecificID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificID_MetaData), NewProp_SpecificID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_SpecificDe = { "SpecificDe", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, SpecificDe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificDe_MetaData), NewProp_SpecificDe_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_EntityEnum = { "EntityEnum", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, EntityEnum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityEnum_MetaData), NewProp_EntityEnum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Foliage = { "Foliage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, Foliage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Foliage_MetaData), NewProp_Foliage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, State), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_PolygonPoints_Inner = { "PolygonPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_PolygonPoints = { "PolygonPoints", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, PolygonPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygonPoints_MetaData), NewProp_PolygonPoints_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassPolygonData, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrassPolygonData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Density,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Area,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_KindID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_KindDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_DomainID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_DomainDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_CountryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_CountryDes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_CategoryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_CategoryDe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_SubCategID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_SubCategDe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_SpecificID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_SpecificDe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_EntityEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_Foliage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_PolygonPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_PolygonPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewProp_FileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassPolygonData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrassPolygonData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
	nullptr,
	&NewStructOps,
	"GrassPolygonData",
	Z_Construct_UScriptStruct_FGrassPolygonData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassPolygonData_Statics::PropPointers),
	sizeof(FGrassPolygonData),
	alignof(FGrassPolygonData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassPolygonData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGrassPolygonData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGrassPolygonData()
{
	if (!Z_Registration_Info_UScriptStruct_GrassPolygonData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GrassPolygonData.InnerSingleton, Z_Construct_UScriptStruct_FGrassPolygonData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GrassPolygonData.InnerSingleton;
}
// End ScriptStruct FGrassPolygonData

// Begin Class APCGPolygonContent Function OnPCGGraphGenerated
struct Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics
{
	struct PCGPolygonContent_eventOnPCGGraphGenerated_Parms
	{
		UPCGComponent* PCGComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If you want this callable in Blueprints, add BlueprintCallable + Category.\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you want this callable in Blueprints, add BlueprintCallable + Category." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCGComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PCGComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics::NewProp_PCGComponent = { "PCGComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGPolygonContent_eventOnPCGGraphGenerated_Parms, PCGComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCGComponent_MetaData), NewProp_PCGComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics::NewProp_PCGComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APCGPolygonContent, nullptr, "OnPCGGraphGenerated", nullptr, nullptr, Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics::PropPointers), sizeof(Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics::PCGPolygonContent_eventOnPCGGraphGenerated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics::Function_MetaDataParams), Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics::PCGPolygonContent_eventOnPCGGraphGenerated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APCGPolygonContent::execOnPCGGraphGenerated)
{
	P_GET_OBJECT(UPCGComponent,Z_Param_PCGComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPCGGraphGenerated(Z_Param_PCGComponent);
	P_NATIVE_END;
}
// End Class APCGPolygonContent Function OnPCGGraphGenerated

// Begin Class APCGPolygonContent
void APCGPolygonContent::StaticRegisterNativesAPCGPolygonContent()
{
	UClass* Class = APCGPolygonContent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPCGGraphGenerated", &APCGPolygonContent::execOnPCGGraphGenerated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCGPolygonContent);
UClass* Z_Construct_UClass_APCGPolygonContent_NoRegister()
{
	return APCGPolygonContent::StaticClass();
}
struct Z_Construct_UClass_APCGPolygonContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGPolygonContent.h" },
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CesiumGeoreference_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If you want these visible in the editor, wrap with UPROPERTY + Category.\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you want these visible in the editor, wrap with UPROPERTY + Category." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tileset_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedPolygonActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGPolygonContent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CesiumGeoreference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tileset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedPolygonActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedPolygonActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APCGPolygonContent_OnPCGGraphGenerated, "OnPCGGraphGenerated" }, // 3040099043
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCGPolygonContent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPolygonContent_Statics::NewProp_CesiumGeoreference = { "CesiumGeoreference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPolygonContent, CesiumGeoreference), Z_Construct_UClass_ACesiumGeoreference_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CesiumGeoreference_MetaData), NewProp_CesiumGeoreference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPolygonContent_Statics::NewProp_Tileset = { "Tileset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPolygonContent, Tileset), Z_Construct_UClass_ACesium3DTileset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tileset_MetaData), NewProp_Tileset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPolygonContent_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPolygonContent, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentActor_MetaData), NewProp_ParentActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPolygonContent_Statics::NewProp_SpawnedPolygonActors_Inner = { "SpawnedPolygonActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APCGPolygonActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APCGPolygonContent_Statics::NewProp_SpawnedPolygonActors = { "SpawnedPolygonActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPolygonContent, SpawnedPolygonActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedPolygonActors_MetaData), NewProp_SpawnedPolygonActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCGPolygonContent_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGPolygonContent, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pawn_MetaData), NewProp_Pawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCGPolygonContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPolygonContent_Statics::NewProp_CesiumGeoreference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPolygonContent_Statics::NewProp_Tileset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPolygonContent_Statics::NewProp_ParentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPolygonContent_Statics::NewProp_SpawnedPolygonActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPolygonContent_Statics::NewProp_SpawnedPolygonActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGPolygonContent_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCGPolygonContent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APCGPolygonContent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APCGContent,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCGPolygonContent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APCGPolygonContent_Statics::ClassParams = {
	&APCGPolygonContent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APCGPolygonContent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APCGPolygonContent_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCGPolygonContent_Statics::Class_MetaDataParams), Z_Construct_UClass_APCGPolygonContent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APCGPolygonContent()
{
	if (!Z_Registration_Info_UClass_APCGPolygonContent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCGPolygonContent.OuterSingleton, Z_Construct_UClass_APCGPolygonContent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APCGPolygonContent.OuterSingleton;
}
template<> CUSTOMPCG_API UClass* StaticClass<APCGPolygonContent>()
{
	return APCGPolygonContent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APCGPolygonContent);
APCGPolygonContent::~APCGPolygonContent() {}
// End Class APCGPolygonContent

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGrassPolygonData::StaticStruct, Z_Construct_UScriptStruct_FGrassPolygonData_Statics::NewStructOps, TEXT("GrassPolygonData"), &Z_Registration_Info_UScriptStruct_GrassPolygonData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrassPolygonData), 2754602569U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APCGPolygonContent, APCGPolygonContent::StaticClass, TEXT("APCGPolygonContent"), &Z_Registration_Info_UClass_APCGPolygonContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCGPolygonContent), 2008734444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_3567070218(TEXT("/Script/CustomPCG"),
	Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
