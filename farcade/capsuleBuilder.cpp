#include "CapsuleBuilder.h"

void UCapsuleBuilder::Reset()
{
    Capsule = NewObject<UCapsule>();
}

void UCapsuleBuilder::SetType(ECapsuleType Type)
{
    Capsule->Type = Type;
}

void UCapsuleBuilder::SetColor(FColor Color)
{
    Capsule->Color = Color;
}

UCapsule* UCapsuleBuilder::GetResult()
{
    return Capsule;
}
