// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniMap/Public/MiniMapSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniMapSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MINIMAP_API UClass* Z_Construct_UClass_AMiniMapBase_NoRegister();
	MINIMAP_API UClass* Z_Construct_UClass_UMiniMapItemIcon_NoRegister();
	MINIMAP_API UClass* Z_Construct_UClass_UMiniMapSubsystem();
	MINIMAP_API UClass* Z_Construct_UClass_UMiniMapSubsystem_NoRegister();
	MINIMAP_API UFunction* Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature();
	MINIMAP_API UFunction* Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MiniMap();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics
	{
		struct _Script_MiniMap_eventMiniMapItemRegisteredSignature_Parms
		{
			UMiniMapItemIcon* MiniMapItemIcon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapItemIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MiniMapItemIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon = { "MiniMapItemIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MiniMap_eventMiniMapItemRegisteredSignature_Parms, MiniMapItemIcon), Z_Construct_UClass_UMiniMapItemIcon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon_MetaData), Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/MiniMapSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MiniMap, nullptr, "MiniMapItemRegisteredSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::_Script_MiniMap_eventMiniMapItemRegisteredSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::_Script_MiniMap_eventMiniMapItemRegisteredSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMiniMapItemRegisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MiniMapItemRegisteredSignature, UMiniMapItemIcon* MiniMapItemIcon)
{
	struct _Script_MiniMap_eventMiniMapItemRegisteredSignature_Parms
	{
		UMiniMapItemIcon* MiniMapItemIcon;
	};
	_Script_MiniMap_eventMiniMapItemRegisteredSignature_Parms Parms;
	Parms.MiniMapItemIcon=MiniMapItemIcon;
	MiniMapItemRegisteredSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics
	{
		struct _Script_MiniMap_eventMiniMapItemUnregisteredSignature_Parms
		{
			UMiniMapItemIcon* MiniMapItemIcon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapItemIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MiniMapItemIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon = { "MiniMapItemIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MiniMap_eventMiniMapItemUnregisteredSignature_Parms, MiniMapItemIcon), Z_Construct_UClass_UMiniMapItemIcon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon_MetaData), Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MiniMapSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MiniMap, nullptr, "MiniMapItemUnregisteredSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::_Script_MiniMap_eventMiniMapItemUnregisteredSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::_Script_MiniMap_eventMiniMapItemUnregisteredSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMiniMapItemUnregisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MiniMapItemUnregisteredSignature, UMiniMapItemIcon* MiniMapItemIcon)
{
	struct _Script_MiniMap_eventMiniMapItemUnregisteredSignature_Parms
	{
		UMiniMapItemIcon* MiniMapItemIcon;
	};
	_Script_MiniMap_eventMiniMapItemUnregisteredSignature_Parms Parms;
	Parms.MiniMapItemIcon=MiniMapItemIcon;
	MiniMapItemUnregisteredSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMiniMapSubsystem::execGetMiniMapItemIconArr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMiniMapItemIcon*>*)Z_Param__Result=P_THIS->GetMiniMapItemIconArr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMiniMapSubsystem::execGetMiniMapBaseArr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AMiniMapBase*>*)Z_Param__Result=P_THIS->GetMiniMapBaseArr();
		P_NATIVE_END;
	}
	void UMiniMapSubsystem::StaticRegisterNativesUMiniMapSubsystem()
	{
		UClass* Class = UMiniMapSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMiniMapBaseArr", &UMiniMapSubsystem::execGetMiniMapBaseArr },
			{ "GetMiniMapItemIconArr", &UMiniMapSubsystem::execGetMiniMapItemIconArr },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics
	{
		struct MiniMapSubsystem_eventGetMiniMapBaseArr_Parms
		{
			TArray<AMiniMapBase*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMiniMapBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniMapSubsystem_eventGetMiniMapBaseArr_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiniMapSubsystem, nullptr, "GetMiniMapBaseArr", nullptr, nullptr, Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::MiniMapSubsystem_eventGetMiniMapBaseArr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::MiniMapSubsystem_eventGetMiniMapBaseArr_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics
	{
		struct MiniMapSubsystem_eventGetMiniMapItemIconArr_Parms
		{
			TArray<UMiniMapItemIcon*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMiniMapItemIcon_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniMapSubsystem_eventGetMiniMapItemIconArr_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiniMapSubsystem, nullptr, "GetMiniMapItemIconArr", nullptr, nullptr, Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::MiniMapSubsystem_eventGetMiniMapItemIconArr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::MiniMapSubsystem_eventGetMiniMapItemIconArr_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMiniMapSubsystem);
	UClass* Z_Construct_UClass_UMiniMapSubsystem_NoRegister()
	{
		return UMiniMapSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMiniMapSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MiniMapBaseArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapBaseArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MiniMapBaseArr;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MiniMapItemIconArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapItemIconArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MiniMapItemIconArr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMiniMapItemRegisteredSignature_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMiniMapItemRegisteredSignature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMiniMapItemUnregisteredSignature_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMiniMapItemUnregisteredSignature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMiniMapSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniMap,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMiniMapSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapBaseArr, "GetMiniMapBaseArr" }, // 2438889812
		{ &Z_Construct_UFunction_UMiniMapSubsystem_GetMiniMapItemIconArr, "GetMiniMapItemIconArr" }, // 1867208625
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MiniMapSubsystem.h" },
		{ "ModuleRelativePath", "Public/MiniMapSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapBaseArr_Inner = { "MiniMapBaseArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMiniMapBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapBaseArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/MiniMapSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapBaseArr = { "MiniMapBaseArr", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMiniMapSubsystem, MiniMapBaseArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapBaseArr_MetaData), Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapBaseArr_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapItemIconArr_Inner = { "MiniMapItemIconArr", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMiniMapItemIcon_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapItemIconArr_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MiniMapSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapItemIconArr = { "MiniMapItemIconArr", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMiniMapSubsystem, MiniMapItemIconArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapItemIconArr_MetaData), Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapItemIconArr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_OnMiniMapItemRegisteredSignature_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_OnMiniMapItemRegisteredSignature = { "OnMiniMapItemRegisteredSignature", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMiniMapSubsystem, OnMiniMapItemRegisteredSignature), Z_Construct_UDelegateFunction_MiniMap_MiniMapItemRegisteredSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_OnMiniMapItemRegisteredSignature_MetaData), Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_OnMiniMapItemRegisteredSignature_MetaData) }; // 3644343218
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_OnMiniMapItemUnregisteredSignature_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_OnMiniMapItemUnregisteredSignature = { "OnMiniMapItemUnregisteredSignature", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMiniMapSubsystem, OnMiniMapItemUnregisteredSignature), Z_Construct_UDelegateFunction_MiniMap_MiniMapItemUnregisteredSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_OnMiniMapItemUnregisteredSignature_MetaData), Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_OnMiniMapItemUnregisteredSignature_MetaData) }; // 1472697785
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMiniMapSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapBaseArr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapBaseArr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapItemIconArr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_MiniMapItemIconArr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_OnMiniMapItemRegisteredSignature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMiniMapSubsystem_Statics::NewProp_OnMiniMapItemUnregisteredSignature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMiniMapSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMiniMapSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMiniMapSubsystem_Statics::ClassParams = {
		&UMiniMapSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMiniMapSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMiniMapSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMiniMapSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMiniMapSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMiniMapSubsystem.OuterSingleton, Z_Construct_UClass_UMiniMapSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMiniMapSubsystem.OuterSingleton;
	}
	template<> MINIMAP_API UClass* StaticClass<UMiniMapSubsystem>()
	{
		return UMiniMapSubsystem::StaticClass();
	}
	UMiniMapSubsystem::UMiniMapSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMiniMapSubsystem);
	UMiniMapSubsystem::~UMiniMapSubsystem() {}
	struct Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMiniMapSubsystem, UMiniMapSubsystem::StaticClass, TEXT("UMiniMapSubsystem"), &Z_Registration_Info_UClass_UMiniMapSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMiniMapSubsystem), 2306857377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_3013557635(TEXT("/Script/MiniMap"),
		Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
