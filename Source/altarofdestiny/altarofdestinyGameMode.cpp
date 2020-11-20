// Copyright Epic Games, Inc. All Rights Reserved.

#include "altarofdestinyGameMode.h"
#include "altarofdestinyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AaltarofdestinyGameMode::AaltarofdestinyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
