#include "SSAiCharacterStatusComponent.h"

USSAiCharacterStatusComponent::USSAiCharacterStatusComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAiEnabled = false;
    this->bAiPaused = false;
    this->AiLevel = 0;
    this->DebugAiEnabledType = EAiEnabledType::None;
    this->bAiDisabledToWaitEventEnd = false;
}

void USSAiCharacterStatusComponent::SetDebugAiEnabledType(const EAiEnabledType InAiEnabledType) {
}

void USSAiCharacterStatusComponent::SetAiType(const FKoratAiTypeDataList& InTypeDataList) {
}

void USSAiCharacterStatusComponent::SetAiPause(const bool bEnable) {
}

void USSAiCharacterStatusComponent::SetAiLevel(const int32 InLevel) {
}

void USSAiCharacterStatusComponent::SetAiEnable(const bool bEnable) {
}

void USSAiCharacterStatusComponent::SetAiDisabledToWaitEventEnd(const bool bDisable) {
}

void USSAiCharacterStatusComponent::OnPureBattleStartNoClear() {
}

void USSAiCharacterStatusComponent::OnChangeToNewCharacter(ASSCharacter* InBefore, ASSCharacter* InAfter, const bool bInNewCharacter) {
}

bool USSAiCharacterStatusComponent::IsAiPaused() const {
    return false;
}

bool USSAiCharacterStatusComponent::IsAiEnabled() const {
    return false;
}

bool USSAiCharacterStatusComponent::IsAiDisabledToWaitEventEnd() const {
    return false;
}

EAiEnabledType USSAiCharacterStatusComponent::GetDebugAiEnabledType() const {
    return EAiEnabledType::None;
}

FKoratAiTypeDataList USSAiCharacterStatusComponent::GetAiType() const {
    return FKoratAiTypeDataList{};
}

int32 USSAiCharacterStatusComponent::GetAiLevel() const {
    return 0;
}


