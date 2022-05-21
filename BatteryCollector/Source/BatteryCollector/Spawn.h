// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Spawn.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API ASpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawn();

	FORCEINLINE UBoxComponent* GetWhereToSpwan() const { return WhereToSpawn; }

	UFUNCTION(BlueprintPure, Category = "Spawning")
	FVector GetRandomPosition();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class APickup> WhatToSpawn;

	FTimerHandle SpawnTimer;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Spawning")
	float MinDelay;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Spawning")
	float MaxDelay;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* WhereToSpawn;

	void SpawnPickup();

	float CurrentDelay;
};
