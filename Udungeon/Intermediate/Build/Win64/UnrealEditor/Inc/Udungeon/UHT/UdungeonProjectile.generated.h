// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UdungeonProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UDUNGEON_UdungeonProjectile_generated_h
#error "UdungeonProjectile.generated.h already included, missing '#pragma once' in UdungeonProjectile.h"
#endif
#define UDUNGEON_UdungeonProjectile_generated_h

#define FID_Udungeon_Source_Udungeon_UdungeonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Udungeon_Source_Udungeon_UdungeonProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUdungeonProjectile(); \
	friend struct Z_Construct_UClass_AUdungeonProjectile_Statics; \
public: \
	DECLARE_CLASS(AUdungeonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Udungeon"), NO_API) \
	DECLARE_SERIALIZER(AUdungeonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Udungeon_Source_Udungeon_UdungeonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUdungeonProjectile(AUdungeonProjectile&&); \
	AUdungeonProjectile(const AUdungeonProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUdungeonProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUdungeonProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUdungeonProjectile) \
	NO_API virtual ~AUdungeonProjectile();


#define FID_Udungeon_Source_Udungeon_UdungeonProjectile_h_12_PROLOG
#define FID_Udungeon_Source_Udungeon_UdungeonProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Udungeon_Source_Udungeon_UdungeonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Udungeon_Source_Udungeon_UdungeonProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Udungeon_Source_Udungeon_UdungeonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UDUNGEON_API UClass* StaticClass<class AUdungeonProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Udungeon_Source_Udungeon_UdungeonProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
