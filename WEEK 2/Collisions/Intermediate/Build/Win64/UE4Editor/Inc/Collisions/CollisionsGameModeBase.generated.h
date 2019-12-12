// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLLISIONS_CollisionsGameModeBase_generated_h
#error "CollisionsGameModeBase.generated.h already included, missing '#pragma once' in CollisionsGameModeBase.h"
#endif
#define COLLISIONS_CollisionsGameModeBase_generated_h

#define Collisions_Source_Collisions_CollisionsGameModeBase_h_15_RPC_WRAPPERS
#define Collisions_Source_Collisions_CollisionsGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Collisions_Source_Collisions_CollisionsGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollisionsGameModeBase(); \
	friend struct Z_Construct_UClass_ACollisionsGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACollisionsGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Collisions"), NO_API) \
	DECLARE_SERIALIZER(ACollisionsGameModeBase)


#define Collisions_Source_Collisions_CollisionsGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACollisionsGameModeBase(); \
	friend struct Z_Construct_UClass_ACollisionsGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACollisionsGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Collisions"), NO_API) \
	DECLARE_SERIALIZER(ACollisionsGameModeBase)


#define Collisions_Source_Collisions_CollisionsGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollisionsGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollisionsGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollisionsGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollisionsGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollisionsGameModeBase(ACollisionsGameModeBase&&); \
	NO_API ACollisionsGameModeBase(const ACollisionsGameModeBase&); \
public:


#define Collisions_Source_Collisions_CollisionsGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollisionsGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollisionsGameModeBase(ACollisionsGameModeBase&&); \
	NO_API ACollisionsGameModeBase(const ACollisionsGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollisionsGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollisionsGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollisionsGameModeBase)


#define Collisions_Source_Collisions_CollisionsGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Collisions_Source_Collisions_CollisionsGameModeBase_h_12_PROLOG
#define Collisions_Source_Collisions_CollisionsGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collisions_Source_Collisions_CollisionsGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Collisions_Source_Collisions_CollisionsGameModeBase_h_15_RPC_WRAPPERS \
	Collisions_Source_Collisions_CollisionsGameModeBase_h_15_INCLASS \
	Collisions_Source_Collisions_CollisionsGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Collisions_Source_Collisions_CollisionsGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collisions_Source_Collisions_CollisionsGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Collisions_Source_Collisions_CollisionsGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Collisions_Source_Collisions_CollisionsGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Collisions_Source_Collisions_CollisionsGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLISIONS_API UClass* StaticClass<class ACollisionsGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Collisions_Source_Collisions_CollisionsGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
