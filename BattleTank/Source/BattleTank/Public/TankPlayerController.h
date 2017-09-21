// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

class ATank; // Forward declaration

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void BeginPlay() override;

protected:
	UFUNCTION(BlueprintCallable, Category = Setup)
	ATank* GetControlledTank() const;

private:
	bool GetSightRayHitLocation(FVector & OutHitLocation) const;

	bool GetLookDirection(FVector2D ScreenLocation, FVector & LookDirection) const;

	bool GetLookVectorHitLocation(FVector LookDirection, FVector &OutHitLocation) const;

	void AimTowardsCrosshair();

	UPROPERTY(EditDefaultsOnly)
	float CrosshairLocationX = 0.5f;

	UPROPERTY(EditDefaultsOnly)
	float CrosshairLocationY = 0.33333f;

	UPROPERTY(EditDefaultsOnly)
	float LineTraceRange = 1000000;
};
