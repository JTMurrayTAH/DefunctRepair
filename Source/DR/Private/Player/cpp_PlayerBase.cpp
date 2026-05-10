// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/cpp_PlayerBase.h"

#include "Camera/CameraComponent.h"


// Sets default values
Acpp_PlayerBase::Acpp_PlayerBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>("PlayerCamera");
	PlayerCamera-> SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void Acpp_PlayerBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Acpp_PlayerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void Acpp_PlayerBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

