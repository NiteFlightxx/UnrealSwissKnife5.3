// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MiniMapSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMiniMapBase;
class UMiniMapItemIcon;
#ifdef MINIMAP_MiniMapSubsystem_generated_h
#error "MiniMapSubsystem.generated.h already included, missing '#pragma once' in MiniMapSubsystem.h"
#endif
#define MINIMAP_MiniMapSubsystem_generated_h

#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_14_DELEGATE \
MINIMAP_API void FMiniMapItemRegisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MiniMapItemRegisteredSignature, UMiniMapItemIcon* MiniMapItemIcon);


#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_15_DELEGATE \
MINIMAP_API void FMiniMapItemUnregisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MiniMapItemUnregisteredSignature, UMiniMapItemIcon* MiniMapItemIcon);


#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_SPARSE_DATA
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMiniMapItemIconArr); \
	DECLARE_FUNCTION(execGetMiniMapBaseArr);


#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_ACCESSORS
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMiniMapSubsystem(); \
	friend struct Z_Construct_UClass_UMiniMapSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMiniMapSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MiniMap"), NO_API) \
	DECLARE_SERIALIZER(UMiniMapSubsystem)


#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMiniMapSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMiniMapSubsystem(UMiniMapSubsystem&&); \
	NO_API UMiniMapSubsystem(const UMiniMapSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMiniMapSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMiniMapSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMiniMapSubsystem) \
	NO_API virtual ~UMiniMapSubsystem();


#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_20_PROLOG
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_SPARSE_DATA \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_ACCESSORS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAP_API UClass* StaticClass<class UMiniMapSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
