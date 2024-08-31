#include "ToonTanksGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"
#include "Tower.h"
#include "ToonTanksPlayerController.h"
#include "TimerManager.h"

void AToonTanksGameMode::BeginPlay()
{
    Super::BeginPlay();

    HandleGameStart();
}

void AToonTanksGameMode::HandleGameStart()
{
    // Set up win condition variable
    TotalTowers = GetTotalTowers();

    // retrieve tank pawn
    Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
    // retrieve player controller
    ToonTanksPlayerController = Cast<AToonTanksPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
    // Start Display, implemented in blueprints
    StartGame();

    // Delay player input for 3s on game start.
    if(ToonTanksPlayerController)
    {
        ToonTanksPlayerController->SetPlayerEnabledState(false);
        FTimerHandle PlayerEnableTimerHandle;
        FTimerDelegate EnableTimerDelegate = FTimerDelegate::CreateUObject(
            ToonTanksPlayerController, 
            &AToonTanksPlayerController::SetPlayerEnabledState,
            true
        );
        GetWorldTimerManager().SetTimer(PlayerEnableTimerHandle, EnableTimerDelegate, StartDelay, false);
    }
}

int32 AToonTanksGameMode::GetTotalTowers()
{
    TArray<AActor*> Towers;
    UGameplayStatics::GetAllActorsOfClass(this, ATower::StaticClass(), Towers);
    return Towers.Num();
}


// Manages actor death.
void AToonTanksGameMode::ActorDied(AActor* DeadActor)
{
    // Tank destruction
    if (DeadActor == Tank)
    {
        Tank->HandleDestruction();
        if(ToonTanksPlayerController)
        {
            ToonTanksPlayerController->SetPlayerEnabledState(false);
        }
        GameOver(false);
    }
    // Tower Destruction
    else if (ATower* DeadTower = Cast<ATower>(DeadActor))
    {
        DeadTower->HandleDestruction();
        TotalTowers--;
        if (TotalTowers == 0)
        {
            GameOver(true);
        }
    }
}