// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPBooleanSubtractGameMode.h"
#include "CPPBooleanSubtractCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPPBooleanSubtractGameMode::ACPPBooleanSubtractGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
