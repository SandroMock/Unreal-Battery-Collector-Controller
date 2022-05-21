// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawn.h"
#include "GameFramework/Actor.h"
#include "Pickup.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ASpawn::ASpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	WhereToSpawn = CreateDefaultSubobject<UBoxComponent>(TEXT("Where to spwan"));
	RootComponent = WhereToSpawn;

	MinDelay = 2.0f;
	MaxDelay = 5.0f;

}

// Called when the game starts or when spawned
void ASpawn::BeginPlay()
{
	Super::BeginPlay();
	CurrentDelay = FMath::FRandRange(MinDelay, MaxDelay);
	GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawn::SpawnPickup, CurrentDelay, false);
}

// Called every frame
void ASpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector ASpawn::GetRandomPosition()
{
	FVector Origin = WhereToSpawn->Bounds.Origin;
	FVector Extent = WhereToSpawn->Bounds.BoxExtent; 

	return UKismetMathLibrary::RandomPointInBoundingBox(Origin, Extent);
}

void ASpawn::SpawnPickup()
{
	if (WhatToSpawn != NULL)
	{
		UWorld* const World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;

			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			FVector SpawnPos = GetRandomPosition();
			FRotator SpawnRot;
			SpawnRot.Yaw = FMath::FRand() * 360.0f;
			SpawnRot.Pitch = FMath::FRand() * 360.0f;
			SpawnRot.Roll = FMath::FRand() * 360.0f;

			APickup* const SpawnedPickup = World->SpawnActor<APickup>(WhatToSpawn, SpawnPos, SpawnRot, SpawnParams);

			CurrentDelay = FMath::FRandRange(MinDelay, MaxDelay);
			GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawn::SpawnPickup, CurrentDelay, false);
		}
	}
}

