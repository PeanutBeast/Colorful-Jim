// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Colorful_Jim.h"
#include "Colorful_JimGameMode.h"
#include "Colorful_JimCharacter.h"

AColorful_JimGameMode::AColorful_JimGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
