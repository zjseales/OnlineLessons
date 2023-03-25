// Fill out your copyright notice in the Description page of Project Settings.


#include "Dialogue.h"

// Sets default values for this component's properties
UDialogue::UDialogue()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDialogue::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDialogue::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UDialogue::TriggerDialogue(FString Text)
{
}

