
#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SecretWall.h"
#include "FinalTrigger.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRYPTRAID_API UFinalTrigger : public UBoxComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFinalTrigger();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void OpenDoor();

	
	UFUNCTION(BlueprintCallable)
	void CloseDoor();

	UFUNCTION(BlueprintCallable)
	void SetMover(USecretWall* NewMover);

private:
	bool CheckTreasure();
	// the door connected to this trigger
	USecretWall* Mover;
};
