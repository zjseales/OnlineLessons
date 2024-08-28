#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"

/** Called on game start.
 */
void ATower::BeginPlay()
{
    Super::BeginPlay();
    // Retrieve reference to tank object.
    Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void ATower::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Ensure Tank exists and find Distance Vector between Tower and tank.
    if (Tank)
    {
        float Distance = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());
        // if tank in range, rotate toward tank.
        if (Distance <= FireRange)
        {
            RotateTurret(Tank->GetActorLocation());
        }

        

    }
  
    

    
}
