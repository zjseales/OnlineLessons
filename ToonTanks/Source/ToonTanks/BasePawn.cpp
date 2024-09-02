#include "BasePawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Projectile.h"

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

void ABasePawn::HandleDestruction()
{
	// death explosion particles
	if (DeathParticles)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, DeathParticles, GetActorLocation(), GetActorRotation());
	}
	// TO-DO
	// Visual/sound effects
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

void ABasePawn::Fire()
{
	// Draw debug sphere at projectile spawn point.
	// DrawDebugSphere(GetWorld(), ProjectileSpawnLocation, 15, 12, FColor::Red, false, 3.f);

	// Spawn Projectile
	if(ProjectileClass)
	{
		FVector Location = ProjectileSpawnPoint->GetComponentLocation();
		FRotator Rotation = ProjectileSpawnPoint->GetComponentRotation();
		auto Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, Location, Rotation);
		// Set owner of the spawned projectile.
		Projectile->SetOwner(this);
	}
}