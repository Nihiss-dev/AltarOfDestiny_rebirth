// Fill out your copyright notice in the Description page of Project Settings.


#include "S_PlayerState.h"

// Engine includes
#include "Net/UnrealNetwork.h"

AS_PlayerState::AS_PlayerState()
{
	bUseCustomPlayerNames = true;
}

void AS_PlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void AS_PlayerState::OnRep_PlayerName()
{
	OnPlayerNameUpdated.Broadcast(GetPlayerName());
}