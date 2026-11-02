// Fill out your copyright notice in the Description page of Project Settings.

#include "UWGameMode.h"
#include "UWGamePawn.h"
#include "UWGameState.h"

#include "UObject/ConstructorHelpers.h"

AUWGameMode::AUWGameMode()
{
    DefaultPawnClass = AUWGamePawn::StaticClass();
    GameStateClass = AUWGameState::StaticClass();

    //static ConstructorHelpers::FClassFinder<AHUD> HUDClassBlueprint(TEXT("/Game/UI/BP_UWGameHUD"));
    //if(HUDClassBlueprint.Class != nullptr) { HUDClass = HUDClassBlueprint.Class; }
}

void AUWGameMode::BeginPlay()
{
    Super::BeginPlay();

    if (AUWGameState* GameState = GetGameState<AUWGameState>())
    {
        GameState->RemainingTime = 60.0f;
    }

    // LOGs
}
