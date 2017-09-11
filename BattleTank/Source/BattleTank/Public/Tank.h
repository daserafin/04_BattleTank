#pragma once

#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

// Forward declarations
class UTankBarrel; 
class UTankAimingComponent; 

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	void AimAt(FVector HitLocation);

	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetBarrelReference(UTankBarrel* BarrelToSet);

protected:
	UTankAimingComponent* TankAimingComponent = nullptr;
	
private:	

	// Sets default values for this pawn's properties
	ATank();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category = Firing)
	float LaunchSpeed = 100000; // Sensible starting value of 100 m/s
};
