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

// Called every frame
void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // Rotate the turret to face the cursor.
    if (playerControllerRef)
    {
        FHitResult hitResult;
        playerControllerRef->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, hitResult);
        FVector hitLocation = hitResult.ImpactPoint;
        //draw debug sphere at hit location every frame
        DrawDebugSphere(GetWorld(), hitLocation, 5, 12, FColor::Green, false, -1.f);
        // rotates turret towards the hit location
        RotateTurret(hitLocation);
    }
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
    // Rotate the tank about the local z axis.
    deltaRotation.Yaw = value * UGameplayStatics::GetWorldDeltaSeconds(this) * turnSpeed;
    AddActorLocalRotation(deltaRotation, true);
}