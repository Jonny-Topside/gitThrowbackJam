// Fill out your copyright notice in the Description page of Project Settings.


#include "changeMass.h"
#include "Components/PrimitiveComponent.h"

// Sets default values for this component's properties
UchangeMass::UchangeMass()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UchangeMass::BeginPlay()
{
	Super::BeginPlay();
	//UPrimitiveComponent::SetMassOverrideInKg()
	// ...
	
}


// Called every frame
void UchangeMass::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

