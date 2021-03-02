// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TankGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATankGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:

	void HandleGameStart();
	void HandleGameOver(bool PlayerWon);


public:

	void ActorDied(AActor* DeadActor);

protected:

	virtual void BeginPlay() override;
	UFUNCTION(BlueprintImplementableEvent) // Handle the function implementation in the derived blueprint class.
	void GameStart();
	UFUNCTION(BlueprintImplementableEvent) // Handle the function implementation in the derived blueprint class.
	void GameOver(bool PlayerWon);
	
};
