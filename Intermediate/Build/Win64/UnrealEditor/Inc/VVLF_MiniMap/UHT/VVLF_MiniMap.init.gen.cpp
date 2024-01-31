// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVLF_MiniMap_init() {}
	VVLF_MINIMAP_API UFunction* Z_Construct_UDelegateFunction_VVLF_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature();
	VVLF_MINIMAP_API UFunction* Z_Construct_UDelegateFunction_VVLF_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature();
	VVLF_MINIMAP_API UFunction* Z_Construct_UDelegateFunction_VVLF_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VVLF_MiniMap;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VVLF_MiniMap()
	{
		if (!Z_Registration_Info_UPackage__Script_VVLF_MiniMap.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VVLF_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VVLF_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VVLF_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VVLF_MiniMap",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x61A5AFBA,
				0xB964BCF8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VVLF_MiniMap.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VVLF_MiniMap.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VVLF_MiniMap(Z_Construct_UPackage__Script_VVLF_MiniMap, TEXT("/Script/VVLF_MiniMap"), Z_Registration_Info_UPackage__Script_VVLF_MiniMap, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x61A5AFBA, 0xB964BCF8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
