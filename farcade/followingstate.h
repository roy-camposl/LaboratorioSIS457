#include "FollowingState.h"

void UFollowingState::Enter(ACompanionShip* CompanionShip)
{
    // Actions to perform when entering following state
}

void UFollowingState::Update(ACompanionShip* CompanionShip, float DeltaTime)
{
    // Actions to perform while in following state
    // For example, update the position to follow the player
    CompanionShip->MoveParallelToPlayer(DeltaTime);
}

void UFollowingState::Exit(ACompanionShip* CompanionShip)
{
    // Actions to perform when exiting following state
}
