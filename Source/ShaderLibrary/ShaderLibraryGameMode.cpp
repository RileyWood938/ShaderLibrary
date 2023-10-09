// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderLibraryGameMode.h"
#include "ShaderLibraryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShaderLibraryGameMode::AShaderLibraryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
