#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UWGamePawn.generated.h"

UCLASS(MinimalAPI)
class AUWGamePawn : public APawn
{
    GENERATED_BODY()

protected:

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

    void MoveForward(float Value);
    void MoveSideways(float Value);
};
