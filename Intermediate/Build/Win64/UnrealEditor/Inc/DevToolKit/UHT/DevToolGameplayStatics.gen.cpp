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
	DEVTOOLKIT_API UClass* Z_Construct_UClass_UDevToolGameplayStatics();
	DEVTOOLKIT_API UClass* Z_Construct_UClass_UDevToolGameplayStatics_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DevToolKit();
// End Cross Module References
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_BeginIndex = { "BeginIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms, BeginIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms, EndIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_isDataBigEndian_SetBit(void* Obj)
	{
		((DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms*)Obj)->isDataBigEndian = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_isDataBigEndian = { "isDataBigEndian", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms), &Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_isDataBigEndian_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "BytesToFloatInRangePure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::DevToolGameplayStatics_eventBytesToFloatInRangePure_Parms), Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRange_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_BeginIndex = { "BeginIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRange_Parms, BeginIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRange_Parms, EndIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_isDataBigEndian_SetBit(void* Obj)
	{
		((DevToolGameplayStatics_eventBytesToIntegerInRange_Parms*)Obj)->isDataBigEndian = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_isDataBigEndian = { "isDataBigEndian", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DevToolGameplayStatics_eventBytesToIntegerInRange_Parms), &Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_isDataBigEndian_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "BytesToIntegerInRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::DevToolGameplayStatics_eventBytesToIntegerInRange_Parms), Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_BeginIndex = { "BeginIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms, BeginIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms, EndIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_isDataBigEndian_SetBit(void* Obj)
	{
		((DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms*)Obj)->isDataBigEndian = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_isDataBigEndian = { "isDataBigEndian", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms), &Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_isDataBigEndian_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "BytesToIntegerInRangePure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::DevToolGameplayStatics_eventBytesToIntegerInRangePure_Parms), Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure_Statics::FuncParams);
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
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DevToolGameplayStatics_eventIsEditor_Parms), &Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDevToolGameplayStatics" },
		{ "ModuleRelativePath", "Public/DevToolGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevToolGameplayStatics, nullptr, "IsEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::DevToolGameplayStatics_eventIsEditor_Parms), Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor_Statics::Function_MetaDataParams)) };
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UDevToolGameplayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_BytesToFloatInRangePure, "BytesToFloatInRangePure" }, // 1805134999
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRange, "BytesToIntegerInRange" }, // 612922543
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_BytesToIntegerInRangePure, "BytesToIntegerInRangePure" }, // 2518330825
		{ &Z_Construct_UFunction_UDevToolGameplayStatics_IsEditor, "IsEditor" }, // 3906595743
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevToolGameplayStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
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
		METADATA_PARAMS(Z_Construct_UClass_UDevToolGameplayStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDevToolGameplayStatics_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_ContentExamples52_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ContentExamples52_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDevToolGameplayStatics, UDevToolGameplayStatics::StaticClass, TEXT("UDevToolGameplayStatics"), &Z_Registration_Info_UClass_UDevToolGameplayStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDevToolGameplayStatics), 114570173U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ContentExamples52_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_2316086929(TEXT("/Script/DevToolKit"),
		Z_CompiledInDeferFile_FID_ContentExamples52_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ContentExamples52_Plugins_UnrealSwissKnife_Source_DevToolKit_Public_DevToolGameplayStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
