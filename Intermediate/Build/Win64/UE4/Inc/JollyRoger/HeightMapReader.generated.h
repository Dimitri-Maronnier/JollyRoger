// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
#ifdef JOLLYROGER_HeightMapReader_generated_h
#error "HeightMapReader.generated.h already included, missing '#pragma once' in HeightMapReader.h"
#endif
#define JOLLYROGER_HeightMapReader_generated_h

#define JollyRoger_Source_JollyRoger_HeightMapReader_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRenderTargetValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=this->GetRenderTargetValue(Z_Param_x,Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateBuffer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateBuffer(); \
		P_NATIVE_END; \
	}


#define JollyRoger_Source_JollyRoger_HeightMapReader_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRenderTargetValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=this->GetRenderTargetValue(Z_Param_x,Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateBuffer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateBuffer(); \
		P_NATIVE_END; \
	}


#define JollyRoger_Source_JollyRoger_HeightMapReader_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeightMapReader(); \
	friend JOLLYROGER_API class UClass* Z_Construct_UClass_AHeightMapReader(); \
public: \
	DECLARE_CLASS(AHeightMapReader, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/JollyRoger"), NO_API) \
	DECLARE_SERIALIZER(AHeightMapReader) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JollyRoger_Source_JollyRoger_HeightMapReader_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHeightMapReader(); \
	friend JOLLYROGER_API class UClass* Z_Construct_UClass_AHeightMapReader(); \
public: \
	DECLARE_CLASS(AHeightMapReader, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/JollyRoger"), NO_API) \
	DECLARE_SERIALIZER(AHeightMapReader) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JollyRoger_Source_JollyRoger_HeightMapReader_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeightMapReader(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeightMapReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeightMapReader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeightMapReader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeightMapReader(AHeightMapReader&&); \
	NO_API AHeightMapReader(const AHeightMapReader&); \
public:


#define JollyRoger_Source_JollyRoger_HeightMapReader_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeightMapReader(AHeightMapReader&&); \
	NO_API AHeightMapReader(const AHeightMapReader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeightMapReader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeightMapReader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeightMapReader)


#define JollyRoger_Source_JollyRoger_HeightMapReader_h_15_PRIVATE_PROPERTY_OFFSET
#define JollyRoger_Source_JollyRoger_HeightMapReader_h_12_PROLOG
#define JollyRoger_Source_JollyRoger_HeightMapReader_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JollyRoger_Source_JollyRoger_HeightMapReader_h_15_PRIVATE_PROPERTY_OFFSET \
	JollyRoger_Source_JollyRoger_HeightMapReader_h_15_RPC_WRAPPERS \
	JollyRoger_Source_JollyRoger_HeightMapReader_h_15_INCLASS \
	JollyRoger_Source_JollyRoger_HeightMapReader_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JollyRoger_Source_JollyRoger_HeightMapReader_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JollyRoger_Source_JollyRoger_HeightMapReader_h_15_PRIVATE_PROPERTY_OFFSET \
	JollyRoger_Source_JollyRoger_HeightMapReader_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	JollyRoger_Source_JollyRoger_HeightMapReader_h_15_INCLASS_NO_PURE_DECLS \
	JollyRoger_Source_JollyRoger_HeightMapReader_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JollyRoger_Source_JollyRoger_HeightMapReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
