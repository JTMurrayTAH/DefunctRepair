// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/iInteractable.h"
#include "cpp_DoorBase.generated.h"

UCLASS(Blueprintable)
class DR_API Acpp_DoorBase : public AActor, public IiInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Acpp_DoorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
