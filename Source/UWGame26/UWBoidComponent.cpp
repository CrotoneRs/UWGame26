// Fill out your copyright notice in the Description page of Project Settings.


#include "UWBoidComponent.h"
#include "UWBoidSystem.h"

UUWBoidComponent::UUWBoidComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UUWBoidComponent::BeginPlay()
{
	Super::BeginPlay();

	if (UUWBoidSystem* BoidSystem = GetWorld()->GetSubsystem<UUWBoidSystem>())
	{
		BoidSystem->RegisterComponent(this);
	}
}

void UUWBoidComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (UUWBoidSystem* BoidSystem = GetWorld()->GetSubsystem<UUWBoidSystem>())
	{
		BoidSystem->UnRegisterComponent(this);
	}

	Super::EndPlay(EndPlayReason);
}