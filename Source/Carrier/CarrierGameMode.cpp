// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarrierGameMode.h"
#include "CarrierCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACarrierGameMode::ACarrierGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
