// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VVLF_MiniMap/Public/VVLF_MiniMapBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVLF_MiniMapBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VVLF_MiniMap();
	VVLF_MINIMAP_API UClass* Z_Construct_UClass_AVVLF_MiniMapBase();
	VVLF_MINIMAP_API UClass* Z_Construct_UClass_AVVLF_MiniMapBase_NoRegister();
	VVLF_MINIMAP_API UClass* Z_Construct_UClass_UMiniMapComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVVLF_MiniMapBase::execSetMaximumY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaximumY(Z_Param_MaxY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVVLF_MiniMapBase::execGetMaximumY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaximumY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVVLF_MiniMapBase::execSetMinimumY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimumY(Z_Param_MinY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVVLF_MiniMapBase::execGetMinimumY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinimumY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVVLF_MiniMapBase::execSetMaximumX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaximumX(Z_Param_MaxX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVVLF_MiniMapBase::execGetMaximumX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaximumX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVVLF_MiniMapBase::execSetMinimumX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimumX(Z_Param_MinX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVVLF_MiniMapBase::execGetMinimumX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinimumX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVVLF_MiniMapBase::execSetMapCentralPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_CentralPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapCentralPosition(Z_Param_CentralPosition);
		P_NATIVE_END;
	}
	void AVVLF_MiniMapBase::StaticRegisterNativesAVVLF_MiniMapBase()
	{
		UClass* Class = AVVLF_MiniMapBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaximumX", &AVVLF_MiniMapBase::execGetMaximumX },
			{ "GetMaximumY", &AVVLF_MiniMapBase::execGetMaximumY },
			{ "GetMinimumX", &AVVLF_MiniMapBase::execGetMinimumX },
			{ "GetMinimumY", &AVVLF_MiniMapBase::execGetMinimumY },
			{ "SetMapCentralPosition", &AVVLF_MiniMapBase::execSetMapCentralPosition },
			{ "SetMaximumX", &AVVLF_MiniMapBase::execSetMaximumX },
			{ "SetMaximumY", &AVVLF_MiniMapBase::execSetMaximumY },
			{ "SetMinimumX", &AVVLF_MiniMapBase::execSetMinimumX },
			{ "SetMinimumY", &AVVLF_MiniMapBase::execSetMinimumY },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX_Statics
	{
		struct VVLF_MiniMapBase_eventGetMaximumX_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VVLF_MiniMapBase_eventGetMaximumX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVVLF_MiniMapBase, nullptr, "GetMaximumX", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX_Statics::VVLF_MiniMapBase_eventGetMaximumX_Parms), Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY_Statics
	{
		struct VVLF_MiniMapBase_eventGetMaximumY_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VVLF_MiniMapBase_eventGetMaximumY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVVLF_MiniMapBase, nullptr, "GetMaximumY", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY_Statics::VVLF_MiniMapBase_eventGetMaximumY_Parms), Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX_Statics
	{
		struct VVLF_MiniMapBase_eventGetMinimumX_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VVLF_MiniMapBase_eventGetMinimumX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVVLF_MiniMapBase, nullptr, "GetMinimumX", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX_Statics::VVLF_MiniMapBase_eventGetMinimumX_Parms), Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY_Statics
	{
		struct VVLF_MiniMapBase_eventGetMinimumY_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VVLF_MiniMapBase_eventGetMinimumY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVVLF_MiniMapBase, nullptr, "GetMinimumY", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY_Statics::VVLF_MiniMapBase_eventGetMinimumY_Parms), Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition_Statics
	{
		struct VVLF_MiniMapBase_eventSetMapCentralPosition_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition_Statics::NewProp_CentralPosition = { "CentralPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VVLF_MiniMapBase_eventSetMapCentralPosition_Parms, CentralPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition_Statics::NewProp_CentralPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVVLF_MiniMapBase, nullptr, "SetMapCentralPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition_Statics::VVLF_MiniMapBase_eventSetMapCentralPosition_Parms), Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX_Statics
	{
		struct VVLF_MiniMapBase_eventSetMaximumX_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX_Statics::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VVLF_MiniMapBase_eventSetMaximumX_Parms, MaxX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX_Statics::NewProp_MaxX,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVVLF_MiniMapBase, nullptr, "SetMaximumX", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX_Statics::VVLF_MiniMapBase_eventSetMaximumX_Parms), Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY_Statics
	{
		struct VVLF_MiniMapBase_eventSetMaximumY_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY_Statics::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VVLF_MiniMapBase_eventSetMaximumY_Parms, MaxY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY_Statics::NewProp_MaxY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVVLF_MiniMapBase, nullptr, "SetMaximumY", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY_Statics::VVLF_MiniMapBase_eventSetMaximumY_Parms), Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX_Statics
	{
		struct VVLF_MiniMapBase_eventSetMinimumX_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX_Statics::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VVLF_MiniMapBase_eventSetMinimumX_Parms, MinX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX_Statics::NewProp_MinX,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVVLF_MiniMapBase, nullptr, "SetMinimumX", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX_Statics::VVLF_MiniMapBase_eventSetMinimumX_Parms), Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY_Statics
	{
		struct VVLF_MiniMapBase_eventSetMinimumY_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY_Statics::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VVLF_MiniMapBase_eventSetMinimumY_Parms, MinY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY_Statics::NewProp_MinY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVVLF_MiniMapBase, nullptr, "SetMinimumY", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY_Statics::VVLF_MiniMapBase_eventSetMinimumY_Parms), Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVVLF_MiniMapBase);
	UClass* Z_Construct_UClass_AVVLF_MiniMapBase_NoRegister()
	{
		return AVVLF_MiniMapBase::StaticClass();
	}
	struct Z_Construct_UClass_AVVLF_MiniMapBase_Statics
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
	UObject* (*const Z_Construct_UClass_AVVLF_MiniMapBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VVLF_MiniMap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVVLF_MiniMapBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumX, "GetMaximumX" }, // 420250044
		{ &Z_Construct_UFunction_AVVLF_MiniMapBase_GetMaximumY, "GetMaximumY" }, // 2928933867
		{ &Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumX, "GetMinimumX" }, // 1643615683
		{ &Z_Construct_UFunction_AVVLF_MiniMapBase_GetMinimumY, "GetMinimumY" }, // 4079702785
		{ &Z_Construct_UFunction_AVVLF_MiniMapBase_SetMapCentralPosition, "SetMapCentralPosition" }, // 1412280066
		{ &Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumX, "SetMaximumX" }, // 3129888747
		{ &Z_Construct_UFunction_AVVLF_MiniMapBase_SetMaximumY, "SetMaximumY" }, // 779363509
		{ &Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumX, "SetMinimumX" }, // 1141754302
		{ &Z_Construct_UFunction_AVVLF_MiniMapBase_SetMinimumY, "SetMinimumY" }, // 3023530872
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVVLF_MiniMapBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VVLF_MiniMapBase.h" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MiniMapComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MiniMapComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MiniMapComponent = { "MiniMapComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVVLF_MiniMapBase, MiniMapComponent), Z_Construct_UClass_UMiniMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MiniMapComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MiniMapComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_CameraSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MiniMapComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_CameraSpringArm = { "CameraSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVVLF_MiniMapBase, CameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_CameraSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_CameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MiniMapComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVVLF_MiniMapBase, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_BoundsBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MiniMapComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_BoundsBox = { "BoundsBox", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVVLF_MiniMapBase, BoundsBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_BoundsBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_BoundsBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MapCentralPosition_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TransformFromBounds" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MapCentralPosition = { "MapCentralPosition", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVVLF_MiniMapBase, MapCentralPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MapCentralPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MapCentralPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MinimumX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TransformFromBounds" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MinimumX = { "MinimumX", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVVLF_MiniMapBase, MinimumX), METADATA_PARAMS(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MinimumX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MinimumX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MaximumX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TransformFromBounds" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MaximumX = { "MaximumX", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVVLF_MiniMapBase, MaximumX), METADATA_PARAMS(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MaximumX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MaximumX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MinimumY_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TransformFromBounds" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MinimumY = { "MinimumY", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVVLF_MiniMapBase, MinimumY), METADATA_PARAMS(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MinimumY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MinimumY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MaximumY_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TransformFromBounds" },
		{ "ModuleRelativePath", "Public/VVLF_MiniMapBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MaximumY = { "MaximumY", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVVLF_MiniMapBase, MaximumY), METADATA_PARAMS(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MaximumY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MaximumY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVVLF_MiniMapBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MiniMapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_CameraSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_CaptureComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_BoundsBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MapCentralPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MinimumX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MaximumX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MinimumY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVVLF_MiniMapBase_Statics::NewProp_MaximumY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVVLF_MiniMapBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVVLF_MiniMapBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVVLF_MiniMapBase_Statics::ClassParams = {
		&AVVLF_MiniMapBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVVLF_MiniMapBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVVLF_MiniMapBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVVLF_MiniMapBase()
	{
		if (!Z_Registration_Info_UClass_AVVLF_MiniMapBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVVLF_MiniMapBase.OuterSingleton, Z_Construct_UClass_AVVLF_MiniMapBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVVLF_MiniMapBase.OuterSingleton;
	}
	template<> VVLF_MINIMAP_API UClass* StaticClass<AVVLF_MiniMapBase>()
	{
		return AVVLF_MiniMapBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVVLF_MiniMapBase);
	AVVLF_MiniMapBase::~AVVLF_MiniMapBase() {}
	struct Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_VVLF_MiniMapBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_VVLF_MiniMapBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVVLF_MiniMapBase, AVVLF_MiniMapBase::StaticClass, TEXT("AVVLF_MiniMapBase"), &Z_Registration_Info_UClass_AVVLF_MiniMapBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVVLF_MiniMapBase), 3749689516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_VVLF_MiniMapBase_h_897142085(TEXT("/Script/VVLF_MiniMap"),
		Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_VVLF_MiniMapBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_VVLF_MiniMapBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
