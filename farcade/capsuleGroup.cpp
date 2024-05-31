#include "CapsuleGroup.h"

void UCapsuleGroup::AddCapsule(UCapsule* Capsule)
{
    Capsules.Add(Capsule);
}

TArray<UCapsule*> UCapsuleGroup::GetCapsules() const
{
    return Capsules;
}
