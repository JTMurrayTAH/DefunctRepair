// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Cpp_DrPController.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEDMovementInput, FVector2D, fMoveValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEDLookInput, FVector2D, fLookValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEDJumpInput);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEDCrouch);

UCLASS()
class DR_API ACpp_DrPController : public APlayerController
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Events")
	FEDMovementInput OnMovementInput;
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Events")
	FEDLookInput OnLookInput;
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Events")
	FEDJumpInput OnJumpInput;
};
