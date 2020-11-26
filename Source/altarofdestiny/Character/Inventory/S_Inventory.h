// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "S_Inventory.generated.h"

/**
 * 
 */
UCLASS()
class ALTAROFDESTINY_API US_Inventory : public UObject
{
	GENERATED_BODY()

	US_Inventory();

private:

	TArray<class US_ItemBase*> m_items;
};
