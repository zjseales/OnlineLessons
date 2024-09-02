#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class TOONTANKS_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProjectileMesh;
	// Movement component
	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UProjectileMovementComponent* ProjectileMovement;
	// Hit Function
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	// Damage amount
	UPROPERTY(EditAnywhere)
	float Damage = 10.f;

	//		EFFECTS
	UPROPERTY(EditAnywhere, Category = "Sounds")
	class USoundBase* LaunchSound;
	// projectile hit.
	UPROPERTY(EditAnywhere, Category = "Particles")
	class UParticleSystem* HitParticles;
	UPROPERTY(EditAnywhere, Category = "Sounds")
	USoundBase* HitSound;
	UPROPERTY(EditAnywhere, Category = "Camera Shake")
	TSubclassOf<class UCameraShakeBase> HitShakeClass;
	// smoke trail
	UPROPERTY(VisibleAnywhere, Category = "Particles")
	class UParticleSystemComponent* SmokeParticles;

public:
	// Tick Function - called every frame.
	virtual void Tick(float DeltaTime) override;

};