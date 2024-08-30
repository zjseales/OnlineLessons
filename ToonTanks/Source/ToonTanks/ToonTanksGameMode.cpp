#include "ToonTanksGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"
#include "Tower.h"

void AToonTanksGameMode::BeginPlay()
{
    Super::BeginPlay();
    // retrieve tank pawn reference
    Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

// Manages actor death.
void AToonTanksGameMode::ActorDied(AActor* DeadActor)
{
    // Tank destruction
    if (DeadActor == Tank)
    {
        Tank->HandleDestruction();
        if(APlayerController* playerController = Tank->GetTankController())
        {
            Tank->DisableInput(playerController);
            playerController->bShowMouseCursor = false;
        }
    }
    // Tower Destruction
    else if (ATower* DeadTower = Cast<ATower>(DeadActor))
    {
        DeadTower->HandleDestruction();
    }
}