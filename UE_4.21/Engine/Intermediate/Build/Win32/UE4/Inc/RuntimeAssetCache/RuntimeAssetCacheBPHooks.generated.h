// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoidPtrParam;
class IRuntimeAssetCacheBuilder;
#ifdef RUNTIMEASSETCACHE_RuntimeAssetCacheBPHooks_generated_h
#error "RuntimeAssetCacheBPHooks.generated.h already included, missing '#pragma once' in RuntimeAssetCacheBPHooks.h"
#endif
#define RUNTIMEASSETCACHE_RuntimeAssetCacheBPHooks_generated_h

#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPollAsynchronousCompletion) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeAssetCacheBPHooks::PollAsynchronousCompletion(Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAsynchronousResults) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVoidPtrParam*)Z_Param__Result=URuntimeAssetCacheBPHooks::GetAsynchronousResults(Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWaitAsynchronousCompletion) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeAssetCacheBPHooks::WaitAsynchronousCompletion(Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCache) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Bucket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeAssetCacheBPHooks::ClearCache(Z_Param_Bucket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCacheSize) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Bucket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=URuntimeAssetCacheBPHooks::GetCacheSize(Z_Param_Bucket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAsynchronous) \
	{ \
		P_GET_TINTERFACE(IRuntimeAssetCacheBuilder,Z_Param_CacheBuilder); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=URuntimeAssetCacheBPHooks::GetAsynchronous(Z_Param_CacheBuilder,FOnRuntimeAssetCacheAsyncComplete(Z_Param_Out_CompletionDelegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSynchronous) \
	{ \
		P_GET_TINTERFACE(IRuntimeAssetCacheBuilder,Z_Param_CacheBuilder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVoidPtrParam*)Z_Param__Result=URuntimeAssetCacheBPHooks::GetSynchronous(Z_Param_CacheBuilder); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPollAsynchronousCompletion) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeAssetCacheBPHooks::PollAsynchronousCompletion(Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAsynchronousResults) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVoidPtrParam*)Z_Param__Result=URuntimeAssetCacheBPHooks::GetAsynchronousResults(Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWaitAsynchronousCompletion) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Handle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeAssetCacheBPHooks::WaitAsynchronousCompletion(Z_Param_Handle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCache) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Bucket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeAssetCacheBPHooks::ClearCache(Z_Param_Bucket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCacheSize) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Bucket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=URuntimeAssetCacheBPHooks::GetCacheSize(Z_Param_Bucket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAsynchronous) \
	{ \
		P_GET_TINTERFACE(IRuntimeAssetCacheBuilder,Z_Param_CacheBuilder); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=URuntimeAssetCacheBPHooks::GetAsynchronous(Z_Param_CacheBuilder,FOnRuntimeAssetCacheAsyncComplete(Z_Param_Out_CompletionDelegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSynchronous) \
	{ \
		P_GET_TINTERFACE(IRuntimeAssetCacheBuilder,Z_Param_CacheBuilder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVoidPtrParam*)Z_Param__Result=URuntimeAssetCacheBPHooks::GetSynchronous(Z_Param_CacheBuilder); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAssetCacheBPHooks(); \
	friend struct Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics; \
public: \
	DECLARE_CLASS(URuntimeAssetCacheBPHooks, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAssetCacheBPHooks)


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeAssetCacheBPHooks(); \
	friend struct Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics; \
public: \
	DECLARE_CLASS(URuntimeAssetCacheBPHooks, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAssetCacheBPHooks)


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAssetCacheBPHooks(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAssetCacheBPHooks) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAssetCacheBPHooks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAssetCacheBPHooks); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAssetCacheBPHooks(URuntimeAssetCacheBPHooks&&); \
	NO_API URuntimeAssetCacheBPHooks(const URuntimeAssetCacheBPHooks&); \
public:


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAssetCacheBPHooks(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAssetCacheBPHooks(URuntimeAssetCacheBPHooks&&); \
	NO_API URuntimeAssetCacheBPHooks(const URuntimeAssetCacheBPHooks&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAssetCacheBPHooks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAssetCacheBPHooks); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAssetCacheBPHooks)


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_17_PROLOG
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_INCLASS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
