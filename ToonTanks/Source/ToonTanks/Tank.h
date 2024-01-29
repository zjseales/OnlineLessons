#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/** Tank.h
 *  Header file for the Tank class.
 * 
 *	@author ZacSeales using https://www.gamedev.tv/courses/1638644
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()

public:
	// Constructor: Sets default values for properties of a tank.
	ATank();
	// Called to bind functionality to input (Tank controls)
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USpringArmComponent* springArmComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent* cameraComp;

	void Move(float value);
	void Turn(float value);
	
};
