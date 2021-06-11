// Copyright Epic Games, Inc. All Rights Reserved.

#include "GamejamProjectGameMode.h"
#include "GamejamProjectHUD.h"
#include "GamejamProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGamejamProjectGameMode::AGamejamProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGamejamProjectHUD::StaticClass();
}
