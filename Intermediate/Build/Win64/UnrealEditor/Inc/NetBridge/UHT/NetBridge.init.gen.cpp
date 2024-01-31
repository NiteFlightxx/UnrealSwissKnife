// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetBridge_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NetBridge;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NetBridge()
	{
		if (!Z_Registration_Info_UPackage__Script_NetBridge.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NetBridge",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB09F0A25,
				0xE41CF92B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NetBridge.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NetBridge.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NetBridge(Z_Construct_UPackage__Script_NetBridge, TEXT("/Script/NetBridge"), Z_Registration_Info_UPackage__Script_NetBridge, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB09F0A25, 0xE41CF92B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
