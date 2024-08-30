#include "HealthComponent.h"

/** Constructor: Sets default values for this component's properties.
 */
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
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

}

/** Custom DamageTaken method. 
 *  Called when damage event occurs. (Bound to delegate in BeginPlay())
 */
void UHealthComponent::DamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, class AController* Instigator, AActor* DamageCauser)
{
	if (Damage <= 0.f) return;
	// apply damage to hp
	CurrHealth -= Damage;
	UE_LOG(LogTemp, Warning, TEXT("Damage Occurred : Health = %f"), CurrHealth);
}

/** Called every frame.
 */
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

