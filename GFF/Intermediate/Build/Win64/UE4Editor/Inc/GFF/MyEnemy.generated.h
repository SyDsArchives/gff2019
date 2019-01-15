// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GFF_MyEnemy_generated_h
#error "MyEnemy.generated.h already included, missing '#pragma once' in MyEnemy.h"
#endif
#define GFF_MyEnemy_generated_h

#define GFF_Source_GFF_MyEnemy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEndOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetisDamaged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetisDamaged(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEndOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetisDamaged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetisDamaged(); \
		P_NATIVE_END; \
	} \
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


#define GFF_Source_GFF_MyEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__isDamaged() { return STRUCT_OFFSET(AMyEnemy, isDamaged); }


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
