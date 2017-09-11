#pragma once

#include "AIController.h"
#include "TankAiController.generated.h"

class ATank; // Forward declaration

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
	ATank* GetControlledTank() const;

	ATank* GetPlayerTank() const;
};
