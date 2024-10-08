#include "SSCharacterAntiBulletComponent.h"

USSCharacterAntiBulletComponent::USSCharacterAntiBulletComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RepelAngle = 90.00f;
    this->ReflectionInputReceptionSec = 0.30f;
    this->ReflectionInputInvalidSec = 0.00f;
    this->BlastRepelToAdapt = 0.58f;
    this->bReflectionContinuousInput = false;
    this->BlastRepelPositionTolerance = 1.00f;
}

void USSCharacterAntiBulletComponent::SuccessReflectionInput() {
}

void USSCharacterAntiBulletComponent::StartReflectionInput() {
}

bool USSCharacterAntiBulletComponent::ShouldChangeToBlastErase() const {
    return false;
}

void USSCharacterAntiBulletComponent::SetAutoReflect(const bool bEnable) {
}

void USSCharacterAntiBulletComponent::OnCharacterBattleStateChanged(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState) {
}

bool USSCharacterAntiBulletComponent::IsReflectionInputReception() {
    return false;
}

bool USSCharacterAntiBulletComponent::IsReflectionInputInvalid() {
    return false;
}

bool USSCharacterAntiBulletComponent::CheckRepel(const bool InMaintainQuo, const bool InAbsorption) {
    return false;
}

bool USSCharacterAntiBulletComponent::CheckReflection(const bool InAbsorption) {
    return false;
}

bool USSCharacterAntiBulletComponent::CheckOnlyRepelAndReflection() {
    return false;
}

bool USSCharacterAntiBulletComponent::CheckBlastRepel(const bool InAbsorption, bool& bOutSuccessAbsorption) {
    return false;
}

bool USSCharacterAntiBulletComponent::CheckBlastErase() {
    return false;
}


