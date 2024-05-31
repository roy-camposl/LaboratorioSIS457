#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Capsule.generated.h"

UCLASS()
class GALAGA_API UCapsule : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY()
    ECapsuleType Type;

    UPROPERTY()
    FColor Color;
};
