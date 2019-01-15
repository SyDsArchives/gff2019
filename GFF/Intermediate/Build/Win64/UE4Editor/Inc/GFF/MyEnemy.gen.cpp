// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFF/MyEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEnemy() {}
// Cross Module References
	GFF_API UClass* Z_Construct_UClass_AMyEnemy_NoRegister();
	GFF_API UClass* Z_Construct_UClass_AMyEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GFF();
	GFF_API UFunction* Z_Construct_UFunction_AMyEnemy_GetisDamaged();
	GFF_API UFunction* Z_Construct_UFunction_AMyEnemy_GetisFound();
	GFF_API UFunction* Z_Construct_UFunction_AMyEnemy_OnBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GFF_API UFunction* Z_Construct_UFunction_AMyEnemy_OnEndOverlap();
	GFF_API UFunction* Z_Construct_UFunction_AMyEnemy_SetisFound();
// End Cross Module References
	void AMyEnemy::StaticRegisterNativesAMyEnemy()
	{
		UClass* Class = AMyEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetisDamaged", &AMyEnemy::execGetisDamaged },
			{ "GetisFound", &AMyEnemy::execGetisFound },
			{ "OnBeginOverlap", &AMyEnemy::execOnBeginOverlap },
			{ "OnEndOverlap", &AMyEnemy::execOnEndOverlap },
			{ "SetisFound", &AMyEnemy::execSetisFound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics
	{
		struct MyEnemy_eventGetisDamaged_Parms
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
	void Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyEnemy_eventGetisDamaged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyEnemy_eventGetisDamaged_Parms), &Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEnemyBlueprint" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEnemy, "GetisDamaged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyEnemy_eventGetisDamaged_Parms), Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEnemy_GetisDamaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEnemy_GetisDamaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyEnemy_GetisFound_Statics
	{
		struct MyEnemy_eventGetisFound_Parms
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
	void Z_Construct_UFunction_AMyEnemy_GetisFound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyEnemy_eventGetisFound_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyEnemy_GetisFound_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyEnemy_eventGetisFound_Parms), &Z_Construct_UFunction_AMyEnemy_GetisFound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEnemy_GetisFound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_GetisFound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEnemy_GetisFound_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEnemyBlueprint" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEnemy_GetisFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEnemy, "GetisFound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyEnemy_eventGetisFound_Parms), Z_Construct_UFunction_AMyEnemy_GetisFound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_GetisFound_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEnemy_GetisFound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_GetisFound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEnemy_GetisFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEnemy_GetisFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics
	{
		struct MyEnemy_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlapComponent;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(MyEnemy_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MyEnemy_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyEnemy_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyEnemy_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OtherComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyEnemy_eventOnBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyEnemy_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OverlapComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlapComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyEnemy_eventOnBeginOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OverlapComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OverlapComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::NewProp_OverlapComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEnemyBlueprint" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEnemy, "OnBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MyEnemy_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEnemy_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEnemy_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics
	{
		struct MyEnemy_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlapComponent;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyEnemy_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OtherComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyEnemy_eventOnEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyEnemy_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OverlapComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlapComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyEnemy_eventOnEndOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OverlapComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OverlapComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::NewProp_OverlapComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEnemyBlueprint" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEnemy, "OnEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyEnemy_eventOnEndOverlap_Parms), Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEnemy_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEnemy_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyEnemy_SetisFound_Statics
	{
		struct MyEnemy_eventSetisFound_Parms
		{
			bool flag;
		};
		static void NewProp_flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyEnemy_SetisFound_Statics::NewProp_flag_SetBit(void* Obj)
	{
		((MyEnemy_eventSetisFound_Parms*)Obj)->flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyEnemy_SetisFound_Statics::NewProp_flag = { UE4CodeGen_Private::EPropertyClass::Bool, "flag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyEnemy_eventSetisFound_Parms), &Z_Construct_UFunction_AMyEnemy_SetisFound_Statics::NewProp_flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEnemy_SetisFound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_SetisFound_Statics::NewProp_flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEnemy_SetisFound_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEnemyBlueprint" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEnemy_SetisFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEnemy, "SetisFound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyEnemy_eventSetisFound_Parms), Z_Construct_UFunction_AMyEnemy_SetisFound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_SetisFound_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEnemy_SetisFound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_SetisFound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEnemy_SetisFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEnemy_SetisFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyEnemy_NoRegister()
	{
		return AMyEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AMyEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDamaged_MetaData[];
#endif
		static void NewProp_isDamaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDamaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GFF,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyEnemy_GetisDamaged, "GetisDamaged" }, // 386600259
		{ &Z_Construct_UFunction_AMyEnemy_GetisFound, "GetisFound" }, // 3943529923
		{ &Z_Construct_UFunction_AMyEnemy_OnBeginOverlap, "OnBeginOverlap" }, // 2468775462
		{ &Z_Construct_UFunction_AMyEnemy_OnEndOverlap, "OnEndOverlap" }, // 551132002
		{ &Z_Construct_UFunction_AMyEnemy_SetisFound, "SetisFound" }, // 854921429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyEnemy.h" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDamaged_MetaData[] = {
		{ "Category", "MyEnemy" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
	void Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDamaged_SetBit(void* Obj)
	{
		((AMyEnemy*)Obj)->isDamaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDamaged = { UE4CodeGen_Private::EPropertyClass::Bool, "isDamaged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyEnemy), &Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDamaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDamaged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDamaged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDamaged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyEnemy_Statics::ClassParams = {
		&AMyEnemy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMyEnemy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyEnemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyEnemy, 3578419372);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyEnemy(Z_Construct_UClass_AMyEnemy, &AMyEnemy::StaticClass, TEXT("/Script/GFF"), TEXT("AMyEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
