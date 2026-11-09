// Fill out your copyright notice in the Description page of Project Settings.


#include "UWBoidSystem.h"

void UUWBoidSystem::RegisterComponent(const UUWBoidComponent* BoidComponent)
{
    if (BoidComponent != nullptr)
    {
        BoidComponents.AddUnique(BoidComponent);
    }
}

void UUWBoidSystem::UnRegisterComponent(const UUWBoidComponent* BoidComponent)
{
    if (BoidComponent != nullptr)
    {
        BoidComponents.Remove(BoidComponent);
    }
}

void UUWBoidSystem::Tick(float DeltaTime)
{
    // Boid Simulation ...
}
