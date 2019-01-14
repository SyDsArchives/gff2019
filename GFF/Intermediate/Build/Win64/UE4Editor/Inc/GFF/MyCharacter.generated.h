// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GFF_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define GFF_MyCharacter_generated_h

#define GFF_Source_GFF_MyCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsHit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTestOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTestOverlapEnd(Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTestOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTestOverlapBegin(Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GFF_Source_GFF_MyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsHit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTestOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTestOverlapEnd(Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTestOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTestOverlapBegin(Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GFF_Source_GFF_MyCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GFF"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define GFF_Source_GFF_MyCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GFF"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define GFF_Source_GFF_MyCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define GFF_Source_GFF_MyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define GFF_Source_GFF_MyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AMyCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__EnemySearch() { return STRUCT_OFFSET(AMyCharacter, EnemySearch); } \
	FORCEINLINE static uint32 __PPO__attackflag() { return STRUCT_OFFSET(AMyCharacter, attackflag); } \
	FORCEINLINE static uint32 __PPO__MaxWalkSpeed() { return STRUCT_OFFSET(AMyCharacter, MaxWalkSpeed); } \
	FORCEINLINE static uint32 __PPO__defaultWalkSpeed() { return STRUCT_OFFSET(AMyCharacter, defaultWalkSpeed); } \
	FORCEINLINE static uint32 __PPO__ishit() { return STRUCT_OFFSET(AMyCharacter, ishit); } \
	FORCEINLINE static uint32 __PPO__enemyDistance() { return STRUCT_OFFSET(AMyCharacter, enemyDistance); } \
	FORCEINLINE static uint32 __PPO__enemyNum() { return STRUCT_OFFSET(AMyCharacter, enemyNum); }


#define GFF_Source_GFF_MyCharacter_h_11_PROLOG
#define GFF_Source_GFF_MyCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GFF_Source_GFF_MyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	GFF_Source_GFF_MyCharacter_h_14_RPC_WRAPPERS \
	GFF_Source_GFF_MyCharacter_h_14_INCLASS \
	GFF_Source_GFF_MyCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GFF_Source_GFF_MyCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GFF_Source_GFF_MyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	GFF_Source_GFF_MyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GFF_Source_GFF_MyCharacter_h_14_INCLASS_NO_PURE_DECLS \
	GFF_Source_GFF_MyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GFF_Source_GFF_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
