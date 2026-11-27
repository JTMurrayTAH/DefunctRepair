// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "cpp_ILockable.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class Ucpp_ILockable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DR_API Icpp_ILockable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Locked State")
	bool isLocked();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Locked State")
	void lock();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Locked State")
	void unlock();
};
