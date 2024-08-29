#include "Projectile.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

/** Constructor.
 *  Sets default values of a Projectile.
 */
AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = false;

	// Construct Mesh Component
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
	RootComponent = ProjectileMesh; // Set mesh as root.

	// Construct movement component
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	// Set default values for movement component
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bRotationRemainsVertical = true;
	ProjectileMovement->MaxSpeed = 1300.f;
	ProjectileMovement->InitialSpeed = 1300.f;

}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	// Bind projectile mesh to OnHit callback function.
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
	
}

// Hit event callback function.
void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("Hit"));
	UE_LOG(LogTemp, Warning, TEXT("Component : %s"), *HitComp->GetName());
	UE_LOG(LogTemp, Warning, TEXT("collided with Actor : %s"), *OtherActor->GetName());
	UE_LOG(LogTemp, Warning, TEXT("and hit component : %s"), *OtherComp->GetName());

}


// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}