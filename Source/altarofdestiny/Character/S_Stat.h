// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "S_Stat.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EStatName : uint8
{
	Health,
	Mana,
	Stamina,
	None
};

UCLASS()
class ALTAROFDESTINY_API US_Stat : public UObject
{
	GENERATED_BODY()

	US_Stat();
	EStatName m_statName;

	float m_minValue;
	float m_maxValue;
	float m_currentValue;
	float m_regenerationTime;
	float m_regenerationInterval;

	FTimerHandle TimerHandle_Regeneration;
};
