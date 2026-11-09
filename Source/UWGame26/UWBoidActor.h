// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UWBoidComponent.h"
#include "GameFramework/Pawn.h"
#include "UWBoidActor.generated.h"

UCLASS()
class UWGAME26_API AUWBoidActor : public APawn
{
	GENERATED_BODY()

	UPROPERTY()
    class UUWBoidComponent* BoidComponent;

public:

	AUWBoidActor();

};
