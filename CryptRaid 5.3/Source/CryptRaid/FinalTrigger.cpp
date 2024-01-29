
#include "FinalTrigger.h"
#include "GameFramework/Actor.h"

UFinalTrigger::UFinalTrigger()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UFinalTrigger::BeginPlay()
{
	Super::BeginPlay();
    
}


// Called every frame
void UFinalTrigger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    bool Treasure = CheckTreasure();

    if (Treasure)
    {
        OpenDoor();
    }
    if (!Treasure)
    {
        CloseDoor();
    }

}

// returns true if both keys have been placed.
bool UFinalTrigger::CheckTreasure()
{
    TArray<AActor*> Actors;
    GetOverlappingActors(Actors);

    // iterate all Actors in the trigger box bounds.
    for(AActor* Actor: Actors)
    {
        //should put this in a reusable method
        if(Actor->ActorHasTag("Treasure"))
        {
            return true;
        }
        if(Actor->ActorHasTag("FakeTreasure"))
        {
            FVector FakeLocation = FVector(3710.383226, 10733.551821, -252.158473);
            FRotator FakeRotation = FRotator(0, -190, 0);
            UPrimitiveComponent* FakePrimitive = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
            FakePrimitive->SetSimulatePhysics(false);
            Actor->SetActorLocationAndRotation(FakeLocation, FakeRotation);
            return true;
        }
    }
    return false;
}

// Assigns the secret door to the trigger.
void UFinalTrigger::SetMover(USecretWall* NewMover)
{
    Mover = NewMover;
}

// unlocks the door
void UFinalTrigger::OpenDoor()
{
    if (Mover == nullptr)
    {
        return;
    }
    Mover->SetShouldMove(true);
}

// locks the door
void UFinalTrigger::CloseDoor()
{
    if (Mover == nullptr)
    {
        return;
    }
    Mover->SetShouldMove(false);
}