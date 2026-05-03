// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Cpp_DrMovement.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DR_API UCpp_DrMovement : public UPawnMovementComponent
{
	GENERATED_BODY()

public:

	UCpp_DrMovement();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
	float WalkAcceleration = 1800.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
	float WalkSpeed = 600.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
	float BrakePower = 2200.f;
	

	virtual float GetMaxAcceleration() const;
	virtual float GetMaxSpeed() const override;

protected:

	virtual void BeginPlay() override;

public:

	virtual void TickComponent(
		float DeltaTime,
		ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction
	) override;
};
