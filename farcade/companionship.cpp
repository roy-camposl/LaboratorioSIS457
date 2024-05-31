#include "CompanionShip.h"
#include "IdleState.h"
#include "FollowingState.h"
#include "AttackingState.h"
#include "DefendingState.h"

ACompanionShip::ACompanionShip()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ACompanionShip::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (CurrentState)
    {
        CurrentState->Update(this, DeltaTime);
    }

    MoveParallelToPlayer(DeltaTime);
}

void ACompanionShip::SetState(TScriptInterface<IICompanionState> NewState)
{
    if (CurrentState)
    {
        CurrentState->Exit(this);
    }

    CurrentState = NewState;

    if (CurrentState)
    {
        CurrentState->Enter(this);
    }
}

void ACompanionShip::MoveParallelToPlayer(float DeltaTime)
{
    if (PlayerShip)
    {
        FVector PlayerLocation = PlayerShip->GetActorLocation();
        FVector NewLocation = FVector(PlayerLocation.X, PlayerLocation.Y + 200.0f, PlayerLocation.Z); // Adjust position
        SetActorLocation(NewLocation);
    }
}
