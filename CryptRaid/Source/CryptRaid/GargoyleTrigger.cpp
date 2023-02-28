
#include "GargoyleTrigger.h"
#include "GameFramework/Actor.h"

UGargoyleTrigger::UGargoyleTrigger()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UGargoyleTrigger::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UGargoyleTrigger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    bool KeysComplete = CheckKeys();

    if (KeysComplete)
    {
        UnlockDoor();
    }

}

// returns true if both keys have been placed.
bool UGargoyleTrigger::CheckKeys()
{
    TArray<AActor*> Actors;
    GetOverlappingActors(Actors);

    // iterate all Actors in the trigger box bounds.
    for(AActor* Actor: Actors)
    {
        //should put this in a reusable method
        if(Actor->ActorHasTag("Gargoyle"))
        {
            FVector GargoyleLocation = FVector(1555.628423, 6492.012074, -343.172668);
            FRotator GargoyleRotation = FRotator(0, 110, 0);
            UPrimitiveComponent* GargoylePrimitive = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
            GargoylePrimitive->SetSimulatePhysics(false);
            Actor->SetActorLocationAndRotation(GargoyleLocation, GargoyleRotation);
            return true;
        }
    }
    return false;
}

// Assigns the secret door to the trigger.
void UGargoyleTrigger::SetMover(UUnlockableDoor* NewMover)
{
    Mover = NewMover;
}

// unlocks the door
void UGargoyleTrigger::UnlockDoor()
{
    if (Mover == nullptr)
    {
        return;
    }
    Mover->SetShouldMove(true);
}

