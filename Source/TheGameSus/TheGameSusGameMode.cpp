// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheGameSusGameMode.h"
#include "TheGameSusHUD.h"
#include "TheGameSusCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheGameSusGameMode::ATheGameSusGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATheGameSusHUD::StaticClass();
}
