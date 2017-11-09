#pragma once

#include "AIController.h"
#include "TankAiController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAiController : public AAIController
{
	GENERATED_BODY()
private:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void SetPawn(APawn* InPawn) override;

	void BeginPlay() override;

	UFUNCTION()
	void OnPossessedTankDeath();
	
protected:
	// How close the AI tanks get
	UPROPERTY(EditDefaultsOnly, Category = Moving)
	float AcceptanceRadius = 8000;
};
