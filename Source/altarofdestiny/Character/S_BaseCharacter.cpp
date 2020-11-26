// Fill out your copyright notice in the Description page of Project Settings.


#include "S_BaseCharacter.h"
#include "Inventory/S_Inventory.h"

// Sets default values
AS_BaseCharacter::AS_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AS_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	m_inventory = NewObject<US_Inventory>(this, US_Inventory::StaticClass());
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

