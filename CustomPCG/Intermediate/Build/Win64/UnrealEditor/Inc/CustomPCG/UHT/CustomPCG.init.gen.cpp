// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPCG_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CustomPCG;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CustomPCG()
	{
		if (!Z_Registration_Info_UPackage__Script_CustomPCG.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CustomPCG",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xDDAC421C,
				0x79DD9AA4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CustomPCG.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CustomPCG.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CustomPCG(Z_Construct_UPackage__Script_CustomPCG, TEXT("/Script/CustomPCG"), Z_Registration_Info_UPackage__Script_CustomPCG, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDDAC421C, 0x79DD9AA4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
