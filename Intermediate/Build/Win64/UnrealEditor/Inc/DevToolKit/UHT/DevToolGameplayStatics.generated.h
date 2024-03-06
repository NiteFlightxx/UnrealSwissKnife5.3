// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DevToolGameplayStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPrimitiveComponent;
class UTexture2D;
class UTextureRenderTarget2D;
#ifdef DEVTOOLKIT_DevToolGameplayStatics_generated_h
#error "DevToolGameplayStatics.generated.h already included, missing '#pragma once' in DevToolGameplayStatics.h"
#endif
#define DEVTOOLKIT_DevToolGameplayStatics_generated_h

#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_SPARSE_DATA
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMachineID); \
	DECLARE_FUNCTION(execGetActivePixelPercentageFromTexture); \
	DECLARE_FUNCTION(execGetActivePixelPercentageFromRenderTarget2D); \
	DECLARE_FUNCTION(execGetGameDuration); \
	DECLARE_FUNCTION(execGetClosestPointsBetweenTwoComponents); \
	DECLARE_FUNCTION(execBytesToFloatInRangePure); \
	DECLARE_FUNCTION(execBytesToIntegerInRangePure); \
	DECLARE_FUNCTION(execBytesToIntegerInRange); \
	DECLARE_FUNCTION(execIsEditor);


#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_ACCESSORS
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDevToolGameplayStatics(); \
	friend struct Z_Construct_UClass_UDevToolGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UDevToolGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DevToolKit"), NO_API) \
	DECLARE_SERIALIZER(UDevToolGameplayStatics)


#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDevToolGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDevToolGameplayStatics(UDevToolGameplayStatics&&); \
	NO_API UDevToolGameplayStatics(const UDevToolGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDevToolGameplayStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDevToolGameplayStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDevToolGameplayStatics) \
	NO_API virtual ~UDevToolGameplayStatics();


#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_13_PROLOG
#define FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_SPARSE_DATA \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_ACCESSORS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_INCLASS_NO_PURE_DECLS \
	FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEVTOOLKIT_API UClass* StaticClass<class UDevToolGameplayStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
