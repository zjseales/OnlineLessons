// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLECOURSE_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// The moving platforms speed.
	UPROPERTY(EditAnywhere, Category="Moving Platform")
	FVector PlatformVelocity = FVector(100, 0, 0);

	// The default maximum distance of the moving platform.
	UPROPERTY(EditAnywhere, Category="Moving Platform")
	float MaxDistance = 1000;

	// The starting location of the platform.
	FVector StartLocation;

	// Function to define platform movement
	void MovePlatform(float DeltaTime);

	// Function to define platform rotation
	void RotatePlatform(float DeltaTime);

};
