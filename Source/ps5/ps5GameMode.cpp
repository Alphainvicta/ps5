// Copyright Epic Games, Inc. All Rights Reserved.

#include "ps5GameMode.h"
#include "ps5Character.h"
#include "UObject/ConstructorHelpers.h"

Aps5GameMode::Aps5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
