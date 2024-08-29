#include "Projectile.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = false;
	// Construct a Static Mesh Component and set as root.
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
	RootComponent = ProjectileMesh;
	// Construct movement component
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	// Set default values for movement component.
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bRotationRemainsVertical = true;
	ProjectileMovement->MaxSpeed = 1300.f;
	ProjectileMovement->InitialSpeed = 1300.f;

}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

