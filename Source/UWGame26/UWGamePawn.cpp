#include "UWGamePawn.h"

#include "EnhancedInputComponent.h"


void AUWGamePawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AUWGamePawn::Move);
    }
    else
    {
        PlayerInputComponent->BindAxis("MoveForward", this, &AUWGamePawn::MoveForward);
        PlayerInputComponent->BindAxis("MoveSideways", this, &AUWGamePawn::MoveSideways);
    }
}

void AUWGamePawn::MoveForward(float Value)
{
    if (AController* PawnController = GetController())
    {
        const FRotator Rotation = PawnController->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FRotationMatrix RotationMatrix = FRotationMatrix(YawRotation);

        const FVector ForwardVector = RotationMatrix.GetUnitAxis(EAxis::X);

        AddActorWorldOffset(/* DeltaSeconds */ Value * ForwardVector);
    }
}

void AUWGamePawn::MoveSideways(float Value)
{
    if (AController* PawnController = GetController())
    {
        const FRotator Rotation = PawnController->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FRotationMatrix RotationMatrix = FRotationMatrix(YawRotation);

        const FVector SidewaysVector = RotationMatrix.GetUnitAxis(EAxis::Y);

        AddActorWorldOffset(/* DeltaSeconds */ Value * SidewaysVector);
    }
}

void AUWGamePawn::Move(const FInputActionValue& Value)
{
    FVector2D MovementVector = Value.Get<FVector2D>();

    if (AController* PawnController = GetController())
    {
        const FRotator Rotation = PawnController->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FRotationMatrix RotationMatrix = FRotationMatrix(YawRotation);

        const FVector ForwardVector = RotationMatrix.GetUnitAxis(EAxis::X);
        const FVector SidewaysVector = RotationMatrix.GetUnitAxis(EAxis::Y);

        AddMovementInput(ForwardVector, MovementVector.X);
        AddMovementInput(SidewaysVector, MovementVector.Y);
    }
}
