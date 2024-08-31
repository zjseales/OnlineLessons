#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ToonTanksPlayerController.generated.h"

/** ToonTanksPlayerController.h
 * 
 *  Custom Player controller for ToonTanks project.
 *  - derived from gamedev.tv lessons.
 */
UCLASS()
class TOONTANKS_API AToonTanksPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	void SetPlayerEnabledState(bool bPlayerEnabled);
	
};
