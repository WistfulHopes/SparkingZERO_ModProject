#include "SSBattleVirtualTarget.h"

ASSBattleVirtualTarget::ASSBattleVirtualTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArrowComponent = NULL;
}

FTransform ASSBattleVirtualTarget::GetHomingTransform() const {
    return FTransform{};
}

FVector ASSBattleVirtualTarget::GetHomingLocation() const {
    return FVector{};
}

FTransform ASSBattleVirtualTarget::GetActionTargetTransform() const {
    return FTransform{};
}


