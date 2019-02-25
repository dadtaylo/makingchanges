// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeAssetCacheBuilder_ObjectBase;
class UObject;
struct FVoidPtrParam;
#ifdef RUNTIMEASSETCACHE_RuntimeAssetCacheBuilders_generated_h
#error "RuntimeAssetCacheBuilders.generated.h already included, missing '#pragma once' in RuntimeAssetCacheBuilders.h"
#endif
#define RUNTIMEASSETCACHE_RuntimeAssetCacheBuilders_generated_h

#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_19_DELEGATE \
struct _Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms \
{ \
	URuntimeAssetCacheBuilder_ObjectBase* CachedAssetBuilder; \
	bool Success; \
}; \
static inline void FOnAssetCacheComplete_DelegateWrapper(const FScriptDelegate& OnAssetCacheComplete, URuntimeAssetCacheBuilder_ObjectBase* CachedAssetBuilder, bool Success) \
{ \
	_Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms Parms; \
	Parms.CachedAssetBuilder=CachedAssetBuilder; \
	Parms.Success=Success ? true : false; \
	OnAssetCacheComplete.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_RPC_WRAPPERS \
	virtual void OnAssetCacheMiss_Implementation(); \
 \
	DECLARE_FUNCTION(execSaveNewAssetToCache) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_NewAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveNewAssetToCache(Z_Param_NewAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAssetCacheMiss) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAssetCacheMiss_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFromCacheAsyncComplete) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Handle); \
		P_GET_STRUCT(FVoidPtrParam,Z_Param_DataPtr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFromCacheAsyncComplete(Z_Param_Handle,Z_Param_DataPtr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFromCacheAsync) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_OnComplete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFromCacheAsync(FOnAssetCacheComplete(Z_Param_Out_OnComplete)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveNewAssetToCache) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_NewAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveNewAssetToCache(Z_Param_NewAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAssetCacheMiss) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAssetCacheMiss_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFromCacheAsyncComplete) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Handle); \
		P_GET_STRUCT(FVoidPtrParam,Z_Param_DataPtr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFromCacheAsyncComplete(Z_Param_Handle,Z_Param_DataPtr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFromCacheAsync) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_OnComplete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFromCacheAsync(FOnAssetCacheComplete(Z_Param_Out_OnComplete)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_EVENT_PARMS
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAssetCacheBuilder_ObjectBase(); \
	friend struct Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics; \
public: \
	DECLARE_CLASS(URuntimeAssetCacheBuilder_ObjectBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAssetCacheBuilder_ObjectBase) \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeAssetCacheBuilder_ObjectBase*>(this); }


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeAssetCacheBuilder_ObjectBase(); \
	friend struct Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics; \
public: \
	DECLARE_CLASS(URuntimeAssetCacheBuilder_ObjectBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAssetCacheBuilder_ObjectBase) \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeAssetCacheBuilder_ObjectBase*>(this); }


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAssetCacheBuilder_ObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAssetCacheBuilder_ObjectBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAssetCacheBuilder_ObjectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(URuntimeAssetCacheBuilder_ObjectBase&&); \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const URuntimeAssetCacheBuilder_ObjectBase&); \
public:


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(URuntimeAssetCacheBuilder_ObjectBase&&); \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const URuntimeAssetCacheBuilder_ObjectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAssetCacheBuilder_ObjectBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAssetCacheBuilder_ObjectBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAssetCacheBuilder_ObjectBase)


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_23_PROLOG \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_EVENT_PARMS


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_INCLASS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_RPC_WRAPPERS
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExampleTextureCacheBuilder(); \
	friend struct Z_Construct_UClass_UExampleTextureCacheBuilder_Statics; \
public: \
	DECLARE_CLASS(UExampleTextureCacheBuilder, URuntimeAssetCacheBuilder_ObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), NO_API) \
	DECLARE_SERIALIZER(UExampleTextureCacheBuilder)


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_INCLASS \
private: \
	static void StaticRegisterNativesUExampleTextureCacheBuilder(); \
	friend struct Z_Construct_UClass_UExampleTextureCacheBuilder_Statics; \
public: \
	DECLARE_CLASS(UExampleTextureCacheBuilder, URuntimeAssetCacheBuilder_ObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), NO_API) \
	DECLARE_SERIALIZER(UExampleTextureCacheBuilder)


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExampleTextureCacheBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExampleTextureCacheBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExampleTextureCacheBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExampleTextureCacheBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExampleTextureCacheBuilder(UExampleTextureCacheBuilder&&); \
	NO_API UExampleTextureCacheBuilder(const UExampleTextureCacheBuilder&); \
public:


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExampleTextureCacheBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExampleTextureCacheBuilder(UExampleTextureCacheBuilder&&); \
	NO_API UExampleTextureCacheBuilder(const UExampleTextureCacheBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExampleTextureCacheBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExampleTextureCacheBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExampleTextureCacheBuilder)


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_170_PROLOG
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_RPC_WRAPPERS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_INCLASS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
