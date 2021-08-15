// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "S_PlayerState.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerNameUpdated, FString, PlayerName);

/**
 * 
 */
UCLASS()
class ALTAROFDESTINY_API AS_PlayerState : public APlayerState
{
	GENERATED_BODY()
	
#pragma region Functions
public:

	AS_PlayerState();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void OnRep_PlayerName() override;
protected:

private:

#pragma endregion //Functions

#pragma region Variables
public:

	UPROPERTY(BlueprintAssignable)
	FOnPlayerNameUpdated OnPlayerNameUpdated;

protected:

private:
#pragma endregion //Variables
};
