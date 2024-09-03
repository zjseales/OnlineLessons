#include "Projectile.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/DamageType.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Camera/CameraShakeBase.h"
#include "Sound/SoundConcurrency.h"

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

	// Construct Particle System Component (smoke trail)
	SmokeParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Smoke Particles"));
	SmokeParticles->SetupAttachment(RootComponent);

}

/** Called when this object is spawned.
 */
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	// Bind projectile mesh to OnHit callback function.
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);

	// launch sound
	if (LaunchSound && LaunchConcurrency)
	{
		UGameplayStatics::PlaySoundAtLocation(this, LaunchSound, GetActorLocation(), 0.25f, 1.f, 0.f, nullptr, LaunchConcurrency);
	}
}

// Hit event callback function.
void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// store owner
	AActor* MyOwner = GetOwner(); 
	// ensure projectile has owner.
	if (MyOwner == nullptr) 
	{
		UE_LOG(LogTemp, Warning, TEXT("Projectile has no owner."));
		Destroy();
		return;
	}
	// Retrieve damage variables
	AController* DamageInstigator = MyOwner->GetInstigatorController();
	UClass* DamageTypeClass = UDamageType::StaticClass();
	
	if (OtherActor && HitParticles)
	{
		// play hit sound.
		if (HitSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, HitSound, GetActorLocation(), 3.f);
		}
		// display particles
		UGameplayStatics::SpawnEmitterAtLocation(this, HitParticles, GetActorLocation(), GetActorRotation());
		// shake camera
		if (HitShakeClass)
		{
			GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(HitShakeClass);
		}
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