// Fill out your copyright notice in the Description page of Project Settings.


#include "UnlockableDoor.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UUnlockableDoor::UUnlockableDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UUnlockableDoor::BeginPlay()
{
	Super::BeginPlay();
	OriginalRotation = GetOwner()->GetActorRotation();
}


// Called every frame
void UUnlockableDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Open Door
	if(ShouldMove)
	{
		FRotator CurrentRotation = GetOwner()->GetActorRotation();
		float Speed = 27.5;
		FRotator NewRotation = FMath::RInterpConstantTo(CurrentRotation, TargetRotation, DeltaTime, Speed);
		GetOwner()->SetActorRotation(NewRotation);
	}

}

// Sets the mover to the boolean parameter
void UUnlockableDoor::SetShouldMove(bool b)
{
	ShouldMove = b;
}

