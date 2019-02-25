// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEMENUBUILDER_GameMenuWidgetStyle_generated_h
#error "GameMenuWidgetStyle.generated.h already included, missing '#pragma once' in GameMenuWidgetStyle.h"
#endif
#define GAMEMENUBUILDER_GameMenuWidgetStyle_generated_h

#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameMenuStyle_Statics; \
	GAMEMENUBUILDER_API static class UScriptStruct* StaticStruct(); \
	typedef FSlateWidgetStyle Super;


#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_RPC_WRAPPERS
#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameMenuWidgetStyle(); \
	friend struct Z_Construct_UClass_UGameMenuWidgetStyle_Statics; \
public: \
	DECLARE_CLASS(UGameMenuWidgetStyle, USlateWidgetStyleContainerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameMenuBuilder"), GAMEMENUBUILDER_API) \
	DECLARE_SERIALIZER(UGameMenuWidgetStyle)


#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_INCLASS \
private: \
	static void StaticRegisterNativesUGameMenuWidgetStyle(); \
	friend struct Z_Construct_UClass_UGameMenuWidgetStyle_Statics; \
public: \
	DECLARE_CLASS(UGameMenuWidgetStyle, USlateWidgetStyleContainerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameMenuBuilder"), GAMEMENUBUILDER_API) \
	DECLARE_SERIALIZER(UGameMenuWidgetStyle)


#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEMENUBUILDER_API UGameMenuWidgetStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameMenuWidgetStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEMENUBUILDER_API, UGameMenuWidgetStyle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameMenuWidgetStyle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEMENUBUILDER_API UGameMenuWidgetStyle(UGameMenuWidgetStyle&&); \
	GAMEMENUBUILDER_API UGameMenuWidgetStyle(const UGameMenuWidgetStyle&); \
public:


#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEMENUBUILDER_API UGameMenuWidgetStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEMENUBUILDER_API UGameMenuWidgetStyle(UGameMenuWidgetStyle&&); \
	GAMEMENUBUILDER_API UGameMenuWidgetStyle(const UGameMenuWidgetStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEMENUBUILDER_API, UGameMenuWidgetStyle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameMenuWidgetStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameMenuWidgetStyle)


#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_186_PROLOG
#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_RPC_WRAPPERS \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_INCLASS \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameMenuWidgetStyle."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h


#define FOREACH_ENUM_GAMEMENULAYOUTTYPE(op) \
	op(GameMenuLayoutType::Single) \
	op(GameMenuLayoutType::SideBySide) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
