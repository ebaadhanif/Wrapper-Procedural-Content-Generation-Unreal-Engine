// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomPCG/Public/PCGContent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGContent() {}

// Begin Cross Module References
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGContent();
CUSTOMPCG_API UClass* Z_Construct_UClass_APCGContent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CustomPCG();
// End Cross Module References

// Begin Class APCGContent
void APCGContent::StaticRegisterNativesAPCGContent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCGContent);
UClass* Z_Construct_UClass_APCGContent_NoRegister()
{
	return APCGContent::StaticClass();
}
struct Z_Construct_UClass_APCGContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGContent.h" },
		{ "ModuleRelativePath", "Public/PCGContent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCGContent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APCGContent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPCG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCGContent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APCGContent_Statics::ClassParams = {
	&APCGContent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCGContent_Statics::Class_MetaDataParams), Z_Construct_UClass_APCGContent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APCGContent()
{
	if (!Z_Registration_Info_UClass_APCGContent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCGContent.OuterSingleton, Z_Construct_UClass_APCGContent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APCGContent.OuterSingleton;
}
template<> CUSTOMPCG_API UClass* StaticClass<APCGContent>()
{
	return APCGContent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APCGContent);
APCGContent::~APCGContent() {}
// End Class APCGContent

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGContent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APCGContent, APCGContent::StaticClass, TEXT("APCGContent"), &Z_Registration_Info_UClass_APCGContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCGContent), 7016581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGContent_h_2503722679(TEXT("/Script/CustomPCG"),
	Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGContent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_CustomPCG_Source_CustomPCG_Public_PCGContent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
