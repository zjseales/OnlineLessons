
#include "TriggerComponent.h"
#include "GameFramework/Actor.h"

UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    bool KeysComplete = CheckKeys();

    if (KeysComplete)
    {
        UnlockDoor();
    }

}

// returns true if both keys have been placed.
bool UTriggerComponent::CheckKeys()
{
    TArray<AActor*> Actors;
    GetOverlappingActors(Actors);

    int32 keys = 0;

    // iterate all Actors in the trigger box bounds.
    for(AActor* Actor: Actors)
    {
        //should put this in a reusable method
        if(Actor->ActorHasTag("Arm1"))
        {
            FVector ArmLocation = FVector(-1739.252079, 2400.368324, 74.149317);
            FRotator ArmRotation = FRotator(31.910073, 6.303607, 101.803848);
            UPrimitiveComponent* ArmPrimitive = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
            ArmPrimitive->SetSimulatePhysics(false);
            Actor->SetActorLocationAndRotation(ArmLocation, ArmRotation);
            keys++;
        }
        if(Actor->ActorHasTag("Leg1"))
        {
            FVector LegLocation = FVector(-1670.876809, 2407.398451, 44.243646);
            FRotator LegRotation = FRotator(68.010444, -13.864153, -84.340322);
            UPrimitiveComponent* LegPrimitive = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
            LegPrimitive->SetSimulatePhysics(false);
            Actor->SetActorLocationAndRotation(LegLocation, LegRotation);
            keys++;
        }
    }
    if(keys == 2)
    {
        return true;
    }
    return false;
}

// Assigns the secret door to the trigger.
void UTriggerComponent::SetMover(USecretWall* NewMover)
{
    Mover = NewMover;
}

// unlocks the door
void UTriggerComponent::UnlockDoor()
{
    if (Mover == nullptr)
    {
        return;
    }
    Mover->SetShouldMove(true);
}