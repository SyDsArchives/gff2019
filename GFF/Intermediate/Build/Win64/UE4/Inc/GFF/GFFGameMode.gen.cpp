// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFF/GFFGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFFGameMode() {}
// Cross Module References
	GFF_API UClass* Z_Construct_UClass_AGFFGameMode_NoRegister();
	GFF_API UClass* Z_Construct_UClass_AGFFGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GFF();
// End Cross Module References
	void AGFFGameMode::StaticRegisterNativesAGFFGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGFFGameMode_NoRegister()
	{
		return AGFFGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGFFGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGFFGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GFF,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFFGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GFFGameMode.h" },
		{ "ModuleRelativePath", "GFFGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGFFGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGFFGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGFFGameMode_Statics::ClassParams = {
		&AGFFGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGFFGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGFFGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGFFGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGFFGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGFFGameMode, 3239844246);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGFFGameMode(Z_Construct_UClass_AGFFGameMode, &AGFFGameMode::StaticClass, TEXT("/Script/GFF"), TEXT("AGFFGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGFFGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
