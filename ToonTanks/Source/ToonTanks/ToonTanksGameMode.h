#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ToonTanksGameMode.generated.h"

/** ToonTanksGameMode.h
 * 	
 * 	Defines rules of the ToonTanks game.
 *  Adapted from gamedev.tv "ToonTanks" lessons. 
 */

UCLASS()
class TOONTANKS_API AToonTanksGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	void ActorDied(AActor* DeadActor);

protected:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void StartGame();

	UFUNCTION(BlueprintImplementableEvent)
	void GameOver(bool bGameWon);

private:
	class ATank* Tank;
	class AToonTanksPlayerController* ToonTanksPlayerController;
	// manage number of towers for win condition
	int32 TotalTowers = 0;
	int32 GetTotalTowers();

	// start delay time.
	float StartDelay = 3.f;

	void HandleGameStart();
	
};
