// Fill out your copyright notice in the Description page of Project Settings.


#include "S_BaseCharacter.h"
#include "Inventory/S_Inventory.h"

// Sets default values
AS_BaseCharacter::AS_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;
	m_inventory = CreateDefaultSubobject<US_Inventory>(TEXT("Inventory"));
	if (m_inventory)
	{
		m_inventory->SetIsReplicated(true);
	}
}

// Called every frame
void AS_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AS_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AS_BaseCharacter::SetupDefaultStats()
{
	for (FDefaultStats defaultStat : m_defaultStats)
	{
		US_Stat* stat = US_Stat::Construct(defaultStat.statType, defaultStat.statName, defaultStat.minValue, defaultStat.maxValue, defaultStat.regenerationTime, defaultStat.regenerationInterval);
		m_stats.Add(stat);
	}
}

US_Stat* AS_BaseCharacter::GetStat(EStatsType _statType)
{
	for (US_Stat* stat : m_stats)
	{
		if (stat && stat->m_statType == _statType)
		{
			return stat;
		}
	}
	return nullptr;
}

// Called when the game starts or when spawned
void AS_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	SetupDefaultStats();
}

void AS_BaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}