#include "CapsuleFacade.h"

ACapsuleFacade::ACapsuleFacade()
{
    CapsuleBuilder = CreateDefaultSubobject<UCapsuleBuilder>(TEXT("CapsuleBuilder"));
    CapsuleGroup = CreateDefaultSubobject<UCapsuleGroup>(TEXT("CapsuleGroup"));
}

void ACapsuleFacade::CreateSpeedGroup()
{
    CapsuleBuilder->Reset();
    CapsuleBuilder->SetType(ECapsuleType::Speed);
    CapsuleBuilder->SetColor(FColor::Blue);
    CapsuleGroup->AddCapsule(CapsuleBuilder->GetResult());
}

void ACapsuleFacade::CreateShieldGroup()
{
    CapsuleBuilder->Reset();
    CapsuleBuilder->SetType(ECapsuleType::Shield);
    CapsuleBuilder->SetColor(FColor::Green);
    CapsuleGroup->AddCapsule(CapsuleBuilder->GetResult());
}

void ACapsuleFacade::CreateAttackGroup()
{
    CapsuleBuilder->Reset();
    CapsuleBuilder->SetType(ECapsuleType::Attack);
    CapsuleBuilder->SetColor(FColor::Red);
    CapsuleGroup->AddCapsule(CapsuleBuilder->GetResult());
}
