// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Movement/Cpp_DrMovement.h"


// Sets default values for this component's properties
UCpp_DrMovement::UCpp_DrMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UCpp_DrMovement::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

float UCpp_DrMovement::GetMaxAcceleration() const
{
	return WalkAcceleration;
}

float UCpp_DrMovement::GetMaxSpeed() const
{
	return WalkSpeed;
}



// Called every frame
void UCpp_DrMovement::TickComponent(
	float DeltaTime,
	ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!PawnOwner || !UpdatedComponent)
		return;

	FVector Input = ConsumeInputVector().GetClampedToMaxSize(1.f);

	if (!Input.IsNearlyZero())
	{
		Velocity += Input * WalkAcceleration * DeltaTime;
	}
	else
	{
		Velocity = FMath::VInterpConstantTo(
			Velocity,
			FVector::ZeroVector,
			DeltaTime,
			BrakePower
		);
	}

	Velocity = Velocity.GetClampedToMaxSize(WalkSpeed);

	if (!Velocity.IsNearlyZero())
	{
		FHitResult Hit;

		SafeMoveUpdatedComponent(
			Velocity * DeltaTime,
			UpdatedComponent->GetComponentRotation(),
			true,
			Hit
		);

		if (Hit.IsValidBlockingHit())
		{
			SlideAlongSurface(
				Velocity * DeltaTime,
				1.f - Hit.Time,
				Hit.Normal,
				Hit
			);
		}
	}
}

