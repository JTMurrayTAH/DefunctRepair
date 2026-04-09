// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPTraversalComp.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties
UCPPTraversalComp::UCPPTraversalComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	TravStats = CreateDefaultSubobject<UTraversalStats>(TEXT("TravStats"));

	// ...
}


// Called when the game starts
void UCPPTraversalComp::BeginPlay()
{
	Super::BeginPlay();

	ACharacter* ownerChar = Cast<ACharacter>(GetOwner());
	if (ownerChar && TravStats)
	{
		ownerChar->GetCharacterMovement()->MaxWalkSpeed = TravStats->walkSpeed;
	}

	
}


// Called every frame
void UCPPTraversalComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}