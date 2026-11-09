// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UWBoidComponent.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWBoidSystem.generated.h"

/**
 * 
 */
UCLASS()
class UWGAME26_API UUWBoidSystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

	UPROPERTY()
    TArray<const UUWBoidComponent*> BoidComponents;

public:

	void RegisterComponent(const UUWBoidComponent* BoidComponent);
	void UnRegisterComponent(const UUWBoidComponent* BoidComponent);

    virtual void Tick(float DeltaTime) override;

    virtual bool IsTickable() const override { return true; }

    virtual TStatId GetStatId() const override
    {
        RETURN_QUICK_DECLARE_CYCLE_STAT(UBoidSubsystem, STATGROUP_Tickables);
    }

};
