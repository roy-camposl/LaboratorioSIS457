#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CapsuleBuilder.h"
#include "CapsuleGroup.h"
#include "CapsuleFacade.generated.h"

UCLASS()
class GALAGA_API ACapsuleFacade : public AActor
{
    GENERATED_BODY()

public:
    ACapsuleFacade();

    UPROPERTY()
    UCapsuleBuilder* CapsuleBuilder;

    UPROPERTY()
    UCapsuleGroup* CapsuleGroup;

    void CreateSpeedGroup();
    void CreateShieldGroup();
    void CreateAttackGroup();
};
