// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GFF_GFFCharacter_generated_h
#error "GFFCharacter.generated.h already included, missing '#pragma once' in GFFCharacter.h"
#endif
#define GFF_GFFCharacter_generated_h

#define GFF_Source_GFF_GFFCharacter_h_12_RPC_WRAPPERS
#define GFF_Source_GFF_GFFCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GFF_Source_GFF_GFFCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGFFCharacter(); \
	friend struct Z_Construct_UClass_AGFFCharacter_Statics; \
public: \
	DECLARE_CLASS(AGFFCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GFF"), NO_API) \
	DECLARE_SERIALIZER(AGFFCharacter)


#define GFF_Source_GFF_GFFCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGFFCharacter(); \
	friend struct Z_Construct_UClass_AGFFCharacter_Statics; \
public: \
	DECLARE_CLASS(AGFFCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GFF"), NO_API) \
	DECLARE_SERIALIZER(AGFFCharacter)


#define GFF_Source_GFF_GFFCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGFFCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGFFCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGFFCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGFFCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGFFCharacter(AGFFCharacter&&); \
	NO_API AGFFCharacter(const AGFFCharacter&); \
public:


#define GFF_Source_GFF_GFFCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGFFCharacter(AGFFCharacter&&); \
	NO_API AGFFCharacter(const AGFFCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGFFCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGFFCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGFFCharacter)


#define GFF_Source_GFF_GFFCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AGFFCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGFFCharacter, CameraBoom); }


#define GFF_Source_GFF_GFFCharacter_h_9_PROLOG
#define GFF_Source_GFF_GFFCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GFF_Source_GFF_GFFCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GFF_Source_GFF_GFFCharacter_h_12_RPC_WRAPPERS \
	GFF_Source_GFF_GFFCharacter_h_12_INCLASS \
	GFF_Source_GFF_GFFCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GFF_Source_GFF_GFFCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GFF_Source_GFF_GFFCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GFF_Source_GFF_GFFCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GFF_Source_GFF_GFFCharacter_h_12_INCLASS_NO_PURE_DECLS \
	GFF_Source_GFF_GFFCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GFF_Source_GFF_GFFCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
