// Fill out your copyright notice in the Description page of Project Settings.

#include "UWGameState.h"

void AUWGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // DOREPLIFETIME(AUWGameState, RemainingTime);
}
