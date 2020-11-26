// Fill out your copyright notice in the Description page of Project Settings.


#include "S_Stat.h"

US_Stat::US_Stat()
{
	m_statName = EStatName::None;
	m_minValue = 0.0f;
	m_maxValue = 100.0f;
	m_regenerationTime = 20.0f;
	m_regenerationInterval = 1.0f;
}