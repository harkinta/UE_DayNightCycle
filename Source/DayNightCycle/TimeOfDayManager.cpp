// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeOfDayManager.h"
#include "EngineUtils.h"
#include "Engine/DirectionalLight.h"

// Sets default values
ATimeOfDayManager::ATimeOfDayManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATimeOfDayManager::BeginPlay()
{
	Super::BeginPlay();
	
	// Find the Directional Light (Sun)
	for (TActorIterator<ADirectionalLight> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		SunLight = *ActorItr;
		break; // Stop after finding the first one
	};

	if (!SunLight)
	{
		UE_LOG(LogTemp, Warning, TEXT("No DirectionalLight found!"));
	}
}

// Called every frame
void ATimeOfDayManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Update the current time
	CurrentTime -= DeltaTime * TimeMultiplier;
	
	if (CurrentTime > 24.0f)
	{
		CurrentTime -= 24.0f;
	}

	UpdateSunPosition();
}

void ATimeOfDayManager::UpdateSunPosition()
{
	if (SunLight)
	{
		// Calculate sun rotation based on time
		float SunRotation = CurrentTime / 24.0f * 360.0f;

		// Set the sun's rotation (pitch only for day/night cycle)
		SunLight->SetActorRotation(FRotator(SunRotation, 0.0f, 0.0f));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No SunLight found!"));
	}
}

