// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GFF_MyEnemy_generated_h
#error "MyEnemy.generated.h already included, missing '#pragma once' in MyEnemy.h"
#endif
#define GFF_MyEnemy_generated_h

#define GFF_Source_GFF_MyEnemy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetisFound) \
	{ \
		P_GET_UBOOL(Z_Param_flag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetisFound(Z_Param_flag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetisFound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetisFound(); \
		P_NATIVE_END; \
	}


#define GFF_Source_GFF_MyEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetisFound) \
	{ \
		P_GET_UBOOL(Z_Param_flag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetisFound(Z_Param_flag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetisFound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetisFound(); \
		P_NATIVE_END; \
	}


#define GFF_Source_GFF_MyEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyEnemy(); \
	friend struct Z_Construct_UClass_AMyEnemy_Statics; \
public: \
	DECLARE_CLASS(AMyEnemy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GFF"), NO_API) \
	DECLARE_SERIALIZER(AMyEnemy)


#define GFF_Source_GFF_MyEnemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyEnemy(); \
	friend struct Z_Construct_UClass_AMyEnemy_Statics; \
public: \
	DECLARE_CLASS(AMyEnemy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GFF"), NO_API) \
	DECLARE_SERIALIZER(AMyEnemy)


#define GFF_Source_GFF_MyEnemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyEnemy(AMyEnemy&&); \
	NO_API AMyEnemy(const AMyEnemy&); \
public:


#define GFF_Source_GFF_MyEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyEnemy(AMyEnemy&&); \
	NO_API AMyEnemy(const AMyEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyEnemy)


#define GFF_Source_GFF_MyEnemy_h_12_PRIVATE_PROPERTY_OFFSET
#define GFF_Source_GFF_MyEnemy_h_9_PROLOG
#define GFF_Source_GFF_MyEnemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GFF_Source_GFF_MyEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	GFF_Source_GFF_MyEnemy_h_12_RPC_WRAPPERS \
	GFF_Source_GFF_MyEnemy_h_12_INCLASS \
	GFF_Source_GFF_MyEnemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GFF_Source_GFF_MyEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GFF_Source_GFF_MyEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	GFF_Source_GFF_MyEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GFF_Source_GFF_MyEnemy_h_12_INCLASS_NO_PURE_DECLS \
	GFF_Source_GFF_MyEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GFF_Source_GFF_MyEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
