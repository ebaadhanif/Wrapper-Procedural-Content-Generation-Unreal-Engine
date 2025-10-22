// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomPCG/Public/PCGManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGManager() {}

// Begin Cross Module References
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGManager();
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CustomPCG();
// End Cross Module References

// Begin Class APCGManager
void APCGManager::StaticRegisterNativesAPCGManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCGManager);
UClass* Z_Construct_UClass_APCGManager_NoRegister()
{
	return APCGManager::StaticClass();
}
struct Z_Construct_UClass_APCGManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGManager.h" },
		{ "ModuleRelativePath", "Public/PCGManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCGManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APCGManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCGManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APCGManager_Statics::ClassParams = {
	&APCGManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCGManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APCGManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APCGManager()
{
	if (!Z_Registration_Info_UClass_APCGManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCGManager.OuterSingleton, Z_Construct_UClass_APCGManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APCGManager.OuterSingleton;
}
template<> CUSTOMPCG_API UClass* StaticClass<APCGManager>()
{
	return APCGManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APCGManager);
APCGManager::~APCGManager() {}
// End Class APCGManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APCGManager, APCGManager::StaticClass, TEXT("APCGManager"), &Z_Registration_Info_UClass_APCGManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCGManager), 361786787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGManager_h_263633151(TEXT("/Script/CustomPCG"),
	Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
