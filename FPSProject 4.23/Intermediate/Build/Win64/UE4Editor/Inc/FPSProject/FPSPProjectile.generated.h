// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FPSPROJECT_FPSPProjectile_generated_h
#error "FPSPProjectile.generated.h already included, missing '#pragma once' in FPSPProjectile.h"
#endif
#define FPSPROJECT_FPSPProjectile_generated_h

#define FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPProjectile(); \
	friend struct Z_Construct_UClass_AFPSPProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSPProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSPProjectile)


#define FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSPProjectile(); \
	friend struct Z_Construct_UClass_AFPSPProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSPProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSPProjectile)


#define FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPProjectile(AFPSPProjectile&&); \
	NO_API AFPSPProjectile(const AFPSPProjectile&); \
public:


#define FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPProjectile(AFPSPProjectile&&); \
	NO_API AFPSPProjectile(const AFPSPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSPProjectile)


#define FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_PRIVATE_PROPERTY_OFFSET
#define FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_11_PROLOG
#define FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_RPC_WRAPPERS \
	FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_INCLASS \
	FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_INCLASS_NO_PURE_DECLS \
	FPSProject_4_23_Source_FPSProject_FPSPProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROJECT_API UClass* StaticClass<class AFPSPProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSProject_4_23_Source_FPSProject_FPSPProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
