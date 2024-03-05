// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DevAssetManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDevAssetManager;
class UWorld;
#ifdef DEVTOOLKIT_DevAssetManager_generated_h
#error "DevAssetManager.generated.h already included, missing '#pragma once' in DevAssetManager.h"
#endif
#define DEVTOOLKIT_DevAssetManager_generated_h

#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_9_DELEGATE \
DEVTOOLKIT_API void FOnPackageLoaded_DelegateWrapper(const FScriptDelegate& OnPackageLoaded, const TSoftObjectPtr<UWorld>& Level);


#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_SPARSE_DATA
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentLoadProgress); \
	DECLARE_FUNCTION(execDevAsyncLoadObject); \
	DECLARE_FUNCTION(execGet);


#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_ACCESSORS
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDevAssetManager(); \
	friend struct Z_Construct_UClass_UDevAssetManager_Statics; \
public: \
	DECLARE_CLASS(UDevAssetManager, UAssetManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DevToolKit"), NO_API) \
	DECLARE_SERIALIZER(UDevAssetManager)


#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDevAssetManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDevAssetManager(UDevAssetManager&&); \
	NO_API UDevAssetManager(const UDevAssetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDevAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDevAssetManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDevAssetManager) \
	NO_API virtual ~UDevAssetManager();


#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_14_PROLOG
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_SPARSE_DATA \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_ACCESSORS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_INCLASS_NO_PURE_DECLS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEVTOOLKIT_API UClass* StaticClass<class UDevAssetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevAssetManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
