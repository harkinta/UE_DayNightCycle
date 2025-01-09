// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimeOfDayManager.generated.h"

class ADirectionalLight;

UCLASS()
class DAYNIGHTCYCLE_API ATimeOfDayManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimeOfDayManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category = "Time of Day")
	float TimeMultiplier = 0.2f; // Controls how fast time passes

	UPROPERTY(EditAnywhere, Category = "Time of Day")
	float CurrentTime = 0.0f; // Current time in hours (0-24)

	UPROPERTY()
	ADirectionalLight* SunLight;

	void UpdateSunPosition();
};
