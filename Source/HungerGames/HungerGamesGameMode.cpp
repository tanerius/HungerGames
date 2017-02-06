// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "HungerGames.h"
#include "HungerGamesGameMode.h"
#include "HungerGamesHUD.h"
#include "HungerGamesCharacter.h"

AHungerGamesGameMode::AHungerGamesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behaviour/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHungerGamesHUD::StaticClass();
}
