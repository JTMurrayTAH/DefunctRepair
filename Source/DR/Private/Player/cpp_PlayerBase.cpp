// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/cpp_PlayerBase.h"

#include "Camera/CameraComponent.h"
#include "GameMode/Cpp_DrPController.h"


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

void Acpp_PlayerBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (ACpp_DrPController* PlayerController = Cast<ACpp_DrPController>(NewController))
	{
		
	}
}

// Called to bind functionality to input
void Acpp_PlayerBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

