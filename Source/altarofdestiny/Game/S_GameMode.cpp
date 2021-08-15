// Copyright Epic Games, Inc. All Rights Reserved.

#include "S_GameMode.h"
#include "UObject/ConstructorHelpers.h"

// Engine includes
#include "Kismet/KismetSystemLibrary.h"

// Project includes
#include "altarofdestiny/Character/Player/S_PlayerState.h"

int numPlayers = 0;

AS_GameMode::AS_GameMode()
{
}

void AS_GameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
}

APlayerController* AS_GameMode::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	return Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
}

void AS_GameMode::PostLogin(APlayerController* _newPlayerController)
{
	Super::PostLogin(_newPlayerController);
	UKismetSystemLibrary::PrintString(this, "PostLogin");
	AS_PlayerState* newPlayerState = _newPlayerController->GetPlayerState<AS_PlayerState>();
	if (newPlayerState)
	{
		FString name = "Player" + FString::FromInt(numPlayers);
		newPlayerState->SetPlayerName(name);
	}
	numPlayers++;
}

void AS_GameMode::Logout(AController* _leavingController)
{
	Super::Logout(_leavingController);
}