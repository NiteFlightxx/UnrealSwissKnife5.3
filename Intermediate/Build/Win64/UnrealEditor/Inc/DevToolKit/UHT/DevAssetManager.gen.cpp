// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DevToolKit/Public/DevAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevAssetManager() {}
// Cross Module References
	DEVTOOLKIT_API UClass* Z_Construct_UClass_UDevAssetManager();
	DEVTOOLKIT_API UClass* Z_Construct_UClass_UDevAssetManager_NoRegister();
	DEVTOOLKIT_API UFunction* Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DevToolKit();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics
	{
		struct _Script_DevToolKit_eventOnPackageLoaded_Parms
		{
			TSoftObjectPtr<UWorld> Level;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DevToolKit_eventOnPackageLoaded_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DevAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DevToolKit, nullptr, "OnPackageLoaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::_Script_DevToolKit_eventOnPackageLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::_Script_DevToolKit_eventOnPackageLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPackageLoaded_DelegateWrapper(const FScriptDelegate& OnPackageLoaded, const TSoftObjectPtr<UWorld>& Level)
{
	struct _Script_DevToolKit_eventOnPackageLoaded_Parms
	{
		TSoftObjectPtr<UWorld> Level;
	};
	_Script_DevToolKit_eventOnPackageLoaded_Parms Parms;
	Parms.Level=Level;
	OnPackageLoaded.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDevAssetManager::execGetCurrentLoadProgress)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LoadedCount);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RequestedCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentLoadProgress(Z_Param_Out_LoadedCount,Z_Param_Out_RequestedCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDevAssetManager::execDevAsyncLoadObject)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_Level);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnPackageLoaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->DevAsyncLoadObject(Z_Param_Level,FOnPackageLoaded(Z_Param_OnPackageLoaded));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDevAssetManager::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDevAssetManager**)Z_Param__Result=UDevAssetManager::Get();
		P_NATIVE_END;
	}
	void UDevAssetManager::StaticRegisterNativesUDevAssetManager()
	{
		UClass* Class = UDevAssetManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DevAsyncLoadObject", &UDevAssetManager::execDevAsyncLoadObject },
			{ "Get", &UDevAssetManager::execGet },
			{ "GetCurrentLoadProgress", &UDevAssetManager::execGetCurrentLoadProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics
	{
		struct DevAssetManager_eventDevAsyncLoadObject_Parms
		{
			TSoftObjectPtr<UWorld> Level;
			FScriptDelegate OnPackageLoaded;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPackageLoaded;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevAssetManager_eventDevAsyncLoadObject_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::NewProp_Level_MetaData), Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::NewProp_Level_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::NewProp_OnPackageLoaded = { "OnPackageLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevAssetManager_eventDevAsyncLoadObject_Parms, OnPackageLoaded), Z_Construct_UDelegateFunction_DevToolKit_OnPackageLoaded__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1488652798
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevAssetManager_eventDevAsyncLoadObject_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::NewProp_OnPackageLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UDevToolGameplayStatics|AssetManager" },
		{ "ModuleRelativePath", "Public/DevAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevAssetManager, nullptr, "DevAsyncLoadObject", nullptr, nullptr, Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::DevAssetManager_eventDevAsyncLoadObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::DevAssetManager_eventDevAsyncLoadObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevAssetManager_Get_Statics
	{
		struct DevAssetManager_eventGet_Parms
		{
			UDevAssetManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDevAssetManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevAssetManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_UDevAssetManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevAssetManager_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevAssetManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevAssetManager_Get_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UDevToolGameplayStatics|AssetManager" },
		{ "DisplayName", "GetDevAssetManager" },
		{ "ModuleRelativePath", "Public/DevAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevAssetManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevAssetManager, nullptr, "Get", nullptr, nullptr, Z_Construct_UFunction_UDevAssetManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevAssetManager_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDevAssetManager_Get_Statics::DevAssetManager_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevAssetManager_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDevAssetManager_Get_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevAssetManager_Get_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDevAssetManager_Get_Statics::DevAssetManager_eventGet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDevAssetManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevAssetManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics
	{
		struct DevAssetManager_eventGetCurrentLoadProgress_Parms
		{
			int32 LoadedCount;
			int32 RequestedCount;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoadedCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequestedCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::NewProp_LoadedCount = { "LoadedCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevAssetManager_eventGetCurrentLoadProgress_Parms, LoadedCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::NewProp_RequestedCount = { "RequestedCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevAssetManager_eventGetCurrentLoadProgress_Parms, RequestedCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevAssetManager_eventGetCurrentLoadProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::NewProp_LoadedCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::NewProp_RequestedCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UDevToolGameplayStatics|AssetManager" },
		{ "ModuleRelativePath", "Public/DevAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevAssetManager, nullptr, "GetCurrentLoadProgress", nullptr, nullptr, Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::DevAssetManager_eventGetCurrentLoadProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::DevAssetManager_eventGetCurrentLoadProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDevAssetManager);
	UClass* Z_Construct_UClass_UDevAssetManager_NoRegister()
	{
		return UDevAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UDevAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDevAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DevToolKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDevAssetManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDevAssetManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDevAssetManager_DevAsyncLoadObject, "DevAsyncLoadObject" }, // 2464098542
		{ &Z_Construct_UFunction_UDevAssetManager_Get, "Get" }, // 2228931662
		{ &Z_Construct_UFunction_UDevAssetManager_GetCurrentLoadProgress, "GetCurrentLoadProgress" }, // 2112810883
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDevAssetManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevAssetManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DevAssetManager.h" },
		{ "ModuleRelativePath", "Public/DevAssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDevAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDevAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDevAssetManager_Statics::ClassParams = {
		&UDevAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDevAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDevAssetManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDevAssetManager()
	{
		if (!Z_Registration_Info_UClass_UDevAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDevAssetManager.OuterSingleton, Z_Construct_UClass_UDevAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDevAssetManager.OuterSingleton;
	}
	template<> DEVTOOLKIT_API UClass* StaticClass<UDevAssetManager>()
	{
		return UDevAssetManager::StaticClass();
	}
	UDevAssetManager::UDevAssetManager() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDevAssetManager);
	UDevAssetManager::~UDevAssetManager() {}
	struct Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDevAssetManager, UDevAssetManager::StaticClass, TEXT("UDevAssetManager"), &Z_Registration_Info_UClass_UDevAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDevAssetManager), 91265087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_4164894920(TEXT("/Script/DevToolKit"),
		Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
