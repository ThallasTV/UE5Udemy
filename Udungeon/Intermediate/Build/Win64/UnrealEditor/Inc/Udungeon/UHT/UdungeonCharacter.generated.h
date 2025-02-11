// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UdungeonCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UDUNGEON_UdungeonCharacter_generated_h
#error "UdungeonCharacter.generated.h already included, missing '#pragma once' in UdungeonCharacter.h"
#endif
#define UDUNGEON_UdungeonCharacter_generated_h

#define FID_Udungeon_Source_Udungeon_UdungeonCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUdungeonCharacter(); \
	friend struct Z_Construct_UClass_AUdungeonCharacter_Statics; \
public: \
	DECLARE_CLASS(AUdungeonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Udungeon"), NO_API) \
	DECLARE_SERIALIZER(AUdungeonCharacter)


#define FID_Udungeon_Source_Udungeon_UdungeonCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUdungeonCharacter(AUdungeonCharacter&&); \
	AUdungeonCharacter(const AUdungeonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUdungeonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUdungeonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUdungeonCharacter) \
	NO_API virtual ~AUdungeonCharacter();


#define FID_Udungeon_Source_Udungeon_UdungeonCharacter_h_19_PROLOG
#define FID_Udungeon_Source_Udungeon_UdungeonCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Udungeon_Source_Udungeon_UdungeonCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Udungeon_Source_Udungeon_UdungeonCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UDUNGEON_API UClass* StaticClass<class AUdungeonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Udungeon_Source_Udungeon_UdungeonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
