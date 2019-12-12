// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_PLAYERCAMERA_PawnWithCamera_generated_h
#error "PawnWithCamera.generated.h already included, missing '#pragma once' in PawnWithCamera.h"
#endif
#define HOWTO_PLAYERCAMERA_PawnWithCamera_generated_h

#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_RPC_WRAPPERS
#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnWithCamera(); \
	friend struct Z_Construct_UClass_APawnWithCamera_Statics; \
public: \
	DECLARE_CLASS(APawnWithCamera, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HowTo_PlayerCamera"), NO_API) \
	DECLARE_SERIALIZER(APawnWithCamera)


#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPawnWithCamera(); \
	friend struct Z_Construct_UClass_APawnWithCamera_Statics; \
public: \
	DECLARE_CLASS(APawnWithCamera, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HowTo_PlayerCamera"), NO_API) \
	DECLARE_SERIALIZER(APawnWithCamera)


#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnWithCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnWithCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnWithCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnWithCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnWithCamera(APawnWithCamera&&); \
	NO_API APawnWithCamera(const APawnWithCamera&); \
public:


#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnWithCamera(APawnWithCamera&&); \
	NO_API APawnWithCamera(const APawnWithCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnWithCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnWithCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnWithCamera)


#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OurCameraSpringArm() { return STRUCT_OFFSET(APawnWithCamera, OurCameraSpringArm); }


#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_11_PROLOG
#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_PRIVATE_PROPERTY_OFFSET \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_RPC_WRAPPERS \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_INCLASS \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_PRIVATE_PROPERTY_OFFSET \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_INCLASS_NO_PURE_DECLS \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_PLAYERCAMERA_API UClass* StaticClass<class APawnWithCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
