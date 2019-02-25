// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FActorLayer;
class AActor;
#ifdef ACTORLAYERUTILITIES_ActorLayerUtilities_generated_h
#error "ActorLayerUtilities.generated.h already included, missing '#pragma once' in ActorLayerUtilities.h"
#endif
#define ACTORLAYERUTILITIES_ActorLayerUtilities_generated_h

#define Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorLayer_Statics; \
	ACTORLAYERUTILITIES_API static class UScriptStruct* StaticStruct();


#define Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FActorLayer,Z_Param_Out_ActorLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=ULayersBlueprintLibrary::GetActors(Z_Param_WorldContextObject,Z_Param_Out_ActorLayer); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FActorLayer,Z_Param_Out_ActorLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=ULayersBlueprintLibrary::GetActors(Z_Param_WorldContextObject,Z_Param_Out_ActorLayer); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULayersBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULayersBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULayersBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorLayerUtilities"), NO_API) \
	DECLARE_SERIALIZER(ULayersBlueprintLibrary)


#define Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_INCLASS \
private: \
	static void StaticRegisterNativesULayersBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULayersBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULayersBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorLayerUtilities"), NO_API) \
	DECLARE_SERIALIZER(ULayersBlueprintLibrary)


#define Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULayersBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayersBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayersBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayersBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULayersBlueprintLibrary(ULayersBlueprintLibrary&&); \
	NO_API ULayersBlueprintLibrary(const ULayersBlueprintLibrary&); \
public:


#define Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULayersBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULayersBlueprintLibrary(ULayersBlueprintLibrary&&); \
	NO_API ULayersBlueprintLibrary(const ULayersBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayersBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayersBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayersBlueprintLibrary)


#define Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_24_PROLOG
#define Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_RPC_WRAPPERS \
	Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_INCLASS \
	Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_29_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
