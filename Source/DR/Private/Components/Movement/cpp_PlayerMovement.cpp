// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Movement/cpp_PlayerMovement.h"


// Sets default values for this component's properties
Ucpp_PlayerMovement::Ucpp_PlayerMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void Ucpp_PlayerMovement::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void Ucpp_PlayerMovement::TickComponent(float DeltaTime, ELevelTick TickType,
                                        FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

