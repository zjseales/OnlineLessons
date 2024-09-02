#include "Projectile.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/DamageType.h"
#include "Kismet/GameplayStatics.h"

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

/** Called when this object is spawned.
 */
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	// Bind projectile mesh to OnHit callback function.
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
	
}

// Hit event callback function.
void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// ensure projectile has owner.
	auto MyOwner = GetOwner(); 
	if (MyOwner == nullptr) 
	{
		UE_LOG(LogTemp, Warning, TEXT("Projectile has no owner."));
		Destroy();
		return;
	}
	// Retrieve damage variables
	auto DamageInstigator = MyOwner->GetInstigatorController();
	auto DamageTypeClass = UDamageType::StaticClass();
	
	if (OtherActor && HitParticles)
	{
		// display particles when hit
		UGameplayStatics::SpawnEmitterAtLocation(this, HitParticles, GetActorLocation(), GetActorRotation());
		// ensure actor is not self or owner, before applying damage.
		if (OtherActor != this && OtherActor != MyOwner)
		{
			UGameplayStatics::ApplyDamage(OtherActor, Damage, DamageInstigator, this, DamageTypeClass);
		}
	}
	Destroy(); // destroy this projectile
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}