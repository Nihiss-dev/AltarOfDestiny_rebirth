// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "S_GameMode.generated.h"

UCLASS(minimalapi)
class AS_GameMode : public AGameModeBase
{
	GENERATED_BODY()

#pragma region Functions
public:
	AS_GameMode();

	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage);
	virtual void PostLogin(APlayerController* _newPlayerController) override;
	virtual void Logout(AController* _leavingController) override;
protected:

private:

#pragma endregion //Functions

#pragma region Variables
public:

protected:

private:

#pragma endregion //Variables
};