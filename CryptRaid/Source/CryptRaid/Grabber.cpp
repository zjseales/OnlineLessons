#include "Grabber.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Components/StaticMeshComponent.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();

	if (PhysicsHandle->GetGrabbedComponent() != nullptr)
	{
		FVector TargetLocation = GetComponentLocation() + GetForwardVector() * HoldDistance;
		PhysicsHandle->SetTargetLocationAndRotation(TargetLocation, GetComponentRotation());
	}
	
}

void UGrabber::Release()
{
	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();

	if(PhysicsHandle->GetGrabbedComponent() != nullptr)
	{
		PhysicsHandle->ReleaseComponent();
	}
}

void UGrabber::Grab()
{
	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();

	FHitResult HitResult;
	bool HasHit = PickUpItem(HitResult);
	
	if(HasHit)
	{
		UPrimitiveComponent* HitComponent = HitResult.GetComponent();
		HitComponent->SetSimulatePhysics(true);

		PhysicsHandle->GrabComponentAtLocationWithRotation(
			HitComponent, NAME_None, HitResult.ImpactPoint, GetComponentRotation());
	} 

}

UPhysicsHandleComponent* UGrabber::GetPhysicsHandle() const
{
	UPhysicsHandleComponent* Result = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if(Result == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("No physics handle found."));
	}
	return Result;
}

bool UGrabber::PickUpItem(FHitResult& OutHitResult) const
{
	//line trace
	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector() * MaxDistance;
	//geometry sweep
	FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);

	return GetWorld()->SweepSingleByChannel(OutHitResult, Start, End, FQuat::Identity, ECC_GameTraceChannel2, Sphere);

}

