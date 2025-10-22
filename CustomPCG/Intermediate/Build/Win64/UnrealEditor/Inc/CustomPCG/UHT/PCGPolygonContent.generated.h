// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGPolygonContent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGComponent;
#ifdef CUSTOMPCG_PCGPolygonContent_generated_h
#error "PCGPolygonContent.generated.h already included, missing '#pragma once' in PCGPolygonContent.h"
#endif
#define CUSTOMPCG_PCGPolygonContent_generated_h

#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrassPolygonData_Statics; \
	CUSTOMPCG_API static class UScriptStruct* StaticStruct();


template<> CUSTOMPCG_API UScriptStruct* StaticStruct<struct FGrassPolygonData>();

#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPCGGraphGenerated);


#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPCGPolygonContent(); \
	friend struct Z_Construct_UClass_APCGPolygonContent_Statics; \
public: \
	DECLARE_CLASS(APCGPolygonContent, APCGContent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomPCG"), NO_API) \
	DECLARE_SERIALIZER(APCGPolygonContent)


#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APCGPolygonContent(APCGPolygonContent&&); \
	APCGPolygonContent(const APCGPolygonContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APCGPolygonContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCGPolygonContent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APCGPolygonContent) \
	NO_API virtual ~APCGPolygonContent();


#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_41_PROLOG
#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_44_INCLASS_NO_PURE_DECLS \
	FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMPCG_API UClass* StaticClass<class APCGPolygonContent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPolygonContent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
