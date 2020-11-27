// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "S_Stat.h"
#include "S_BaseCharacter.generated.h"

UCLASS()
class ALTAROFDESTINY_API AS_BaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AS_BaseCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetupDefaultStats();

	UFUNCTION(BlueprintCallable, Category = "Stats")
	US_Stat* GetStat(EStatsType _statType);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Stats")
	TArray<FDefaultStats> m_defaultStats;

private:
	class US_Inventory* m_inventory;

	TArray<US_Stat*> m_stats;
};
