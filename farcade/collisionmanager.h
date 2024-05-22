#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollisionManager.generated.h"

UCLASS()
class GALAGA_API UCollisionManager : public UObject
{
    GENERATED_BODY()

public:
    void CheckCollisions();
};

