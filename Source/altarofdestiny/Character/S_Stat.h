// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "S_Stat.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EStatsType : uint8
{
	Health,
	Mana,
	Stamina,
	None
};

USTRUCT(BlueprintType)
struct FDefaultStats
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatsType statType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName statName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float minValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float maxValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float regenerationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float regenerationInterval;
};

UCLASS()
class ALTAROFDESTINY_API US_Stat : public UObject
{
	GENERATED_BODY()

public:
	US_Stat();
	static US_Stat* Construct(EStatsType _statType, FName _statName, float _minValue, float _maxValue, float _regenerationTime, float _regenerationInterval);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatsType m_statType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName m_statName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_minValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_maxValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_currentValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_regenerationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_regenerationInterval;

	FTimerHandle TimerHandle_Regeneration;
};
