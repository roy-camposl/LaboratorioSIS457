#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Capsule.h"
#include "CapsuleGroup.generated.h"

UCLASS()
class GALAGA_API UCapsuleGroup : public UObject
{
    GENERATED_BODY()

public:
    void AddCapsule(UCapsule* Capsule);
    TArray<UCapsule*> GetCapsules() const;

private:
    UPROPERTY()
    TArray<UCapsule*> Capsules;
};
