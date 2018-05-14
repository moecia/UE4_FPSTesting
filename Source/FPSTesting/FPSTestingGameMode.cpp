// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FPSTestingGameMode.h"
#include "FPSTestingHUD.h"
#include "FPSTestingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSTestingGameMode::AFPSTestingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSTestingHUD::StaticClass();
}
