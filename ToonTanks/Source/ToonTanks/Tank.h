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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Components
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USpringArmComponent* springArmComp;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent* cameraComp;

	// movement variables
	UPROPERTY(EditAnywhere, Category = "Movement")
	float moveSpeed = 250.0f;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float turnSpeed = 100.0f;

	// movement controls
	void Move(float value);
	void Turn(float value);

	APlayerController* playerControllerRef;
	
};
