#include "FollowingState.h"

void UFollowingState::Enter(ACompanionShip* CompanionShip)
{
    
}

void UFollowingState::Update(ACompanionShip* CompanionShip, float DeltaTime)
{
    
    CompanionShip->MoveParallelToPlayer(DeltaTime);
}

void UFollowingState::Exit(ACompanionShip* CompanionShip)
{
    
}

