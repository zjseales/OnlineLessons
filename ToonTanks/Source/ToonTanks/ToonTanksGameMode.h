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

private:

	class ATank* Tank;
	
};
