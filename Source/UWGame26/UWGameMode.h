// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UWGameMode.generated.h"

UCLASS()
class UWGAME26_API AUWGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	AUWGameMode();

protected:

    virtual void BeginPlay() override;
};
