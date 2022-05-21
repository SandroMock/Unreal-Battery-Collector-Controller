// Copyright Epic Games, Inc. All Rights Reserved.

#include "BatteryCollectorGameMode.h"
#include "BatteryCollectorCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

ABatteryCollectorGameMode::ABatteryCollectorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	DecayRate = 0.01f;

}

	void ABatteryCollectorGameMode::Tick(float DeltaTIme)
	{
		Super::Tick(DeltaTIme);

		ABatteryCollectorCharacter* MyCharacter = Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
		if (MyCharacter)
		{
			if (MyCharacter->GetCurrentPower() > 0)
			{
				UE_LOG(LogTemp, Warning, TEXT("Ich verliere Power!"));
				MyCharacter->UpdatePower(-DeltaTIme * DecayRate * (MyCharacter->GetInitialPower()));
			}
		}
	}