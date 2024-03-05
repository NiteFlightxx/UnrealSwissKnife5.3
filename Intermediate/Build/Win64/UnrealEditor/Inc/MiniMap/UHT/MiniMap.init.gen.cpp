// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniMap_init() {}
	MINIMAP_API UFunction* Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature();
	MINIMAP_API UFunction* Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature();
	MINIMAP_API UFunction* Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MiniMap;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MiniMap()
	{
		if (!Z_Registration_Info_UPackage__Script_MiniMap.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MiniMap",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAFEA170F,
				0xEC88C91C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MiniMap.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MiniMap.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MiniMap(Z_Construct_UPackage__Script_MiniMap, TEXT("/Script/MiniMap"), Z_Registration_Info_UPackage__Script_MiniMap, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAFEA170F, 0xEC88C91C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
