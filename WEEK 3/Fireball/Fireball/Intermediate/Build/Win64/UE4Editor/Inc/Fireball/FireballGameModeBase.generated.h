// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIREBALL_FireballGameModeBase_generated_h
#error "FireballGameModeBase.generated.h already included, missing '#pragma once' in FireballGameModeBase.h"
#endif
#define FIREBALL_FireballGameModeBase_generated_h

#define Fireball_Source_Fireball_FireballGameModeBase_h_15_RPC_WRAPPERS
#define Fireball_Source_Fireball_FireballGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Fireball_Source_Fireball_FireballGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFireballGameModeBase(); \
	friend struct Z_Construct_UClass_AFireballGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFireballGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Fireball"), NO_API) \
	DECLARE_SERIALIZER(AFireballGameModeBase)


#define Fireball_Source_Fireball_FireballGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFireballGameModeBase(); \
	friend struct Z_Construct_UClass_AFireballGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFireballGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Fireball"), NO_API) \
	DECLARE_SERIALIZER(AFireballGameModeBase)


#define Fireball_Source_Fireball_FireballGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFireballGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFireballGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireballGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireballGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireballGameModeBase(AFireballGameModeBase&&); \
	NO_API AFireballGameModeBase(const AFireballGameModeBase&); \
public:


#define Fireball_Source_Fireball_FireballGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFireballGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireballGameModeBase(AFireballGameModeBase&&); \
	NO_API AFireballGameModeBase(const AFireballGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireballGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireballGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFireballGameModeBase)


#define Fireball_Source_Fireball_FireballGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Fireball_Source_Fireball_FireballGameModeBase_h_12_PROLOG
#define Fireball_Source_Fireball_FireballGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fireball_Source_Fireball_FireballGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Fireball_Source_Fireball_FireballGameModeBase_h_15_RPC_WRAPPERS \
	Fireball_Source_Fireball_FireballGameModeBase_h_15_INCLASS \
	Fireball_Source_Fireball_FireballGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fireball_Source_Fireball_FireballGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fireball_Source_Fireball_FireballGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Fireball_Source_Fireball_FireballGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Fireball_Source_Fireball_FireballGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Fireball_Source_Fireball_FireballGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBALL_API UClass* StaticClass<class AFireballGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fireball_Source_Fireball_FireballGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
