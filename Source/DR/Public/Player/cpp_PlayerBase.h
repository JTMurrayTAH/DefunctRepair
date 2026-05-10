// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "cpp_PlayerBase.generated.h"

UCLASS()
class DR_API Acpp_PlayerBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Acpp_PlayerBase();
	UPROPERTY(EditAnywhere)
	TObjectPtr<UCameraComponent> PlayerCamera;
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
