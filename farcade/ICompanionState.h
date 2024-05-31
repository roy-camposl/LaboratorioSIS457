#pragma once

#include "CoreMinimal.h"
#include "CompanionShip.h"
#include "ICompanionState.generated.h"

UINTERFACE(MinimalAPI)
class UICompanionState : public UInterface
{
    GENERATED_BODY()
};

class GALAGA_API IICompanionState
{
    GENERATED_BODY()

public:
    virtual void Enter(ACompanionShip* CompanionShip) = 0;
    virtual void Update(ACompanionShip* CompanionShip, float DeltaTime) = 0;
    virtual void Exit(ACompanionShip* CompanionShip) = 0;
};

