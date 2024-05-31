#pragma once

#include "CoreMinimal.h"
#include "ICompanionState.h"
#include "IdleState.generated.h"

UCLASS()
class GALAGA_API UIdleState : public UObject, public IICompanionState
{
    GENERATED_BODY()

public:
    virtual void Enter(ACompanionShip* CompanionShip) override;
    virtual void Update(ACompanionShip* CompanionShip, float DeltaTime) override;
    virtual void Exit(ACompanionShip* CompanionShip) override;
};
