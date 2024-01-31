// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MiniMapItemIcon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMiniMapItemIcon;
#ifdef VVLF_MINIMAP_MiniMapItemIcon_generated_h
#error "MiniMapItemIcon.generated.h already included, missing '#pragma once' in MiniMapItemIcon.h"
#endif
#define VVLF_MINIMAP_MiniMapItemIcon_generated_h

#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_9_DELEGATE \
struct _Script_VVLF_MiniMap_eventMiniMapItemDestroyedSignature_Parms \
{ \
	UMiniMapItemIcon* MiniMapItemIcon; \
}; \
static inline void FMiniMapItemDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& MiniMapItemDestroyedSignature, UMiniMapItemIcon* MiniMapItemIcon) \
{ \
	_Script_VVLF_MiniMap_eventMiniMapItemDestroyedSignature_Parms Parms; \
	Parms.MiniMapItemIcon=MiniMapItemIcon; \
	MiniMapItemDestroyedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_SPARSE_DATA
#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_RPC_WRAPPERS
#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_ACCESSORS
#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMiniMapItemIcon(); \
	friend struct Z_Construct_UClass_UMiniMapItemIcon_Statics; \
public: \
	DECLARE_CLASS(UMiniMapItemIcon, UBillboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VVLF_MiniMap"), NO_API) \
	DECLARE_SERIALIZER(UMiniMapItemIcon)


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMiniMapItemIcon(); \
	friend struct Z_Construct_UClass_UMiniMapItemIcon_Statics; \
public: \
	DECLARE_CLASS(UMiniMapItemIcon, UBillboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VVLF_MiniMap"), NO_API) \
	DECLARE_SERIALIZER(UMiniMapItemIcon)


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMiniMapItemIcon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMiniMapItemIcon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMiniMapItemIcon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMiniMapItemIcon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMiniMapItemIcon(UMiniMapItemIcon&&); \
	NO_API UMiniMapItemIcon(const UMiniMapItemIcon&); \
public: \
	NO_API virtual ~UMiniMapItemIcon();


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMiniMapItemIcon(UMiniMapItemIcon&&); \
	NO_API UMiniMapItemIcon(const UMiniMapItemIcon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMiniMapItemIcon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMiniMapItemIcon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMiniMapItemIcon) \
	NO_API virtual ~UMiniMapItemIcon();


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_13_PROLOG
#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_SPARSE_DATA \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_RPC_WRAPPERS \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_ACCESSORS \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_INCLASS \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_SPARSE_DATA \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_ACCESSORS \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_INCLASS_NO_PURE_DECLS \
	FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VVLF_MINIMAP_API UClass* StaticClass<class UMiniMapItemIcon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ContentExamples_Plugins_UnrealSwissKnife_Source_VVLF_MiniMap_Public_MiniMapItemIcon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
