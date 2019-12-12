// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Week1Lab/Week1LabGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeek1LabGameModeBase() {}
// Cross Module References
	WEEK1LAB_API UClass* Z_Construct_UClass_AWeek1LabGameModeBase_NoRegister();
	WEEK1LAB_API UClass* Z_Construct_UClass_AWeek1LabGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Week1Lab();
// End Cross Module References
	void AWeek1LabGameModeBase::StaticRegisterNativesAWeek1LabGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AWeek1LabGameModeBase_NoRegister()
	{
		return AWeek1LabGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeek1LabGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeek1LabGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Week1Lab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeek1LabGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Week1LabGameModeBase.h" },
		{ "ModuleRelativePath", "Week1LabGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeek1LabGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeek1LabGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeek1LabGameModeBase_Statics::ClassParams = {
		&AWeek1LabGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWeek1LabGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWeek1LabGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeek1LabGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeek1LabGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeek1LabGameModeBase, 4249240111);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeek1LabGameModeBase(Z_Construct_UClass_AWeek1LabGameModeBase, &AWeek1LabGameModeBase::StaticClass, TEXT("/Script/Week1Lab"), TEXT("AWeek1LabGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeek1LabGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
