#include "SecretWall.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
USecretWall::USecretWall()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USecretWall::BeginPlay()
{
	Super::BeginPlay();

	OriginalLocation = GetOwner()->GetActorLocation();
	
}


// Called every frame
void USecretWall::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Move Wall
	if(ShouldMove)
	{
		FVector CurrentLocation = GetOwner()->GetActorLocation();
		FVector TargetLocation = OriginalLocation + MoveOffset;
		float Speed = FVector::Distance(OriginalLocation, TargetLocation) / MoveTime;
		FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, Speed);

		GetOwner()->SetActorLocation(NewLocation);
	}
}

// Sets the mover to the boolean parameter
void USecretWall::SetShouldMove(bool b)
{
	ShouldMove = b;
}

