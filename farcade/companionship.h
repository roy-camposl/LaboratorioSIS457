#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ICompanionState.h"
#include "CompanionShip.generated.h"

UCLASS()
class GALAGA_API ACompanionShip : public AActor
{
    GENERATED_BODY()

public:
    ACompanionShip();

    virtual void Tick(float DeltaTime) override;

    void SetState(TScriptInterface<IICompanionState> NewState);

    void MoveParallelToPlayer(float DeltaTime);

private:
    TScriptInterface<IICompanionState> CurrentState;
    AActor* PlayerShip;  // Reference to the player's ship
};
