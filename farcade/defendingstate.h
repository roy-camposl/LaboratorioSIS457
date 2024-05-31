#pragma once

#include "CoreMinimal.h"
#include "ICompanionState.h"
#include "DefendingState.generated.h"

UCLASS()
class GALAGA_API UDefendingState : public UObject, public IICompanionState
{
    GENERATED_BODY()

public:
    virtual void Enter(ACompanionShip* CompanionShip) override;
    virtual void Update(ACompanionShip* CompanionShip, float DeltaTime) override;
    virtual void Exit(ACompanionShip* CompanionShip) override;
};
