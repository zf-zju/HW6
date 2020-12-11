// Copyright Epic Games, Inc. All Rights Reserved.

#include "HW3GameMode.h"
#include "HW3Character.h"
#include "UObject/ConstructorHelpers.h"

AHW3GameMode::AHW3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
