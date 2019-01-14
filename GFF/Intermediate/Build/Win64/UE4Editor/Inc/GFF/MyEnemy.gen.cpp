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
	GFF_API UFunction* Z_Construct_UFunction_AMyEnemy_GetisFound();
	GFF_API UFunction* Z_Construct_UFunction_AMyEnemy_SetisFound();
// End Cross Module References
	void AMyEnemy::StaticRegisterNativesAMyEnemy()
	{
		UClass* Class = AMyEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetisFound", &AMyEnemy::execGetisFound },
			{ "SetisFound", &AMyEnemy::execSetisFound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GFF,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyEnemy_GetisFound, "GetisFound" }, // 3943529923
		{ &Z_Construct_UFunction_AMyEnemy_SetisFound, "SetisFound" }, // 854921429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyEnemy.h" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyEnemy_Statics::ClassParams = {
		&AMyEnemy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
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
	IMPLEMENT_CLASS(AMyEnemy, 3873320995);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyEnemy(Z_Construct_UClass_AMyEnemy, &AMyEnemy::StaticClass, TEXT("/Script/GFF"), TEXT("AMyEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif