// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/Doors/cpp_DoorBase.h"

// Sets default values
Acpp_DoorBase::Acpp_DoorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Acpp_DoorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Acpp_DoorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

