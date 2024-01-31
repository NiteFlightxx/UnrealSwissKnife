// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERequestContentType : uint8;
enum class ERequestVerb : uint8;
#ifdef NETBRIDGE_HttpSubsystem_generated_h
#error "HttpSubsystem.generated.h already included, missing '#pragma once' in HttpSubsystem.h"
#endif
#define NETBRIDGE_HttpSubsystem_generated_h

#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_SPARSE_DATA
#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHttpRequest);


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHttpRequest);


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_ACCESSORS
#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpSubsystem(); \
	friend struct Z_Construct_UClass_UHttpSubsystem_Statics; \
public: \
	DECLARE_CLASS(UHttpSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetBridge"), NO_API) \
	DECLARE_SERIALIZER(UHttpSubsystem)


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUHttpSubsystem(); \
	friend struct Z_Construct_UClass_UHttpSubsystem_Statics; \
public: \
	DECLARE_CLASS(UHttpSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetBridge"), NO_API) \
	DECLARE_SERIALIZER(UHttpSubsystem)


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpSubsystem(UHttpSubsystem&&); \
	NO_API UHttpSubsystem(const UHttpSubsystem&); \
public: \
	NO_API virtual ~UHttpSubsystem();


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpSubsystem(UHttpSubsystem&&); \
	NO_API UHttpSubsystem(const UHttpSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHttpSubsystem) \
	NO_API virtual ~UHttpSubsystem();


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_38_PROLOG
#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_SPARSE_DATA \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_RPC_WRAPPERS \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_ACCESSORS \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_INCLASS \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_SPARSE_DATA \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_ACCESSORS \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_INCLASS_NO_PURE_DECLS \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETBRIDGE_API UClass* StaticClass<class UHttpSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ContentExamples_Plugins_UnrealSwissKnife_Source_NetBridge_Public_HttpSubsystem_h


#define FOREACH_ENUM_EREQUESTVERB(op) \
	op(ERequestVerb::GET) \
	op(ERequestVerb::POST) \
	op(ERequestVerb::PUT) \
	op(ERequestVerb::DEL) \
	op(ERequestVerb::CUSTOM) 

enum class ERequestVerb : uint8;
template<> struct TIsUEnumClass<ERequestVerb> { enum { Value = true }; };
template<> NETBRIDGE_API UEnum* StaticEnum<ERequestVerb>();

#define FOREACH_ENUM_EREQUESTCONTENTTYPE(op) \
	op(ERequestContentType::x_www_form_urlencoded_url) \
	op(ERequestContentType::x_www_form_urlencoded_body) \
	op(ERequestContentType::json) \
	op(ERequestContentType::binary) 

enum class ERequestContentType : uint8;
template<> struct TIsUEnumClass<ERequestContentType> { enum { Value = true }; };
template<> NETBRIDGE_API UEnum* StaticEnum<ERequestContentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
