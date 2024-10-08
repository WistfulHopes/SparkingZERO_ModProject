#include "KoratCharacterAuraComponent.h"

UKoratCharacterAuraComponent::UKoratCharacterAuraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrevVisibleValue = 1.00f;
    this->bForceAlwaysAuraStop = false;
    this->bWaitAlwaysAura = false;
    this->AlwaysAuraPlayer = NULL;
    this->DitherComponent = NULL;
}

void UKoratCharacterAuraComponent::StopCurrentAura() {
}

bool UKoratCharacterAuraComponent::StopAlwaysAura() {
    return false;
}

void UKoratCharacterAuraComponent::StartSparkingAura() {
}

void UKoratCharacterAuraComponent::StartAlwaysAura() {
}

void UKoratCharacterAuraComponent::RestoreRimLightMaterial() {
}

void UKoratCharacterAuraComponent::OnEndMontageLevelSequence(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason) {
}

void UKoratCharacterAuraComponent::OnCharacterBattleStateChanged(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState) {
}

void UKoratCharacterAuraComponent::OnChanedBuffForm(const FKoratBuffFormTypeDataList& InPreForm, const FKoratBuffFormTypeDataList& InNewForm) {
}

void UKoratCharacterAuraComponent::OnBeginMontageLevelSequence(FKoratActionDataList InAction) {
}

void UKoratCharacterAuraComponent::EndSparkingAura(const bool InEndNow) {
}


