// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "S_Inventory.generated.h"

class US_Item;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ALTAROFDESTINY_API US_Inventory : public UActorComponent
{
	GENERATED_BODY()

#pragma region Functions
public:	
	// Sets default values for this component's properties
	US_Inventory();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AddItem(US_Item* _item);
	bool RemoveItem(US_Item* _item);
	TArray<US_Item*> const GetItems() const;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

#pragma endregion //Functions

#pragma region Variables

private:
	TArray<US_Item*> m_items;

#pragma region //Variables
};
