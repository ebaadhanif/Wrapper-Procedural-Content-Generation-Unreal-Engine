// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintRegistery.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMPCG_BlueprintRegistery_generated_h
#error "BlueprintRegistery.generated.h already included, missing '#pragma once' in BlueprintRegistery.h"
#endif
#define CUSTOMPCG_BlueprintRegistery_generated_h

#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_BlueprintRegistery_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintRegistery(); \
	friend struct Z_Construct_UClass_UBlueprintRegistery_Statics; \
public: \
	DECLARE_CLASS(UBlueprintRegistery, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomPCG"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintRegistery)


#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_BlueprintRegistery_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintRegistery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintRegistery(UBlueprintRegistery&&); \
	UBlueprintRegistery(const UBlueprintRegistery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintRegistery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintRegistery); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintRegistery) \
	NO_API virtual ~UBlueprintRegistery();


#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_BlueprintRegistery_h_12_PROLOG
#define FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_BlueprintRegistery_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_BlueprintRegistery_h_15_INCLASS_NO_PURE_DECLS \
	FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_BlueprintRegistery_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMPCG_API UClass* StaticClass<class UBlueprintRegistery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_BlueprintRegistery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
