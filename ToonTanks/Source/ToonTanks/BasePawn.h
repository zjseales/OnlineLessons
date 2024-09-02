#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();
	// manages destruction when pawns die.
	void HandleDestruction();

protected:
	void RotateTurret(FVector LookAtTarget);
	//projectile fire method
	void Fire();

private:
	// Collider
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* CapsuleComp;
	// Meshes
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* TurretMesh;
	// Projectile Spawn Point
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ProjectileSpawnPoint;
	// Variable representing a class type
	UPROPERTY(EditDefaultsOnly, Category = "Attack Specs")
	TSubclassOf<class AProjectile> ProjectileClass;
	// Death particles
	UPROPERTY(EditAnywhere, Category = "Components")
	class UParticleSystem* DeathParticles;
	// Death Sound
	UPROPERTY(EditAnywhere, Category = "Sounds")
	class USoundBase* DeathSound;
	// Death camera shake
	UPROPERTY(EditAnywhere, Category = "Camera Shake")
	TSubclassOf<class UCameraShakeBase> DeathShakeClass;

};
