#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameStateManager.generated.h"

UCLASS()
class GALAGA_API UGameStateManager : public UObject
{
    GENERATED_BODY()

public:
    void InitializeGameState();
    void UpdateGameState();
};
