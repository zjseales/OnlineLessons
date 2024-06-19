#include "BasePawn.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

// Constructor : Sets default values.
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.
	PrimaryActorTick.bCanEverTick = true;

	// Construct a Capsule Component and set as root.
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleComp;

	// Construct and attach Base Mesh to RootComponent.
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetupAttachment(CapsuleComp);

	// Construct and attach Turret Mesh to Base Mesh.
	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
	TurretMesh->SetupAttachment(BaseMesh);

	// Construct and attach Projectile Spawn Point to the Turret Mesh.
	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Point"));
	ProjectileSpawnPoint->SetupAttachment(TurretMesh);

}

void ABasePawn::RotateTurret(FVector LookAtTarget)
{
	// Update TurretMesh rotation to face LookAtTarget.
	FVector targetDirection = LookAtTarget - TurretMesh->GetComponentLocation();
	FRotator turretRotation = FRotator(0.f, targetDirection.Rotation().Yaw, 0.f);
	TurretMesh->SetWorldRotation(
		FMath::RInterpTo(TurretMesh->GetComponentRotation(), 
			turretRotation, 
			UGameplayStatics::GetWorldDeltaSeconds(this), 
			5.f)
	);
}