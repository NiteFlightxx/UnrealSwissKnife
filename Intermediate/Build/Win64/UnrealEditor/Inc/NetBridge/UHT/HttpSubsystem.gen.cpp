// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetBridge/Public/HttpSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	NETBRIDGE_API UClass* Z_Construct_UClass_UHttpSubsystem();
	NETBRIDGE_API UClass* Z_Construct_UClass_UHttpSubsystem_NoRegister();
	NETBRIDGE_API UEnum* Z_Construct_UEnum_NetBridge_ERequestContentType();
	NETBRIDGE_API UEnum* Z_Construct_UEnum_NetBridge_ERequestVerb();
	UPackage* Z_Construct_UPackage__Script_NetBridge();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERequestVerb;
	static UEnum* ERequestVerb_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERequestVerb.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERequestVerb.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetBridge_ERequestVerb, Z_Construct_UPackage__Script_NetBridge(), TEXT("ERequestVerb"));
		}
		return Z_Registration_Info_UEnum_ERequestVerb.OuterSingleton;
	}
	template<> NETBRIDGE_API UEnum* StaticEnum<ERequestVerb>()
	{
		return ERequestVerb_StaticEnum();
	}
	struct Z_Construct_UEnum_NetBridge_ERequestVerb_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetBridge_ERequestVerb_Statics::Enumerators[] = {
		{ "ERequestVerb::GET", (int64)ERequestVerb::GET },
		{ "ERequestVerb::POST", (int64)ERequestVerb::POST },
		{ "ERequestVerb::PUT", (int64)ERequestVerb::PUT },
		{ "ERequestVerb::DEL", (int64)ERequestVerb::DEL },
		{ "ERequestVerb::CUSTOM", (int64)ERequestVerb::CUSTOM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetBridge_ERequestVerb_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "CUSTOM.Comment", "/** Set CUSTOM verb by SetCustomVerb() function */" },
		{ "CUSTOM.Name", "ERequestVerb::CUSTOM" },
		{ "CUSTOM.ToolTip", "Set CUSTOM verb by SetCustomVerb() function" },
		{ "DEL.Comment", "/**\n * \n */" },
		{ "DEL.DisplayName", "DELETE" },
		{ "DEL.Name", "ERequestVerb::DEL" },
		{ "GET.Comment", "/**\n * \n */" },
		{ "GET.Name", "ERequestVerb::GET" },
		{ "ModuleRelativePath", "Public/HttpSubsystem.h" },
		{ "POST.Comment", "/**\n * \n */" },
		{ "POST.Name", "ERequestVerb::POST" },
		{ "PUT.Comment", "/**\n * \n */" },
		{ "PUT.Name", "ERequestVerb::PUT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetBridge_ERequestVerb_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetBridge,
		nullptr,
		"ERequestVerb",
		"ERequestVerb",
		Z_Construct_UEnum_NetBridge_ERequestVerb_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetBridge_ERequestVerb_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NetBridge_ERequestVerb_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetBridge_ERequestVerb_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetBridge_ERequestVerb()
	{
		if (!Z_Registration_Info_UEnum_ERequestVerb.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERequestVerb.InnerSingleton, Z_Construct_UEnum_NetBridge_ERequestVerb_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERequestVerb.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERequestContentType;
	static UEnum* ERequestContentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERequestContentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERequestContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetBridge_ERequestContentType, Z_Construct_UPackage__Script_NetBridge(), TEXT("ERequestContentType"));
		}
		return Z_Registration_Info_UEnum_ERequestContentType.OuterSingleton;
	}
	template<> NETBRIDGE_API UEnum* StaticEnum<ERequestContentType>()
	{
		return ERequestContentType_StaticEnum();
	}
	struct Z_Construct_UEnum_NetBridge_ERequestContentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetBridge_ERequestContentType_Statics::Enumerators[] = {
		{ "ERequestContentType::x_www_form_urlencoded_url", (int64)ERequestContentType::x_www_form_urlencoded_url },
		{ "ERequestContentType::x_www_form_urlencoded_body", (int64)ERequestContentType::x_www_form_urlencoded_body },
		{ "ERequestContentType::json", (int64)ERequestContentType::json },
		{ "ERequestContentType::binary", (int64)ERequestContentType::binary },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetBridge_ERequestContentType_Statics::Enum_MetaDataParams[] = {
		{ "binary.Name", "ERequestContentType::binary" },
		{ "BlueprintType", "true" },
		{ "json.Name", "ERequestContentType::json" },
		{ "ModuleRelativePath", "Public/HttpSubsystem.h" },
		{ "x_www_form_urlencoded_body.DisplayName", "x-www-form-urlencoded (Request Body)" },
		{ "x_www_form_urlencoded_body.Name", "ERequestContentType::x_www_form_urlencoded_body" },
		{ "x_www_form_urlencoded_url.DisplayName", "x-www-form-urlencoded (URL)" },
		{ "x_www_form_urlencoded_url.Name", "ERequestContentType::x_www_form_urlencoded_url" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetBridge_ERequestContentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetBridge,
		nullptr,
		"ERequestContentType",
		"ERequestContentType",
		Z_Construct_UEnum_NetBridge_ERequestContentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetBridge_ERequestContentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NetBridge_ERequestContentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetBridge_ERequestContentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetBridge_ERequestContentType()
	{
		if (!Z_Registration_Info_UEnum_ERequestContentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERequestContentType.InnerSingleton, Z_Construct_UEnum_NetBridge_ERequestContentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERequestContentType.InnerSingleton;
	}
	DEFINE_FUNCTION(UHttpSubsystem::execHttpRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_ENUM(ERequestVerb,Z_Param_Verb);
		P_GET_ENUM(ERequestContentType,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HttpRequest(Z_Param_Url,ERequestVerb(Z_Param_Verb),ERequestContentType(Z_Param_ContentType));
		P_NATIVE_END;
	}
	void UHttpSubsystem::StaticRegisterNativesUHttpSubsystem()
	{
		UClass* Class = UHttpSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HttpRequest", &UHttpSubsystem::execHttpRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics
	{
		struct HttpSubsystem_eventHttpRequest_Parms
		{
			FString Url;
			ERequestVerb Verb;
			ERequestContentType ContentType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpSubsystem_eventHttpRequest_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_Verb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpSubsystem_eventHttpRequest_Parms, Verb), Z_Construct_UEnum_NetBridge_ERequestVerb, METADATA_PARAMS(Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_Verb_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_Verb_MetaData)) }; // 832767904
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpSubsystem_eventHttpRequest_Parms, ContentType), Z_Construct_UEnum_NetBridge_ERequestContentType, METADATA_PARAMS(Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_ContentType_MetaData)) }; // 129934033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_Verb_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_Verb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::NewProp_ContentType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Http" },
		{ "CPP_Default_ContentType", "json" },
		{ "ModuleRelativePath", "Public/HttpSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpSubsystem, nullptr, "HttpRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::HttpSubsystem_eventHttpRequest_Parms), Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpSubsystem_HttpRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpSubsystem_HttpRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpSubsystem);
	UClass* Z_Construct_UClass_UHttpSubsystem_NoRegister()
	{
		return UHttpSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UHttpSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_NetBridge,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpSubsystem_HttpRequest, "HttpRequest" }, // 1893017248
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpSubsystem.h" },
		{ "ModuleRelativePath", "Public/HttpSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpSubsystem_Statics::ClassParams = {
		&UHttpSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHttpSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpSubsystem()
	{
		if (!Z_Registration_Info_UClass_UHttpSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpSubsystem.OuterSingleton, Z_Construct_UClass_UHttpSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpSubsystem.OuterSingleton;
	}
	template<> NETBRIDGE_API UClass* StaticClass<UHttpSubsystem>()
	{
		return UHttpSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpSubsystem);
	UHttpSubsystem::~UHttpSubsystem() {}
	struct Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_Statics::EnumInfo[] = {
		{ ERequestVerb_StaticEnum, TEXT("ERequestVerb"), &Z_Registration_Info_UEnum_ERequestVerb, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 832767904U) },
		{ ERequestContentType_StaticEnum, TEXT("ERequestContentType"), &Z_Registration_Info_UEnum_ERequestContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 129934033U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHttpSubsystem, UHttpSubsystem::StaticClass, TEXT("UHttpSubsystem"), &Z_Registration_Info_UClass_UHttpSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpSubsystem), 3790865587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_1345452462(TEXT("/Script/NetBridge"),
		Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
