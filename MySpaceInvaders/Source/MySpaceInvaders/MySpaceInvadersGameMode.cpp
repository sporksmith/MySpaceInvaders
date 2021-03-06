// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MySpaceInvadersGameMode.h"
#include "MySpaceInvadersCharacter.h"

AMySpaceInvadersGameMode::AMySpaceInvadersGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AMySpaceInvadersCharacter::StaticClass();	
}
