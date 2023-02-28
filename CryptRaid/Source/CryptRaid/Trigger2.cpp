
#include "Trigger2.h"
#include "GameFramework/Actor.h"

UTrigger2::UTrigger2()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UTrigger2::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UTrigger2::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    bool KeysComplete = CheckKeys();

    if (KeysComplete)
    {
        UnlockDoor();
    }

}

// returns true if both keys have been placed.
bool UTrigger2::CheckKeys()
{
    TArray<AActor*> Actors;
    GetOverlappingActors(Actors);

    // iterate all Actors in the trigger box bounds.
    for(AActor* Actor: Actors)
    {
        //should put this in a reusable method
        if(Actor->ActorHasTag("GoldSkull"))
        {
            UE_LOG(LogTemp, Display, TEXT("Skull Placed."));
            FVector SkullLocation = FVector(4205.2579, 5598.499235, -295.19626);
            FRotator SkullRotation = FRotator(0, 0, 40);
            UPrimitiveComponent* SkullPrimitive = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
            SkullPrimitive->SetSimulatePhysics(false);
            Actor->SetActorLocationAndRotation(SkullLocation, SkullRotation);
            return true;
        }
    }
    return false;
}

// Assigns the secret door to the trigger.
void UTrigger2::SetMover(USecretWall* NewMover)
{
    Mover = NewMover;
}

// unlocks the door
void UTrigger2::UnlockDoor()
{
    if (Mover == nullptr)
    {
        return;
    }
    Mover->SetShouldMove(true);
}