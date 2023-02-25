// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CryptRaidProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CRYPTRAID_CryptRaidProjectile_generated_h
#error "CryptRaidProjectile.generated.h already included, missing '#pragma once' in CryptRaidProjectile.h"
#endif
#define CRYPTRAID_CryptRaidProjectile_generated_h

#define FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_SPARSE_DATA
#define FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_ACCESSORS
#define FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACryptRaidProjectile(); \
	friend struct Z_Construct_UClass_ACryptRaidProjectile_Statics; \
public: \
	DECLARE_CLASS(ACryptRaidProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptRaid"), NO_API) \
	DECLARE_SERIALIZER(ACryptRaidProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACryptRaidProjectile(); \
	friend struct Z_Construct_UClass_ACryptRaidProjectile_Statics; \
public: \
	DECLARE_CLASS(ACryptRaidProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptRaid"), NO_API) \
	DECLARE_SERIALIZER(ACryptRaidProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACryptRaidProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACryptRaidProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptRaidProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptRaidProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACryptRaidProjectile(ACryptRaidProjectile&&); \
	NO_API ACryptRaidProjectile(const ACryptRaidProjectile&); \
public: \
	NO_API virtual ~ACryptRaidProjectile();


#define FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACryptRaidProjectile(ACryptRaidProjectile&&); \
	NO_API ACryptRaidProjectile(const ACryptRaidProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptRaidProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptRaidProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACryptRaidProjectile) \
	NO_API virtual ~ACryptRaidProjectile();


#define FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_12_PROLOG
#define FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_SPARSE_DATA \
	FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_RPC_WRAPPERS \
	FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_ACCESSORS \
	FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_INCLASS \
	FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_SPARSE_DATA \
	FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_ACCESSORS \
	FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRYPTRAID_API UClass* StaticClass<class ACryptRaidProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zac_Documents_OnlineLessons_CryptRaid_Source_CryptRaid_CryptRaidProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
