#include "Tank.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"

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

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
    // reference to player controller
    playerControllerRef = Cast<APlayerController>(GetController());
}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    // Bind the Move function to the MoveForward action.
    PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::Move);
    // Bind the Turn function to the TurnRight action.
    PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::Turn);
}

void ATank::Move(float value)
{
    FVector deltaLocation = FVector::ZeroVector;
    // Move the tank along the local x axis.
    deltaLocation.X = value * UGameplayStatics::GetWorldDeltaSeconds(this) * moveSpeed;
    AddActorLocalOffset(deltaLocation, true);
}

void ATank::Turn(float value)
{
    FRotator deltaRotation = FRotator::ZeroRotator;
    // display actor velocity
    UE_LOG(LogTemp, Warning, TEXT("Velocity: %s"), *GetVelocity().ToString());
    //flip when reversing
    /**
    if (GetActorForwardVector() < 0)
    {
        value *= -1;
    }
    */
    // Rotate the tank about the local z axis.
    deltaRotation.Yaw = value * UGameplayStatics::GetWorldDeltaSeconds(this) * turnSpeed;
    AddActorLocalRotation(deltaRotation, true);
}