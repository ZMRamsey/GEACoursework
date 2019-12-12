// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSProject/AMyFPSPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMyFPSPlayerState() {}
// Cross Module References
	FPSPROJECT_API UClass* Z_Construct_UClass_AAMyFPSPlayerState_NoRegister();
	FPSPROJECT_API UClass* Z_Construct_UClass_AAMyFPSPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_FPSProject();
// End Cross Module References
	void AAMyFPSPlayerState::StaticRegisterNativesAAMyFPSPlayerState()
	{
	}
	UClass* Z_Construct_UClass_AAMyFPSPlayerState_NoRegister()
	{
		return AAMyFPSPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AAMyFPSPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAMyFPSPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMyFPSPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AMyFPSPlayerState.h" },
		{ "ModuleRelativePath", "AMyFPSPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAMyFPSPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMyFPSPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAMyFPSPlayerState_Statics::ClassParams = {
		&AAMyFPSPlayerState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAMyFPSPlayerState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAMyFPSPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAMyFPSPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAMyFPSPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAMyFPSPlayerState, 807612521);
	template<> FPSPROJECT_API UClass* StaticClass<AAMyFPSPlayerState>()
	{
		return AAMyFPSPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAMyFPSPlayerState(Z_Construct_UClass_AAMyFPSPlayerState, &AAMyFPSPlayerState::StaticClass, TEXT("/Script/FPSProject"), TEXT("AAMyFPSPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAMyFPSPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
