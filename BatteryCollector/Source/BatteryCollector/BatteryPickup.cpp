// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPickup.h"

ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);
	BatteryPower = 150.0f;
}

void ABatteryPickup::IsCollected_Implementation()
{
	Super::IsCollected_Implementation();
	Destroy();

}

float ABatteryPickup::GetPower()
{
	return BatteryPower;
}

