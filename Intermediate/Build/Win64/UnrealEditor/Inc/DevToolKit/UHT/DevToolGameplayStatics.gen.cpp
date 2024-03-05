// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DevToolKit/Public/DevToolGameplayStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevToolGameplayStatics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEVTOOLKIT_API UClass* Z_Construct_UClass_UDevToolGameplayStatics();
	DEVTOOLKIT_API UClass* Z_Construct_UClass_UDevToolGameplayStatics_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DevToolKit();
// End Cross Module References
	DEFINE_FUNCTION(UDevToolGameplayStatics::execGetMachineID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDevToolGameplayStatics::GetMachineID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDevToolGameplayStatics::execGetActivePixelPercentageFromTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_PROPERTY(FFloatProperty,Z_Param_threshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDevToolGameplayStatics::GetActivePixelPercentageFromTexture(Z_Param_Texture,Z_Param_threshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDevToolGameplayStatics::execGetActivePixelPercentageFromRenderTarget2D)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_threshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDevToolGameplayStatics::GetActivePixelPercentageFromRenderTarget2D(Z_Param_RenderTarget,Z_Param_threshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDevToolGameplayStatics::execGetGameDuration)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TotalDurationSeconds);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Hours);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Minutes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Seconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDevToolGameplayStatics::GetGameDuration(Z_Param_WorldContextObject,Z_Param_Out_TotalDurationSeconds,Z_Param_Out_Hours,Z_Param_Out_Minutes,Z_Param_Out_Seconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDevToolGameplayStatics::execGetClosestPointsBetweenTwoComponents)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Comp1);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Comp2);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PA);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PB);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDevToolGameplayStatics::GetClosestPointsBetweenTwoComponents(Z_Param_Comp1,Z_Param_Comp2,Z_Param_Out_PA,Z_Param_Out_PB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDevToolGameplayStatics::execBytesToFloatInRangePure)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_GET_PROPERTY(FIntProperty,Z_Param_BeginIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_GET_UBOOL(Z_Param_isDataBigEndian);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDevToolGameplayStatics::BytesToFloatInRangePure(Z_Param_Out_Bytes,Z_Param_BeginIndex,Z_Param_EndIndex,Z_Param_isDataBigEndian);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDevToolGameplayStatics::execBytesToIntegerInRangePure)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_GET_PROPERTY(FIntProperty,Z_Param_BeginIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_GET_UBOOL(Z_Param_isDataBigEndian);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDevToolGameplayStatics::BytesToIntegerInRangePure(Z_Param_Out_Bytes,Z_Param_BeginIndex,Z_Param_EndIndex,Z_Param_isDataBigEndian);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDevToolGameplayStatics::execBytesToIntegerInRange)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_GET_PROPERTY(FIntProperty,Z_Param_BeginIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_GET_UBOOL(Z_Param_isDataBigEndian);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDevToolGameplayStatics::BytesToIntegerInRange(Z_Param_Out_Bytes,Z_Param_BeginIndex,Z_Param_EndIndex,Z_Param_isDataBigEndian);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDevToolGameplayStatics::execIsEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDevToolGameplayStatics::IsEditor();
		P_NATIVE_END;
	}
	void UDevToolGameplayStatics::StaticRegisterNativesUDevToolGameplayStatics()
	{
		UClass* Class = UDevToolGameplayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BytesToFloatInRangePure", &UDevToolGameplayStatics::execBytesToFloatInRangePure },
			{ "BytesToIntegerInRange", &UDevToolGameplayStatics::execBytesToIntegerInRange },
			{ "BytesToIntegerInRangePure", &UDevToolGameplayStatics::execBytesToIntegerInRangePure },
			{ "GetActivePixelPercentageFromRenderTarget2D", &UDevToolGameplayStatics::execGetActivePixelPercentageFromRenderTarget2D },
			{ "GetActivePixelPercentageFromTexture", &UDevToolGameplayStatics::execGetActivePixelPercentageFromTexture },
			{ "GetClosestPointsBetweenTwoComponents", &UDevToolGameplayStatics::execGetClosestPointsBetweenTwoComponents },
			{ "GetGameDuration", &UDevToolGameplayStatics::execGetGameDuration },
			{ "GetMachineID", &UDevToolGameplayStatics::execGetMachineID },
			{ "IsEditor", &UDevToolGameplayStatics::execIsEditor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics
	{
		struct DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms
		{
			TArray<uint8> Bytes;
			int32 BeginIndex;
			int32 EndIndex;
			bool isDataBigEndian;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BeginIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static void NewProp_isDataBigEndian_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDataBigEndian;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_Bytes_MetaData), Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_Bytes_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_BeginIndex = { "BeginIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms, BeginIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms, EndIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_isDataBigEndian_SetBit(void* Obj)
	{
		((DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms*)Obj)->isDataBigEndian = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_isDataBigEndian = { "isDataBigEndian", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms), &Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_isDataBigEndian_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_BeginIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_EndIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_isDataBigEndian,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDevToolGameplayStatics|Serial" },
		{ "ModuleRelativePath", "Public/DevToolGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "BytesToFloatInRangePure", nullptr, nullptr, Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics
	{
		struct DevToolGameplayStatics_eventBytesToIntegerInRange_Parms
		{
			TArray<uint8> Bytes;
			int32 BeginIndex;
			int32 EndIndex;
			bool isDataBigEndian;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BeginIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static void NewProp_isDataBigEndian_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDataBigEndian;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRange_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_Bytes_MetaData), Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_Bytes_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_BeginIndex = { "BeginIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRange_Parms, BeginIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRange_Parms, EndIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_isDataBigEndian_SetBit(void* Obj)
	{
		((DevToolGameplayStatics_eventBytesToIntegerInRange_Parms*)Obj)->isDataBigEndian = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_isDataBigEndian = { "isDataBigEndian", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DevToolGameplayStatics_eventBytesToIntegerInRange_Parms), &Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_isDataBigEndian_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_BeginIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_EndIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_isDataBigEndian,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDevToolGameplayStatics|Serial" },
		{ "ModuleRelativePath", "Public/DevToolGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "BytesToIntegerInRange", nullptr, nullptr, Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::DevToolGameplayStatics_eventBytesToIntegerInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::DevToolGameplayStatics_eventBytesToIntegerInRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics
	{
		struct DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms
		{
			TArray<uint8> Bytes;
			int32 BeginIndex;
			int32 EndIndex;
			bool isDataBigEndian;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BeginIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static void NewProp_isDataBigEndian_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDataBigEndian;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_Bytes_MetaData), Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_Bytes_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_BeginIndex = { "BeginIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms, BeginIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms, EndIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_isDataBigEndian_SetBit(void* Obj)
	{
		((DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms*)Obj)->isDataBigEndian = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_isDataBigEndian = { "isDataBigEndian", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms), &Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_isDataBigEndian_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_BeginIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_EndIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_isDataBigEndian,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDevToolGameplayStatics|Serial" },
		{ "ModuleRelativePath", "Public/DevToolGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "BytesToIntegerInRangePure", nullptr, nullptr, Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics
	{
		struct DevToolGameplayStatics_eventGetActivePixelPercentageFromRenderTarget2D_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			float threshold;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_threshold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetActivePixelPercentageFromRenderTarget2D_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::NewProp_threshold = { "threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetActivePixelPercentageFromRenderTarget2D_Parms, threshold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetActivePixelPercentageFromRenderTarget2D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::NewProp_threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDevToolGameplayStatics|Pixel" },
		{ "ModuleRelativePath", "Public/DevToolGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "GetActivePixelPercentageFromRenderTarget2D", nullptr, nullptr, Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::DevToolGameplayStatics_eventGetActivePixelPercentageFromRenderTarget2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::DevToolGameplayStatics_eventGetActivePixelPercentageFromRenderTarget2D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics
	{
		struct DevToolGameplayStatics_eventGetActivePixelPercentageFromTexture_Parms
		{
			UTexture2D* Texture;
			float threshold;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_threshold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetActivePixelPercentageFromTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::NewProp_threshold = { "threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetActivePixelPercentageFromTexture_Parms, threshold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetActivePixelPercentageFromTexture_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::NewProp_threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDevToolGameplayStatics|Pixel" },
		{ "ModuleRelativePath", "Public/DevToolGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "GetActivePixelPercentageFromTexture", nullptr, nullptr, Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::DevToolGameplayStatics_eventGetActivePixelPercentageFromTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::DevToolGameplayStatics_eventGetActivePixelPercentageFromTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics
	{
		struct DevToolGameplayStatics_eventGetClosestPointsBetweenTwoComponents_Parms
		{
			UPrimitiveComponent* Comp1;
			UPrimitiveComponent* Comp2;
			FVector PA;
			FVector PB;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comp1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Comp1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comp2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Comp2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_Comp1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_Comp1 = { "Comp1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetClosestPointsBetweenTwoComponents_Parms, Comp1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_Comp1_MetaData), Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_Comp1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_Comp2_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_Comp2 = { "Comp2", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetClosestPointsBetweenTwoComponents_Parms, Comp2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_Comp2_MetaData), Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_Comp2_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_PA = { "PA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetClosestPointsBetweenTwoComponents_Parms, PA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_PB = { "PB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetClosestPointsBetweenTwoComponents_Parms, PB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_Comp1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_Comp2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_PA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::NewProp_PB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDevToolGameplayStatics" },
		{ "ModuleRelativePath", "Public/DevToolGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "GetClosestPointsBetweenTwoComponents", nullptr, nullptr, Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::DevToolGameplayStatics_eventGetClosestPointsBetweenTwoComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::DevToolGameplayStatics_eventGetClosestPointsBetweenTwoComponents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics
	{
		struct DevToolGameplayStatics_eventGetGameDuration_Parms
		{
			UObject* WorldContextObject;
			int32 TotalDurationSeconds;
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalDurationSeconds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Hours;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minutes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetGameDuration_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::NewProp_TotalDurationSeconds = { "TotalDurationSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetGameDuration_Parms, TotalDurationSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::NewProp_Hours = { "Hours", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetGameDuration_Parms, Hours), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetGameDuration_Parms, Minutes), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetGameDuration_Parms, Seconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::NewProp_TotalDurationSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::NewProp_Hours,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::NewProp_Minutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDevToolGameplayStatics" },
		{ "ModuleRelativePath", "Public/DevToolGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "GetGameDuration", nullptr, nullptr, Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::DevToolGameplayStatics_eventGetGameDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::DevToolGameplayStatics_eventGetGameDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics
	{
		struct DevToolGameplayStatics_eventGetMachineID_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DevToolGameplayStatics_eventGetMachineID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDevToolGameplayStatics|Runtime" },
		{ "ModuleRelativePath", "Public/DevToolGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "GetMachineID", nullptr, nullptr, Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::DevToolGameplayStatics_eventGetMachineID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::DevToolGameplayStatics_eventGetMachineID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics
	{
		struct DevToolGameplayStatics_eventIsEditor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DevToolGameplayStatics_eventIsEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DevToolGameplayStatics_eventIsEditor_Parms), &Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDevToolGameplayStatics|Editor" },
		{ "ModuleRelativePath", "Public/DevToolGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "IsEditor", nullptr, nullptr, Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::DevToolGameplayStatics_eventIsEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::DevToolGameplayStatics_eventIsEditor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDevToolGameplayStatics);
	UClass* Z_Construct_UClass_UDevToolGameplayStatics_NoRegister()
	{
		return UDevToolGameplayStatics::StaticClass();
	}
	struct Z_Construct_UClass_UDevToolGameplayStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDevToolGameplayStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DevToolKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDevToolGameplayStatics_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDevToolGameplayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure, "BytesToFloatInRangePure" }, // 12095163
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange, "BytesToIntegerInRange" }, // 3423547037
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure, "BytesToIntegerInRangePure" }, // 2910695007
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromRenderTarget2D, "GetActivePixelPercentageFromRenderTarget2D" }, // 68359290
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_GetActivePixelPercentageFromTexture, "GetActivePixelPercentageFromTexture" }, // 802438669
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_GetClosestPointsBetweenTwoComponents, "GetClosestPointsBetweenTwoComponents" }, // 1808773704
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_GetGameDuration, "GetGameDuration" }, // 3694327457
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_GetMachineID, "GetMachineID" }, // 3205520881
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor, "IsEditor" }, // 1257883806
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDevToolGameplayStatics_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevToolGameplayStatics_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DevToolGameplayStatics.h" },
		{ "ModuleRelativePath", "Public/DevToolGameplayStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDevToolGameplayStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDevToolGameplayStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDevToolGameplayStatics_Statics::ClassParams = {
		&UDevToolGameplayStatics::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDevToolGameplayStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UDevToolGameplayStatics_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDevToolGameplayStatics()
	{
		if (!Z_Registration_Info_UClass_UDevToolGameplayStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDevToolGameplayStatics.OuterSingleton, Z_Construct_UClass_UDevToolGameplayStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDevToolGameplayStatics.OuterSingleton;
	}
	template<> DEVTOOLKIT_API UClass* StaticClass<UDevToolGameplayStatics>()
	{
		return UDevToolGameplayStatics::StaticClass();
	}
	UDevToolGameplayStatics::UDevToolGameplayStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDevToolGameplayStatics);
	UDevToolGameplayStatics::~UDevToolGameplayStatics() {}
	struct Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDevToolGameplayStatics, UDevToolGameplayStatics::StaticClass, TEXT("UDevToolGameplayStatics"), &Z_Registration_Info_UClass_UDevToolGameplayStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDevToolGameplayStatics), 1337490732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_2853389685(TEXT("/Script/DevToolKit"),
		Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FortniteGame5_3_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
