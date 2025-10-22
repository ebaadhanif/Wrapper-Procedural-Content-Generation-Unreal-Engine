// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGContent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMPCG_PCGContent_generated_h
#error "PCGContent.generated.h already included, missing '#pragma once' in PCGContent.h"
#endif
#define CUSTOMPCG_PCGContent_generated_h

#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGContent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPCGContent(); \
	friend struct Z_Construct_UClass_APCGContent_Statics; \
public: \
	DECLARE_CLASS(APCGContent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomPCG"), NO_API) \
	DECLARE_SERIALIZER(APCGContent)


#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGContent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APCGContent(APCGContent&&); \
	APCGContent(const APCGContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APCGContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCGContent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APCGContent) \
	NO_API virtual ~APCGContent();


#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGContent_h_42_PROLOG
#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGContent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGContent_h_45_INCLASS_NO_PURE_DECLS \
	FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGContent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMPCG_API UClass* StaticClass<class APCGContent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGContent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
