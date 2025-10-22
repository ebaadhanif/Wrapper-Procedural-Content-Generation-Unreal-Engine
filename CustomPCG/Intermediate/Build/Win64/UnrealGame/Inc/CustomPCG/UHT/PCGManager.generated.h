// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMPCG_PCGManager_generated_h
#error "PCGManager.generated.h already included, missing '#pragma once' in PCGManager.h"
#endif
#define CUSTOMPCG_PCGManager_generated_h

#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPCGManager(); \
	friend struct Z_Construct_UClass_APCGManager_Statics; \
public: \
	DECLARE_CLASS(APCGManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomPCG"), NO_API) \
	DECLARE_SERIALIZER(APCGManager)


#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APCGManager(APCGManager&&); \
	APCGManager(const APCGManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APCGManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCGManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APCGManager) \
	NO_API virtual ~APCGManager();


#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGManager_h_10_PROLOG
#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMPCG_API UClass* StaticClass<class APCGManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
