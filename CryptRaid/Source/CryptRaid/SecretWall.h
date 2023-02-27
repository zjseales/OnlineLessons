// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SecretWall.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRYPTRAID_API USecretWall : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USecretWall();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	// Offset position of the secret wall
	UPROPERTY(EditAnywhere)
	FVector MoveOffset;

	// Time taken for the secret wall to move
	UPROPERTY(EditAnywhere)
	float MoveTime = 4;

	// Defines whether the wall should move.
	UPROPERTY(EditAnywhere)
	bool ShouldMove = false;

	FVector OriginalLocation;
		
};
