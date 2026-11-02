// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "UWGameState.generated.h"

UCLASS()
class UWGAME26_API AUWGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:

	AUWGameState() { bReplicates = false; }

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "GameState")
    float RemainingTime = 0.0f;

protected:

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
