// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "InputActionValue.h"
#include "Components/Movement/Cpp_DrMovement.h"
#include "CPP_Player.generated.h"

class UInputAction;
class UInputMappingContext;
UCLASS()
class DR_API ACPP_Player : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_Player();
	UPROPERTY(VisibleAnywhere, Category="Player", meta=(AllowPrivateAccess=true))
	UCapsuleComponent* CapsuleComp;
	UPROPERTY(VisibleAnywhere, Category="Player", meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* PlayerMesh;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)override;
	
private:
	UPROPERTY(VisibleAnywhere, Category="Camera", meta=(AllowPrivateAccess=true))
	TObjectPtr<UCameraComponent> PlayerCamera;
	
	UPROPERTY(VisibleAnywhere, Category="Movement", meta=(AllowPrivateAccess=true))
	TObjectPtr<UCpp_DrMovement> DrMovement;
	
	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FVector movementInput;
	
	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputAction* MoveAction;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable)
	void Move(const FInputActionValue& moveInput);



};
