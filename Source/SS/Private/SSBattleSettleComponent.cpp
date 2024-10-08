#include "SSBattleSettleComponent.h"

USSBattleSettleComponent::USSBattleSettleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USSBattleSettleComponent::SetTransitionType(const EBattleSettleTransitionType InType) {
}

void USSBattleSettleComponent::SetDramaticFinish(const bool InDramaticFinish) {
}

EBattleSettleTransitionType USSBattleSettleComponent::GetTransitionType() const {
    return EBattleSettleTransitionType::None;
}

bool USSBattleSettleComponent::GetDramaticFinish() const {
    return false;
}


