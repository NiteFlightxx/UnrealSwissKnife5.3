// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniMap/Public/MiniMapItemIcon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniMapItemIcon() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MINIMAP_API UClass* Z_Construct_UClass_UMiniMapItemIcon();
	MINIMAP_API UClass* Z_Construct_UClass_UMiniMapItemIcon_NoRegister();
	MINIMAP_API UFunction* Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MiniMap();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics
	{
		struct _Script_MiniMap_eventMiniMapItemDestroyedSignature_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon = { "MiniMapItemIcon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MiniMap_eventMiniMapItemDestroyedSignature_Parms, MiniMapItemIcon), Z_Construct_UClass_UMiniMapItemIcon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon_MetaData), Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::NewProp_MiniMapItemIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MiniMapItemIcon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MiniMap, nullptr, "MiniMapItemDestroyedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::_Script_MiniMap_eventMiniMapItemDestroyedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::_Script_MiniMap_eventMiniMapItemDestroyedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMiniMapItemDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& MiniMapItemDestroyedSignature, UMiniMapItemIcon* MiniMapItemIcon)
{
	struct _Script_MiniMap_eventMiniMapItemDestroyedSignature_Parms
	{
		UMiniMapItemIcon* MiniMapItemIcon;
	};
	_Script_MiniMap_eventMiniMapItemDestroyedSignature_Parms Parms;
	Parms.MiniMapItemIcon=MiniMapItemIcon;
	MiniMapItemDestroyedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UMiniMapItemIcon::StaticRegisterNativesUMiniMapItemIcon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMiniMapItemIcon);
	UClass* Z_Construct_UClass_UMiniMapItemIcon_NoRegister()
	{
		return UMiniMapItemIcon::StaticClass();
	}
	struct Z_Construct_UClass_UMiniMapItemIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemIconTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIconTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMiniMapItemDestroyed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMiniMapItemDestroyed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMiniMapItemIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBillboardComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniMap,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapItemIcon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapItemIcon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MiniMapItemIcon.h" },
		{ "ModuleRelativePath", "Public/MiniMapItemIcon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapItemIcon_Statics::NewProp_ItemIconTexture_MetaData[] = {
		{ "Category", "ItemIcon" },
		{ "ModuleRelativePath", "Public/MiniMapItemIcon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMiniMapItemIcon_Statics::NewProp_ItemIconTexture = { "ItemIconTexture", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMiniMapItemIcon, ItemIconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapItemIcon_Statics::NewProp_ItemIconTexture_MetaData), Z_Construct_UClass_UMiniMapItemIcon_Statics::NewProp_ItemIconTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapItemIcon_Statics::NewProp_OnMiniMapItemDestroyed_MetaData[] = {
		{ "Category", "Minimap" },
		{ "ModuleRelativePath", "Public/MiniMapItemIcon.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMiniMapItemIcon_Statics::NewProp_OnMiniMapItemDestroyed = { "OnMiniMapItemDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMiniMapItemIcon, OnMiniMapItemDestroyed), Z_Construct_UDelegateFunction_MiniMap_MiniMapItemDestroyedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapItemIcon_Statics::NewProp_OnMiniMapItemDestroyed_MetaData), Z_Construct_UClass_UMiniMapItemIcon_Statics::NewProp_OnMiniMapItemDestroyed_MetaData) }; // 420172909
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMiniMapItemIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMiniMapItemIcon_Statics::NewProp_ItemIconTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMiniMapItemIcon_Statics::NewProp_OnMiniMapItemDestroyed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMiniMapItemIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMiniMapItemIcon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMiniMapItemIcon_Statics::ClassParams = {
		&UMiniMapItemIcon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMiniMapItemIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapItemIcon_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapItemIcon_Statics::Class_MetaDataParams), Z_Construct_UClass_UMiniMapItemIcon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapItemIcon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMiniMapItemIcon()
	{
		if (!Z_Registration_Info_UClass_UMiniMapItemIcon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMiniMapItemIcon.OuterSingleton, Z_Construct_UClass_UMiniMapItemIcon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMiniMapItemIcon.OuterSingleton;
	}
	template<> MINIMAP_API UClass* StaticClass<UMiniMapItemIcon>()
	{
		return UMiniMapItemIcon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMiniMapItemIcon);
	UMiniMapItemIcon::~UMiniMapItemIcon() {}
	struct Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapItemIcon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapItemIcon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMiniMapItemIcon, UMiniMapItemIcon::StaticClass, TEXT("UMiniMapItemIcon"), &Z_Registration_Info_UClass_UMiniMapItemIcon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMiniMapItemIcon), 741009102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapItemIcon_h_2518602173(TEXT("/Script/MiniMap"),
		Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapItemIcon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapItemIcon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
