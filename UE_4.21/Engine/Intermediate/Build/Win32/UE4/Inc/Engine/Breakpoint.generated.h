// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Breakpoint_generated_h
#error "Breakpoint.generated.h already included, missing '#pragma once' in Breakpoint.h"
#endif
#define ENGINE_Breakpoint_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBreakpoint(); \
	friend struct Z_Construct_UClass_UBreakpoint_Statics; \
public: \
	DECLARE_CLASS(UBreakpoint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBreakpoint)


#define Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBreakpoint(); \
	friend struct Z_Construct_UClass_UBreakpoint_Statics; \
public: \
	DECLARE_CLASS(UBreakpoint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBreakpoint)


#define Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBreakpoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBreakpoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBreakpoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBreakpoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBreakpoint(UBreakpoint&&); \
	NO_API UBreakpoint(const UBreakpoint&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBreakpoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBreakpoint(UBreakpoint&&); \
	NO_API UBreakpoint(const UBreakpoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBreakpoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBreakpoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBreakpoint)


#define Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Node() { return STRUCT_OFFSET(UBreakpoint, Node); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Breakpoint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Breakpoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
