// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFF/MyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	GFF_API UEnum* Z_Construct_UEnum_GFF_EHandType();
	UPackage* Z_Construct_UPackage__Script_GFF();
	GFF_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	GFF_API UClass* Z_Construct_UClass_AMyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GFF_API UFunction* Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GFF_API UFunction* Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap();
	GFF_API UFunction* Z_Construct_UFunction_AMyCharacter_GetIsAttack();
	GFF_API UFunction* Z_Construct_UFunction_AMyCharacter_GetIsCombatRange();
	GFF_API UFunction* Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin();
	GFF_API UFunction* Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd();
	GFF_API UFunction* Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap();
	GFF_API UFunction* Z_Construct_UFunction_AMyCharacter_PunchEndOverlap();
	GFF_API UFunction* Z_Construct_UFunction_AMyCharacter_SetIsAttack();
	GFF_API UFunction* Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled();
	GFF_API UFunction* Z_Construct_UFunction_AMyCharacter_StartComboTime();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static UEnum* EHandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GFF_EHandType, Z_Construct_UPackage__Script_GFF(), TEXT("EHandType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandType(EHandType_StaticEnum, TEXT("/Script/GFF"), TEXT("EHandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GFF_EHandType_CRC() { return 148853464U; }
	UEnum* Z_Construct_UEnum_GFF_EHandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GFF();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandType"), 0, Get_Z_Construct_UEnum_GFF_EHandType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RightHand", (int64)RightHand },
				{ "LeftHand", (int64)LeftHand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GFF,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHandType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EHandType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
		UClass* Class = AMyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CapsuleBeginOverlap", &AMyCharacter::execCapsuleBeginOverlap },
			{ "CapsuleEndOverlap", &AMyCharacter::execCapsuleEndOverlap },
			{ "GetIsAttack", &AMyCharacter::execGetIsAttack },
			{ "GetIsCombatRange", &AMyCharacter::execGetIsCombatRange },
			{ "OnTestOverlapBegin", &AMyCharacter::execOnTestOverlapBegin },
			{ "OnTestOverlapEnd", &AMyCharacter::execOnTestOverlapEnd },
			{ "PunchBeginOverlap", &AMyCharacter::execPunchBeginOverlap },
			{ "PunchEndOverlap", &AMyCharacter::execPunchEndOverlap },
			{ "SetIsAttack", &AMyCharacter::execSetIsAttack },
			{ "SetPunchCollisionEnabled", &AMyCharacter::execSetPunchCollisionEnabled },
			{ "StartComboTime", &AMyCharacter::execStartComboTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics
	{
		struct MyCharacter_eventCapsuleBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventCapsuleBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MyCharacter_eventCapsuleBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyCharacter_eventCapsuleBeginOverlap_Parms), &Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventCapsuleBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OtherComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventCapsuleBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OtherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventCapsuleBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventCapsuleBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyBPLibrary" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "CapsuleBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MyCharacter_eventCapsuleBeginOverlap_Parms), Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics
	{
		struct MyCharacter_eventCapsuleEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventCapsuleEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OtherComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventCapsuleEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OtherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventCapsuleEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventCapsuleEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyBPLibrary" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "CapsuleEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyCharacter_eventCapsuleEndOverlap_Parms), Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics
	{
		struct MyCharacter_eventGetIsAttack_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyCharacter_eventGetIsAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyCharacter_eventGetIsAttack_Parms), &Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyBPLibrary" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "GetIsAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyCharacter_eventGetIsAttack_Parms), Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_GetIsAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_GetIsAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics
	{
		struct MyCharacter_eventGetIsCombatRange_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyCharacter_eventGetIsCombatRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyCharacter_eventGetIsCombatRange_Parms), &Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyBPLibrary" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "GetIsCombatRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyCharacter_eventGetIsCombatRange_Parms), Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_GetIsCombatRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_GetIsCombatRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics
	{
		struct MyCharacter_eventOnTestOverlapBegin_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnTestOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MyCharacter_eventOnTestOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyCharacter_eventOnTestOverlapBegin_Parms), &Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnTestOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_OtherComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnTestOverlapBegin_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_OtherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnTestOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyBPLibrary" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "OnTestOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MyCharacter_eventOnTestOverlapBegin_Parms), Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics
	{
		struct MyCharacter_eventOnTestOverlapEnd_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnTestOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::NewProp_OtherComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnTestOverlapEnd_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::NewProp_OtherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnTestOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyBPLibrary" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "OnTestOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyCharacter_eventOnTestOverlapEnd_Parms), Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics
	{
		struct MyCharacter_eventPunchBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventPunchBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MyCharacter_eventPunchBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyCharacter_eventPunchBeginOverlap_Parms), &Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventPunchBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OtherComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventPunchBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OtherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventPunchBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventPunchBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyBPLibrary" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "PunchBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MyCharacter_eventPunchBeginOverlap_Parms), Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics
	{
		struct MyCharacter_eventPunchEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventPunchEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OtherComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventPunchEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OtherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventPunchEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventPunchEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyBPLibrary" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "PunchEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyCharacter_eventPunchEndOverlap_Parms), Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_PunchEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_PunchEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics
	{
		struct MyCharacter_eventSetIsAttack_Parms
		{
			bool _IsAttack;
		};
		static void NewProp__IsAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__IsAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics::NewProp__IsAttack_SetBit(void* Obj)
	{
		((MyCharacter_eventSetIsAttack_Parms*)Obj)->_IsAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics::NewProp__IsAttack = { UE4CodeGen_Private::EPropertyClass::Bool, "_IsAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyCharacter_eventSetIsAttack_Parms), &Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics::NewProp__IsAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics::NewProp__IsAttack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyBPLibrary" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "SetIsAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyCharacter_eventSetIsAttack_Parms), Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_SetIsAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_SetIsAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics
	{
		struct MyCharacter_eventSetPunchCollisionEnabled_Parms
		{
			TEnumAsByte<EHandType> HandType;
			bool IsCollision;
		};
		static void NewProp_IsCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCollision;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::NewProp_IsCollision_SetBit(void* Obj)
	{
		((MyCharacter_eventSetPunchCollisionEnabled_Parms*)Obj)->IsCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::NewProp_IsCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyCharacter_eventSetPunchCollisionEnabled_Parms), &Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::NewProp_IsCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::NewProp_HandType = { UE4CodeGen_Private::EPropertyClass::Byte, "HandType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventSetPunchCollisionEnabled_Parms, HandType), Z_Construct_UEnum_GFF_EHandType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::NewProp_IsCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::NewProp_HandType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyBPLibrary" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "SetPunchCollisionEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyCharacter_eventSetPunchCollisionEnabled_Parms), Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_StartComboTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_StartComboTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyBPLibrary" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_StartComboTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "StartComboTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_StartComboTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_StartComboTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_StartComboTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_StartComboTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboAttackCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ComboAttackCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vitality_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Vitality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_enemyNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ComboResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_enemyDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_defaultWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCombatRange_MetaData[];
#endif
		static void NewProp_IsCombatRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCombatRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitMoveLimit_MetaData[];
#endif
		static void NewProp_InitMoveLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InitMoveLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackflag_MetaData[];
#endif
		static void NewProp_attackflag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_attackflag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftPunchCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftPunchCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightPunchCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightPunchCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemySearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemySearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GFF,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacter_CapsuleBeginOverlap, "CapsuleBeginOverlap" }, // 2862578293
		{ &Z_Construct_UFunction_AMyCharacter_CapsuleEndOverlap, "CapsuleEndOverlap" }, // 3213164116
		{ &Z_Construct_UFunction_AMyCharacter_GetIsAttack, "GetIsAttack" }, // 1663883899
		{ &Z_Construct_UFunction_AMyCharacter_GetIsCombatRange, "GetIsCombatRange" }, // 156161944
		{ &Z_Construct_UFunction_AMyCharacter_OnTestOverlapBegin, "OnTestOverlapBegin" }, // 2947200575
		{ &Z_Construct_UFunction_AMyCharacter_OnTestOverlapEnd, "OnTestOverlapEnd" }, // 2757193145
		{ &Z_Construct_UFunction_AMyCharacter_PunchBeginOverlap, "PunchBeginOverlap" }, // 378750659
		{ &Z_Construct_UFunction_AMyCharacter_PunchEndOverlap, "PunchEndOverlap" }, // 928284638
		{ &Z_Construct_UFunction_AMyCharacter_SetIsAttack, "SetIsAttack" }, // 3018092005
		{ &Z_Construct_UFunction_AMyCharacter_SetPunchCollisionEnabled, "SetPunchCollisionEnabled" }, // 1859072455
		{ &Z_Construct_UFunction_AMyCharacter_StartComboTime, "StartComboTime" }, // 755893217
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "MyCharacter.h" },
		{ "ToolTip", "struct FDataTime;" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_ComboAttackCount_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_ComboAttackCount = { UE4CodeGen_Private::EPropertyClass::Int, "ComboAttackCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000805, 1, nullptr, STRUCT_OFFSET(AMyCharacter, ComboAttackCount), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_ComboAttackCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_ComboAttackCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Vitality_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Vitality = { UE4CodeGen_Private::EPropertyClass::Int, "Vitality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, Vitality), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Vitality_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Vitality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_enemyNum_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_enemyNum = { UE4CodeGen_Private::EPropertyClass::Int, "enemyNum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, enemyNum), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_enemyNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_enemyNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_ComboResetTime_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_ComboResetTime = { UE4CodeGen_Private::EPropertyClass::Float, "ComboResetTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, ComboResetTime), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_ComboResetTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_ComboResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_enemyDistance_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_enemyDistance = { UE4CodeGen_Private::EPropertyClass::Float, "enemyDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, enemyDistance), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_enemyDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_enemyDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_defaultWalkSpeed_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_defaultWalkSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "defaultWalkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, defaultWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_defaultWalkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_defaultWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MaxWalkSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MaxWalkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AMyCharacter, MaxWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_MaxWalkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_MaxWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDead_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->IsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDead = { UE4CodeGen_Private::EPropertyClass::Bool, "IsDead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDead_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsCombatRange_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsCombatRange_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->IsCombatRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsCombatRange = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCombatRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsCombatRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsCombatRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsCombatRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_InitMoveLimit_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_InitMoveLimit_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->InitMoveLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_InitMoveLimit = { UE4CodeGen_Private::EPropertyClass::Bool, "InitMoveLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_InitMoveLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_InitMoveLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_InitMoveLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_attackflag_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_attackflag_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->attackflag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_attackflag = { UE4CodeGen_Private::EPropertyClass::Bool, "attackflag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_attackflag_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_attackflag_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_attackflag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_LeftPunchCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
		{ "ToolTip", "?U??????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_LeftPunchCollision = { UE4CodeGen_Private::EPropertyClass::Object, "LeftPunchCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AMyCharacter, LeftPunchCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_LeftPunchCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_LeftPunchCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_RightPunchCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
		{ "ToolTip", "???G?\xcd\x88?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_RightPunchCollision = { UE4CodeGen_Private::EPropertyClass::Object, "RightPunchCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AMyCharacter, RightPunchCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_RightPunchCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_RightPunchCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_EnemySearch_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
		{ "ToolTip", "?X?v?????O?A?[??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_EnemySearch = { UE4CodeGen_Private::EPropertyClass::Object, "EnemySearch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AMyCharacter, EnemySearch), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_EnemySearch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_EnemySearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
		{ "ToolTip", "?J?????R???|?[?l???g" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AMyCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_SideViewCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SideViewCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AMyCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_SideViewCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_SideViewCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_ComboAttackCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Vitality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_enemyNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_ComboResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_enemyDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_defaultWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MaxWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsCombatRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_InitMoveLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_attackflag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_LeftPunchCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_RightPunchCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_EnemySearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_SideViewCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
		&AMyCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMyCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCharacter, 2922099918);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacter(Z_Construct_UClass_AMyCharacter, &AMyCharacter::StaticClass, TEXT("/Script/GFF"), TEXT("AMyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
