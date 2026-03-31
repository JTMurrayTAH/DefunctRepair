// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TraversalStats.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew)
class DR_API UTraversalStats : public UObject
{
	GENERATED_BODY()
	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Traversal")
	float walkSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Traversal")
	float runSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Traversal")
	float jumpForce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Traversal")
	float slidingSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Traversal")
	float mantlingSpeed;
};
