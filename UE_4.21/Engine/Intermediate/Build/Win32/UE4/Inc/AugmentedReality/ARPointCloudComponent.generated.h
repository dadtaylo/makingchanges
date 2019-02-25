// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBox;
struct FVector;
struct FLinearColor;
#ifdef AUGMENTEDREALITY_ARPointCloudComponent_generated_h
#error "ARPointCloudComponent.generated.h already included, missing '#pragma once' in ARPointCloudComponent.h"
#endif
#define AUGMENTEDREALITY_ARPointCloudComponent_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPointsOutsideBox) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_WorldSpaceBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPointsOutsideBox(Z_Param_Out_WorldSpaceBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointsInBox) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_WorldSpaceBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPointsInBox(Z_Param_Out_WorldSpaceBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPointSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPointSize(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPointColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPointColor(Z_Param_Out_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPointCloud) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPointCloud(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPointCloud) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPointCloud(Z_Param_Out_Points); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsVisible) \
	{ \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsVisible(Z_Param_bNewVisibility); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPointsOutsideBox) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_WorldSpaceBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPointsOutsideBox(Z_Param_Out_WorldSpaceBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointsInBox) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_WorldSpaceBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPointsInBox(Z_Param_Out_WorldSpaceBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPointSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPointSize(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPointColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPointColor(Z_Param_Out_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPointCloud) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPointCloud(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPointCloud) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPointCloud(Z_Param_Out_Points); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsVisible) \
	{ \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsVisible(Z_Param_bNewVisibility); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPointCloudComponent(); \
	friend struct Z_Construct_UClass_UARPointCloudComponent_Statics; \
public: \
	DECLARE_CLASS(UARPointCloudComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPointCloudComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUARPointCloudComponent(); \
	friend struct Z_Construct_UClass_UARPointCloudComponent_Statics; \
public: \
	DECLARE_CLASS(UARPointCloudComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPointCloudComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPointCloudComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPointCloudComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPointCloudComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPointCloudComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPointCloudComponent(UARPointCloudComponent&&); \
	NO_API UARPointCloudComponent(const UARPointCloudComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPointCloudComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPointCloudComponent(UARPointCloudComponent&&); \
	NO_API UARPointCloudComponent(const UARPointCloudComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPointCloudComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPointCloudComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPointCloudComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocalBounds() { return STRUCT_OFFSET(UARPointCloudComponent, LocalBounds); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_15_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ARPointCloudComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARPointCloudComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
