#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/** Tower.h
 * 	
 * 	Enemy towers that rotate toward, and attack the player pawn.
 *  @author Zac Seales (adapted from gamedev.tv "ToonTanks" lessons)
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()

public:

	virtual void Tick(float DeltaTime) override;
	
protected:
	// Called when the game starts / when a tower object is created
	virtual void BeginPlay() override;

private:
	// reference to the tank object.
	class ATank* Tank;

	UPROPERTY(EditDefaultsOnly, Category = "Attack Specs")
	float FireRange = 300.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Attack Specs")
	float FireRate = 2.f;

	FTimerHandle FireRateTimerHandle;
	void CheckFireCondition();
	bool InFireRange();

};
