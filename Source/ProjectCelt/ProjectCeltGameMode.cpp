// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectCeltGameMode.h"
#include "ProjectCeltCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectCeltGameMode::AProjectCeltGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
