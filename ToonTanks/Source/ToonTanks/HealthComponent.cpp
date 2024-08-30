#include "HealthComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "ToonTanksGameMode.h"

/** Constructor: Sets default values for this component's properties.
 */
UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

/** Called when the game starts.
 */
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// initialize health
	CurrHealth = MaxHealth; 	

	// bind DamageTaken method to OnTakeAnyDamage delegate.
	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::DamageTaken);
	// retrieve game mode
	ToonTanksGameMode = Cast<AToonTanksGameMode>(UGameplayStatics::GetGameMode(this));

}

/** Custom DamageTaken method. 
 *  Called when damage event occurs. (Bound to delegate in BeginPlay())
 */
void UHealthComponent::DamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, class AController* Instigator, AActor* DamageCauser)
{
	if (Damage <= 0.f) return;
	
	// apply damage
	CurrHealth -= Damage;

	// death check 
	if (ToonTanksGameMode && CurrHealth <= 0.f)
	{
		//kill
		UE_LOG(LogTemp, Warning, TEXT("DEAD"));
		ToonTanksGameMode->ActorDied(DamagedActor);
	}
}

/** Called every frame.
 */
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

