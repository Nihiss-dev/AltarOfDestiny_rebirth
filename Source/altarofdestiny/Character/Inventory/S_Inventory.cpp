// Fill out your copyright notice in the Description page of Project Settings.


#include "S_Inventory.h"

// Sets default values for this component's properties
US_Inventory::US_Inventory()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void US_Inventory::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void US_Inventory::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void US_Inventory::AddItem(US_Item* _item)
{
	m_items.Add(_item);
}

bool US_Inventory::RemoveItem(US_Item* _item)
{
	return (m_items.Remove(_item) == 1);
}

TArray<US_Item*> const US_Inventory::GetItems() const
{
	return m_items;
}