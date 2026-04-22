// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPPTraversalComp.h"
#include "GameFramework/Character.h"
#include "CPP_Player.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVelocity, float, Velocity);
UCLASS()
class DR_API ACPP_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_Player();
	UPROPERTY(BlueprintAssignable, Category="Velocity")
	FOnVelocity OnVelocityMove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	UCPPTraversalComp* TravComp;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category="Movement")
	void CallOnVelocityMove();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
