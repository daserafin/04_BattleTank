#include "TankAiController.h"
#include "Engine/World.h"
#include "Tank.h"
#include "CoreMinimal.h"

void ATankAiController::BeginPlay()
{
	Super::BeginPlay();
}

void ATankAiController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());
	
	if (PlayerTank)
	{
		// Move towards the player
		MoveToActor(PlayerTank, AcceptanceRadius);
		
		// Aim towards the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		ControlledTank->Fire(); // TODO limit fire rate
	}
}
