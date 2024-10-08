#include "KoratDestructionDamageComponent.h"

UKoratDestructionDamageComponent::UKoratDestructionDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

EKoratDestructionDamageLevel UKoratDestructionDamageComponent::CheckDamageLevel_Implementation(const FKoratDestructionFieldParameter& Parameter) {
    return EKoratDestructionDamageLevel::kNoDamage;
}


