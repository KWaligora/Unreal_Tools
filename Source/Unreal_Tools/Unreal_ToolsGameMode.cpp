// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_ToolsGameMode.h"
#include "Unreal_ToolsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_ToolsGameMode::AUnreal_ToolsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
