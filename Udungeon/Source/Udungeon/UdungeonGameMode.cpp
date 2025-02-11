// Copyright Epic Games, Inc. All Rights Reserved.

#include "UdungeonGameMode.h"
#include "UdungeonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUdungeonGameMode::AUdungeonGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
