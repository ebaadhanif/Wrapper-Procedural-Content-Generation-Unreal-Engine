// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGPointContent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMPCG_PCGPointContent_generated_h
#error "PCGPointContent.generated.h already included, missing '#pragma once' in PCGPointContent.h"
#endif
#define CUSTOMPCG_PCGPointContent_generated_h

#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVegetationPointData_Statics; \
	CUSTOMPCG_API static class UScriptStruct* StaticStruct();


template<> CUSTOMPCG_API UScriptStruct* StaticStruct<struct FVegetationPointData>();

#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPCGPointContent(); \
	friend struct Z_Construct_UClass_APCGPointContent_Statics; \
public: \
	DECLARE_CLASS(APCGPointContent, APCGContent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomPCG"), NO_API) \
	DECLARE_SERIALIZER(APCGPointContent)


#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APCGPointContent(APCGPointContent&&); \
	APCGPointContent(const APCGPointContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APCGPointContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCGPointContent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APCGPointContent) \
	NO_API virtual ~APCGPointContent();


#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_49_PROLOG
#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_52_INCLASS_NO_PURE_DECLS \
	FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMPCG_API UClass* StaticClass<class APCGPointContent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGPointContent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
