// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniMap/Public/MiniMapBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniMapBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	MINIMAP_API UClass* Z_Construct_UClass_AMiniMapBase();
	MINIMAP_API UClass* Z_Construct_UClass_AMiniMapBase_NoRegister();
	MINIMAP_API UClass* Z_Construct_UClass_UMiniMapComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MiniMap();
// End Cross Module References
	DEFINE_FUNCTION(AMiniMapBase::execSetMaximumY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaximumY(Z_Param_MaxY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMiniMapBase::execGetMaximumY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaximumY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMiniMapBase::execSetMinimumY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimumY(Z_Param_MinY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMiniMapBase::execGetMinimumY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinimumY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMiniMapBase::execSetMaximumX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaximumX(Z_Param_MaxX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMiniMapBase::execGetMaximumX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaximumX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMiniMapBase::execSetMinimumX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimumX(Z_Param_MinX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMiniMapBase::execGetMinimumX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinimumX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMiniMapBase::execSetMapCentralPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_CentralPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapCentralPosition(Z_Param_CentralPosition);
		P_NATIVE_END;
	}
	void AMiniMapBase::StaticRegisterNativesAMiniMapBase()
	{
		UClass* Class = AMiniMapBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaximumX", &AMiniMapBase::execGetMaximumX },
			{ "GetMaximumY", &AMiniMapBase::execGetMaximumY },
			{ "GetMinimumX", &AMiniMapBase::execGetMinimumX },
			{ "GetMinimumY", &AMiniMapBase::execGetMinimumY },
			{ "SetMapCentralPosition", &AMiniMapBase::execSetMapCentralPosition },
			{ "SetMaximumX", &AMiniMapBase::execSetMaximumX },
			{ "SetMaximumY", &AMiniMapBase::execSetMaximumY },
			{ "SetMinimumX", &AMiniMapBase::execSetMinimumX },
			{ "SetMinimumY", &AMiniMapBase::execSetMinimumY },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics
	{
		struct MiniMapBase_eventGetMaximumX_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniMapBase_eventGetMaximumX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapBase, nullptr, "GetMaximumX", nullptr, nullptr, Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::MiniMapBase_eventGetMaximumX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::MiniMapBase_eventGetMaximumX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMiniMapBase_GetMaximumX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniMapBase_GetMaximumX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics
	{
		struct MiniMapBase_eventGetMaximumY_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniMapBase_eventGetMaximumY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapBase, nullptr, "GetMaximumY", nullptr, nullptr, Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::MiniMapBase_eventGetMaximumY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::MiniMapBase_eventGetMaximumY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMiniMapBase_GetMaximumY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniMapBase_GetMaximumY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics
	{
		struct MiniMapBase_eventGetMinimumX_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniMapBase_eventGetMinimumX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapBase, nullptr, "GetMinimumX", nullptr, nullptr, Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::MiniMapBase_eventGetMinimumX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::MiniMapBase_eventGetMinimumX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMiniMapBase_GetMinimumX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniMapBase_GetMinimumX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics
	{
		struct MiniMapBase_eventGetMinimumY_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniMapBase_eventGetMinimumY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapBase, nullptr, "GetMinimumY", nullptr, nullptr, Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::MiniMapBase_eventGetMinimumY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::MiniMapBase_eventGetMinimumY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMiniMapBase_GetMinimumY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniMapBase_GetMinimumY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics
	{
		struct MiniMapBase_eventSetMapCentralPosition_Parms
		{
			FVector CentralPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CentralPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::NewProp_CentralPosition = { "CentralPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniMapBase_eventSetMapCentralPosition_Parms, CentralPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::NewProp_CentralPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapBase, nullptr, "SetMapCentralPosition", nullptr, nullptr, Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::MiniMapBase_eventSetMapCentralPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::MiniMapBase_eventSetMapCentralPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics
	{
		struct MiniMapBase_eventSetMaximumX_Parms
		{
			float MaxX;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniMapBase_eventSetMaximumX_Parms, MaxX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::NewProp_MaxX,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapBase, nullptr, "SetMaximumX", nullptr, nullptr, Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::MiniMapBase_eventSetMaximumX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::MiniMapBase_eventSetMaximumX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMiniMapBase_SetMaximumX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniMapBase_SetMaximumX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics
	{
		struct MiniMapBase_eventSetMaximumY_Parms
		{
			float MaxY;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniMapBase_eventSetMaximumY_Parms, MaxY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::NewProp_MaxY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapBase, nullptr, "SetMaximumY", nullptr, nullptr, Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::MiniMapBase_eventSetMaximumY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::MiniMapBase_eventSetMaximumY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMiniMapBase_SetMaximumY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniMapBase_SetMaximumY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics
	{
		struct MiniMapBase_eventSetMinimumX_Parms
		{
			float MinX;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniMapBase_eventSetMinimumX_Parms, MinX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::NewProp_MinX,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapBase, nullptr, "SetMinimumX", nullptr, nullptr, Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::MiniMapBase_eventSetMinimumX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::MiniMapBase_eventSetMinimumX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMiniMapBase_SetMinimumX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniMapBase_SetMinimumX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics
	{
		struct MiniMapBase_eventSetMinimumY_Parms
		{
			float MinY;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiniMapBase_eventSetMinimumY_Parms, MinY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::NewProp_MinY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapBase, nullptr, "SetMinimumY", nullptr, nullptr, Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::MiniMapBase_eventSetMinimumY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::MiniMapBase_eventSetMinimumY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMiniMapBase_SetMinimumY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMiniMapBase_SetMinimumY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMiniMapBase);
	UClass* Z_Construct_UClass_AMiniMapBase_NoRegister()
	{
		return AMiniMapBase::StaticClass();
	}
	struct Z_Construct_UClass_AMiniMapBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MiniMapComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundsBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapCentralPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapCentralPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMiniMapBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniMap,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMiniMapBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMiniMapBase_GetMaximumX, "GetMaximumX" }, // 623152001
		{ &Z_Construct_UFunction_AMiniMapBase_GetMaximumY, "GetMaximumY" }, // 2559137994
		{ &Z_Construct_UFunction_AMiniMapBase_GetMinimumX, "GetMinimumX" }, // 3727951409
		{ &Z_Construct_UFunction_AMiniMapBase_GetMinimumY, "GetMinimumY" }, // 2783206919
		{ &Z_Construct_UFunction_AMiniMapBase_SetMapCentralPosition, "SetMapCentralPosition" }, // 2089575655
		{ &Z_Construct_UFunction_AMiniMapBase_SetMaximumX, "SetMaximumX" }, // 2096759209
		{ &Z_Construct_UFunction_AMiniMapBase_SetMaximumY, "SetMaximumY" }, // 2272633892
		{ &Z_Construct_UFunction_AMiniMapBase_SetMinimumX, "SetMinimumX" }, // 1355855150
		{ &Z_Construct_UFunction_AMiniMapBase_SetMinimumY, "SetMinimumY" }, // 311739370
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniMapBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MiniMapBase.h" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MiniMapComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MiniMapComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MiniMapComponent = { "MiniMapComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniMapBase, MiniMapComponent), Z_Construct_UClass_UMiniMapComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MiniMapComponent_MetaData), Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MiniMapComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniMapBase_Statics::NewProp_CameraSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MiniMapComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniMapBase_Statics::NewProp_CameraSpringArm = { "CameraSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniMapBase, CameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::NewProp_CameraSpringArm_MetaData), Z_Construct_UClass_AMiniMapBase_Statics::NewProp_CameraSpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniMapBase_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MiniMapComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniMapBase_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniMapBase, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::NewProp_CaptureComponent_MetaData), Z_Construct_UClass_AMiniMapBase_Statics::NewProp_CaptureComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniMapBase_Statics::NewProp_BoundsBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MiniMapComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniMapBase_Statics::NewProp_BoundsBox = { "BoundsBox", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniMapBase, BoundsBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::NewProp_BoundsBox_MetaData), Z_Construct_UClass_AMiniMapBase_Statics::NewProp_BoundsBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MapCentralPosition_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TransformFromBounds" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MapCentralPosition = { "MapCentralPosition", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniMapBase, MapCentralPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MapCentralPosition_MetaData), Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MapCentralPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MinimumX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TransformFromBounds" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MinimumX = { "MinimumX", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniMapBase, MinimumX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MinimumX_MetaData), Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MinimumX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MaximumX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TransformFromBounds" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MaximumX = { "MaximumX", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniMapBase, MaximumX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MaximumX_MetaData), Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MaximumX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MinimumY_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TransformFromBounds" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MinimumY = { "MinimumY", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniMapBase, MinimumY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MinimumY_MetaData), Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MinimumY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MaximumY_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TransformFromBounds" },
		{ "ModuleRelativePath", "Public/MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MaximumY = { "MaximumY", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMiniMapBase, MaximumY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MaximumY_MetaData), Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MaximumY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMiniMapBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MiniMapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniMapBase_Statics::NewProp_CameraSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniMapBase_Statics::NewProp_CaptureComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniMapBase_Statics::NewProp_BoundsBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MapCentralPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MinimumX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MaximumX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MinimumY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniMapBase_Statics::NewProp_MaximumY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMiniMapBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiniMapBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMiniMapBase_Statics::ClassParams = {
		&AMiniMapBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMiniMapBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMiniMapBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMiniMapBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMiniMapBase()
	{
		if (!Z_Registration_Info_UClass_AMiniMapBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMiniMapBase.OuterSingleton, Z_Construct_UClass_AMiniMapBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMiniMapBase.OuterSingleton;
	}
	template<> MINIMAP_API UClass* StaticClass<AMiniMapBase>()
	{
		return AMiniMapBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMiniMapBase);
	AMiniMapBase::~AMiniMapBase() {}
	struct Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMiniMapBase, AMiniMapBase::StaticClass, TEXT("AMiniMapBase"), &Z_Registration_Info_UClass_AMiniMapBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMiniMapBase), 2693339239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapBase_h_935815963(TEXT("/Script/MiniMap"),
		Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealSwissKnife_Source_MiniMap_Public_MiniMapBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
