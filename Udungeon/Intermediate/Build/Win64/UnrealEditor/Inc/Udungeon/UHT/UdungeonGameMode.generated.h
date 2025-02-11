// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UdungeonGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UDUNGEON_UdungeonGameMode_generated_h
#error "UdungeonGameMode.generated.h already included, missing '#pragma once' in UdungeonGameMode.h"
#endif
#define UDUNGEON_UdungeonGameMode_generated_h

#define FID_Udungeon_Source_Udungeon_UdungeonGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUdungeonGameMode(); \
	friend struct Z_Construct_UClass_AUdungeonGameMode_Statics; \
public: \
	DECLARE_CLASS(AUdungeonGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Udungeon"), UDUNGEON_API) \
	DECLARE_SERIALIZER(AUdungeonGameMode)


#define FID_Udungeon_Source_Udungeon_UdungeonGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUdungeonGameMode(AUdungeonGameMode&&); \
	AUdungeonGameMode(const AUdungeonGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UDUNGEON_API, AUdungeonGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUdungeonGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUdungeonGameMode) \
	UDUNGEON_API virtual ~AUdungeonGameMode();


#define FID_Udungeon_Source_Udungeon_UdungeonGameMode_h_9_PROLOG
#define FID_Udungeon_Source_Udungeon_UdungeonGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Udungeon_Source_Udungeon_UdungeonGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Udungeon_Source_Udungeon_UdungeonGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UDUNGEON_API UClass* StaticClass<class AUdungeonGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Udungeon_Source_Udungeon_UdungeonGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
