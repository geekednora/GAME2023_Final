// Copyright Epic Games, Inc. All Rights Reserved.

#include "Final_GastelloGameMode.h"
#include "Final_GastelloCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFinal_GastelloGameMode::AFinal_GastelloGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
