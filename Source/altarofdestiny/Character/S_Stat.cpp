// Fill out your copyright notice in the Description page of Project Settings.


#include "S_Stat.h"

US_Stat::US_Stat()
{
	m_statType = EStatsType::None;
	m_statName = "None";
	m_minValue = 0.0f;
	m_maxValue = 100.0f;
	m_regenerationTime = 20.0f;
	m_regenerationInterval = 1.0f;
}

US_Stat* US_Stat::Construct(EStatsType _statType, FName _statName, float _minValue, float _maxValue, float _regenerationTime, float _regenerationInterval)
{
	US_Stat *stat = NewObject<US_Stat>();

	stat->m_statType = _statType;
	stat->m_statName = _statName;
	stat->m_minValue = _minValue;
	stat->m_maxValue = _maxValue;
	stat->m_currentValue = _maxValue;
	stat->m_regenerationTime = _regenerationTime;
	stat->m_regenerationInterval = _regenerationInterval;

	return stat;
}