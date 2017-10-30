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
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void BeginPlay() override;

private:
	// How close the AI tanks get
	float AcceptanceRadius = 3000;
};
