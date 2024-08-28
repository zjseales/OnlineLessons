#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

/** Called on game start.
 */
void ATower::BeginPlay()
{
    Super::BeginPlay();
    // Retrieve reference to tank object.
    Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
    // Calls CheckFireCondition every t seconds (t = FireRate).
    GetWorldTimerManager().SetTimer(FireRateTimerHandle, this, &ATower::CheckFireCondition, FireRate, true);
}

/** Fire projectile if tank in range.
 */
void ATower::CheckFireCondition()
{
    if (InFireRange())
    {
        Fire();
    }
}
/** Returns true if Tank is in firing range of Tower, else false.
 */
bool ATower::InFireRange()
{
    // Ensure Tank exists and find Distance between Tower and tank.
    if (Tank)
    {
        // distance to tank
        float Distance = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());
        if (Distance <= FireRange)
        {
            return true;
        }
    }
    return false;
}

void ATower::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Rotate toward tank if in fire range.
    if (InFireRange())
    {
        RotateTurret(Tank->GetActorLocation());
    } 
}
