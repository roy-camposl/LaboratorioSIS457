#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerManager.generated.h"

UCLASS()
class GALAGA_API UPlayerManager : public UObject
{
    GENERATED_BODY()

public:
    void InitializePlayer();
    void UpdatePlayer(float DeltaTime);
    void PlayerShoot();
};
