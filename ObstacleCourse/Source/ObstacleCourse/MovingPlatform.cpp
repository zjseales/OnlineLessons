// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();

	FString Name = GetName();

	UE_LOG(LogTemp, Display, TEXT("Begin moving: %s"), *Name);

}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);

	RotatePlatform(DeltaTime);

}

// Defines the movement of this platform object.
void AMovingPlatform::MovePlatform(float DeltaTime)
{
	// Move platform.
	FVector CurrentLocation = GetActorLocation();
	CurrentLocation += PlatformVelocity * DeltaTime;
	SetActorLocation(CurrentLocation);
	// reverse direction
	if(ShouldPlatformReturn())
	{
		FVector MovementDirection = PlatformVelocity.GetSafeNormal();
		StartLocation = StartLocation + MovementDirection * MaxDistance;
		SetActorLocation(StartLocation);
		PlatformVelocity *= -1;
	}
}

// Defines Platform Rotation
void AMovingPlatform::RotatePlatform(float DeltaTime)
{
	AddActorLocalRotation(RotationVelocity * DeltaTime);
}

// Returns a boolean defining whether the platform should change direction.
bool AMovingPlatform::ShouldPlatformReturn() const
{
	return GetDistanceTravelled() > MaxDistance;
}

// Returns the distance that the object has travelled from its start location.
float AMovingPlatform::GetDistanceTravelled() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}

