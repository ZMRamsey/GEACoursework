// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIREBALL_Countdown_generated_h
#error "Countdown.generated.h already included, missing '#pragma once' in Countdown.h"
#endif
#define FIREBALL_Countdown_generated_h

#define Fireball_Source_Fireball_Countdown_h_12_RPC_WRAPPERS \
	virtual void CountdownHasFinished_Implementation(); \
 \
	DECLARE_FUNCTION(execCountdownHasFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CountdownHasFinished_Implementation(); \
		P_NATIVE_END; \
	}


#define Fireball_Source_Fireball_Countdown_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCountdownHasFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CountdownHasFinished_Implementation(); \
		P_NATIVE_END; \
	}


#define Fireball_Source_Fireball_Countdown_h_12_EVENT_PARMS
#define Fireball_Source_Fireball_Countdown_h_12_CALLBACK_WRAPPERS
#define Fireball_Source_Fireball_Countdown_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACountdown(); \
	friend struct Z_Construct_UClass_ACountdown_Statics; \
public: \
	DECLARE_CLASS(ACountdown, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fireball"), NO_API) \
	DECLARE_SERIALIZER(ACountdown)


#define Fireball_Source_Fireball_Countdown_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACountdown(); \
	friend struct Z_Construct_UClass_ACountdown_Statics; \
public: \
	DECLARE_CLASS(ACountdown, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fireball"), NO_API) \
	DECLARE_SERIALIZER(ACountdown)


#define Fireball_Source_Fireball_Countdown_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACountdown(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACountdown) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACountdown); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACountdown); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACountdown(ACountdown&&); \
	NO_API ACountdown(const ACountdown&); \
public:


#define Fireball_Source_Fireball_Countdown_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACountdown(ACountdown&&); \
	NO_API ACountdown(const ACountdown&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACountdown); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACountdown); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACountdown)


#define Fireball_Source_Fireball_Countdown_h_12_PRIVATE_PROPERTY_OFFSET
#define Fireball_Source_Fireball_Countdown_h_9_PROLOG \
	Fireball_Source_Fireball_Countdown_h_12_EVENT_PARMS


#define Fireball_Source_Fireball_Countdown_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fireball_Source_Fireball_Countdown_h_12_PRIVATE_PROPERTY_OFFSET \
	Fireball_Source_Fireball_Countdown_h_12_RPC_WRAPPERS \
	Fireball_Source_Fireball_Countdown_h_12_CALLBACK_WRAPPERS \
	Fireball_Source_Fireball_Countdown_h_12_INCLASS \
	Fireball_Source_Fireball_Countdown_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fireball_Source_Fireball_Countdown_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fireball_Source_Fireball_Countdown_h_12_PRIVATE_PROPERTY_OFFSET \
	Fireball_Source_Fireball_Countdown_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Fireball_Source_Fireball_Countdown_h_12_CALLBACK_WRAPPERS \
	Fireball_Source_Fireball_Countdown_h_12_INCLASS_NO_PURE_DECLS \
	Fireball_Source_Fireball_Countdown_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBALL_API UClass* StaticClass<class ACountdown>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fireball_Source_Fireball_Countdown_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
