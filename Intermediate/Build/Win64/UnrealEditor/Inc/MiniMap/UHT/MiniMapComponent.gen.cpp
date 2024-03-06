// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniMap/Public/MiniMapComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniMapComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MINIMAP_API UClass* Z_Construct_UClass_UMiniMapComponent();
	MINIMAP_API UClass* Z_Construct_UClass_UMiniMapComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MiniMap();
// End Cross Module References
	void UMiniMapComponent::StaticRegisterNativesUMiniMapComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMiniMapComponent);
	UClass* Z_Construct_UClass_UMiniMapComponent_NoRegister()
	{
		return UMiniMapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMiniMapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsAlignActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundsAlignActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetBoundsButton_MetaData[];
#endif
		static void NewProp_bSetBoundsButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetBoundsButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapTextureTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MiniMapTextureTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMiniMapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniMap,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MiniMapComponent.h" },
		{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_BoundsAlignActor_MetaData[] = {
		{ "Category", "TransformFromBounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor to align rotation to. If set this actor is always included in the bounds calculation. */" },
#endif
		{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor to align rotation to. If set this actor is always included in the bounds calculation." },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_BoundsAlignActor = { "BoundsAlignActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMiniMapComponent, BoundsAlignActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_BoundsAlignActor_MetaData), Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_BoundsAlignActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_bSetBoundsButton_MetaData[] = {
		{ "Category", "TransformFromBounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Placeholder for details customization button. */" },
#endif
		{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Placeholder for details customization button." },
#endif
	};
#endif
	void Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_bSetBoundsButton_SetBit(void* Obj)
	{
		((UMiniMapComponent*)Obj)->bSetBoundsButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_bSetBoundsButton = { "bSetBoundsButton", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMiniMapComponent), &Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_bSetBoundsButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_bSetBoundsButton_MetaData), Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_bSetBoundsButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_MiniMapTextureTarget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TransformFromBounds" },
		{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_MiniMapTextureTarget = { "MiniMapTextureTarget", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMiniMapComponent, MiniMapTextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_MiniMapTextureTarget_MetaData), Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_MiniMapTextureTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMiniMapComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_BoundsAlignActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_bSetBoundsButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMiniMapComponent_Statics::NewProp_MiniMapTextureTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMiniMapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMiniMapComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMiniMapComponent_Statics::ClassParams = {
		&UMiniMapComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMiniMapComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMiniMapComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMiniMapComponent()
	{
		if (!Z_Registration_Info_UClass_UMiniMapComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMiniMapComponent.OuterSingleton, Z_Construct_UClass_UMiniMapComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMiniMapComponent.OuterSingleton;
	}
	template<> MINIMAP_API UClass* StaticClass<UMiniMapComponent>()
	{
		return UMiniMapComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMiniMapComponent);
	UMiniMapComponent::~UMiniMapComponent() {}
	struct Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMiniMapComponent, UMiniMapComponent::StaticClass, TEXT("UMiniMapComponent"), &Z_Registration_Info_UClass_UMiniMapComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMiniMapComponent), 1107445850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapComponent_h_865434628(TEXT("/Script/MiniMap"),
		Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
