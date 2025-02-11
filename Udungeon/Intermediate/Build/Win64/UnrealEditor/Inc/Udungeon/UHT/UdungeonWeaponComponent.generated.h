// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UdungeonWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUdungeonCharacter;
#ifdef UDUNGEON_UdungeonWeaponComponent_generated_h
#error "UdungeonWeaponComponent.generated.h already included, missing '#pragma once' in UdungeonWeaponComponent.h"
#endif
#define UDUNGEON_UdungeonWeaponComponent_generated_h

#define FID_Udungeon_Source_Udungeon_UdungeonWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Udungeon_Source_Udungeon_UdungeonWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUdungeonWeaponComponent(); \
	friend struct Z_Construct_UClass_UUdungeonWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UUdungeonWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Udungeon"), NO_API) \
	DECLARE_SERIALIZER(UUdungeonWeaponComponent)


#define FID_Udungeon_Source_Udungeon_UdungeonWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUdungeonWeaponComponent(UUdungeonWeaponComponent&&); \
	UUdungeonWeaponComponent(const UUdungeonWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUdungeonWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUdungeonWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUdungeonWeaponComponent) \
	NO_API virtual ~UUdungeonWeaponComponent();


#define FID_Udungeon_Source_Udungeon_UdungeonWeaponComponent_h_11_PROLOG
#define FID_Udungeon_Source_Udungeon_UdungeonWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Udungeon_Source_Udungeon_UdungeonWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Udungeon_Source_Udungeon_UdungeonWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Udungeon_Source_Udungeon_UdungeonWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UDUNGEON_API UClass* StaticClass<class UUdungeonWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Udungeon_Source_Udungeon_UdungeonWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
