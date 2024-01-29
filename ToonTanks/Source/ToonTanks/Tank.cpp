#include "Tank.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Constructor : Sets default values of a tank.
ATank::ATank()
{
	// Construct a Spring Arm component and attach to root.
    springArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    springArmComp->SetupAttachment(RootComponent);
    // Construct a camera component and attach to Spring Arm.
    cameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    cameraComp->SetupAttachment(springArmComp);
}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    // Bind the Move function to the MoveForward action.
    PlayerInputComponent->BindAxis("MoveForward", this, &ATank::Move);
    // Bind the Turn function to the TurnRight action.
    PlayerInputComponent->BindAxis("Turn", this, &ATank::Turn);

}

void ATank::Move(float value)
{
    // Move the tank forward or backward.
    FVector deltaLocation = FVector::ZeroVector;
    deltaLocation.X = value;
    AddActorLocalOffset(deltaLocation);
    AddActorWorldOffset(movement);
    UE_LOG(LogTemp, Warning, TEXT("Tank moved : %f"), value);
}

void ATank::Turn(float value)
{
    // Turn the tank left or right.
    FRotator rotation = FRotator(0, value, 0);
    AddActorWorldRotation(rotation);
    UE_LOG(LogTemp, Warning, TEXT("Tank turned : %f"), value);
}


