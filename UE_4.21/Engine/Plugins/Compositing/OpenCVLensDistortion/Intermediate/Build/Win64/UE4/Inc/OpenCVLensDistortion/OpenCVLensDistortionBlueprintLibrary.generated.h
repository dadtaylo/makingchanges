// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOpenCVLensDistortionParameters;
struct FIntPoint;
struct FOpenCVCameraViewInfo;
class UTexture2D;
class UObject;
class UTextureRenderTarget2D;
#ifdef OPENCVLENSDISTORTION_OpenCVLensDistortionBlueprintLibrary_generated_h
#error "OpenCVLensDistortionBlueprintLibrary.generated.h already included, missing '#pragma once' in OpenCVLensDistortionBlueprintLibrary.h"
#endif
#define OPENCVLENSDISTORTION_OpenCVLensDistortionBlueprintLibrary_generated_h

#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels) \
	{ \
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenCVLensDistortionBlueprintLibrary::NotEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels) \
	{ \
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenCVLensDistortionBlueprintLibrary::EqualEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateUndistortUVDisplacementMap) \
	{ \
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_LensParameters); \
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_ImageSize); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CroppingFactor); \
		P_GET_STRUCT_REF(FOpenCVCameraViewInfo,Z_Param_Out_CameraViewInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UOpenCVLensDistortionBlueprintLibrary::CreateUndistortUVDisplacementMap(Z_Param_Out_LensParameters,Z_Param_Out_ImageSize,Z_Param_CroppingFactor,Z_Param_Out_CameraViewInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDisplacementMapToRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget); \
		P_GET_OBJECT(UTexture2D,Z_Param_PreComputedUndistortDisplacementMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenCVLensDistortionBlueprintLibrary::DrawDisplacementMapToRenderTarget(Z_Param_WorldContextObject,Z_Param_OutputRenderTarget,Z_Param_PreComputedUndistortDisplacementMap); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels) \
	{ \
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenCVLensDistortionBlueprintLibrary::NotEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels) \
	{ \
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenCVLensDistortionBlueprintLibrary::EqualEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateUndistortUVDisplacementMap) \
	{ \
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_LensParameters); \
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_ImageSize); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CroppingFactor); \
		P_GET_STRUCT_REF(FOpenCVCameraViewInfo,Z_Param_Out_CameraViewInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UOpenCVLensDistortionBlueprintLibrary::CreateUndistortUVDisplacementMap(Z_Param_Out_LensParameters,Z_Param_Out_ImageSize,Z_Param_CroppingFactor,Z_Param_Out_CameraViewInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDisplacementMapToRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget); \
		P_GET_OBJECT(UTexture2D,Z_Param_PreComputedUndistortDisplacementMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenCVLensDistortionBlueprintLibrary::DrawDisplacementMapToRenderTarget(Z_Param_WorldContextObject,Z_Param_OutputRenderTarget,Z_Param_PreComputedUndistortDisplacementMap); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenCVLensDistortionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenCVLensDistortionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenCVLensDistortion"), OPENCVLENSDISTORTION_API) \
	DECLARE_SERIALIZER(UOpenCVLensDistortionBlueprintLibrary)


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOpenCVLensDistortionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenCVLensDistortionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenCVLensDistortion"), OPENCVLENSDISTORTION_API) \
	DECLARE_SERIALIZER(UOpenCVLensDistortionBlueprintLibrary)


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPENCVLENSDISTORTION_API UOpenCVLensDistortionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenCVLensDistortionBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPENCVLENSDISTORTION_API, UOpenCVLensDistortionBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenCVLensDistortionBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OPENCVLENSDISTORTION_API UOpenCVLensDistortionBlueprintLibrary(UOpenCVLensDistortionBlueprintLibrary&&); \
	OPENCVLENSDISTORTION_API UOpenCVLensDistortionBlueprintLibrary(const UOpenCVLensDistortionBlueprintLibrary&); \
public:


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPENCVLENSDISTORTION_API UOpenCVLensDistortionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OPENCVLENSDISTORTION_API UOpenCVLensDistortionBlueprintLibrary(UOpenCVLensDistortionBlueprintLibrary&&); \
	OPENCVLENSDISTORTION_API UOpenCVLensDistortionBlueprintLibrary(const UOpenCVLensDistortionBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPENCVLENSDISTORTION_API, UOpenCVLensDistortionBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenCVLensDistortionBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenCVLensDistortionBlueprintLibrary)


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_17_PROLOG
#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_RPC_WRAPPERS \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_INCLASS \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OpenCVLensDistortionBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
