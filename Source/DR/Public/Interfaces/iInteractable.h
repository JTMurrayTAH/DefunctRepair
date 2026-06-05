// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "iInteractable.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UiInteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * General Interface for interaction.
 */
class DR_API IiInteractable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Interaction")
	void TryToInteract(AActor* Interactor);
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Interaction")
	void Successful_Interactor(AActor* Interactor);
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Interaction")
	void Failed_Interact(AActor* Interactor);
};