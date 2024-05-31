#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Capsule.h"
#include "CapsuleBuilder.generated.h"

UENUM()
enum class ECapsuleType : uint8
{
    Speed UMETA(DisplayName = "Speed"),
    Shield UMETA(DisplayName = "Shield"),
    Attack UMETA(DisplayName = "Attack")
};

UCLASS()
class GALAGA_API UCapsuleBuilder : public UObject
{
    GENERATED_BODY()

public:
    void Reset();
    void SetType(ECapsuleType Type);
    void SetColor(FColor Color);
    UCapsule* GetResult();

private:
    UPROPERTY()
    UCapsule* Capsule;
};

