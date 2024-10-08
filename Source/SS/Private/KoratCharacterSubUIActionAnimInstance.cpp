#include "KoratCharacterSubUIActionAnimInstance.h"

UKoratCharacterSubUIActionAnimInstance::UKoratCharacterSubUIActionAnimInstance() {
    this->PlayingMontage = NULL;
    this->PlayingLevelSequenceActor = NULL;
    this->BlendTimeBattleActionToUIAction = 0.00f;
    this->BlendTimeUIActionToBattleAction = 0.00f;
    this->OriginalMontage = NULL;
    this->CallingPlayMontage = NULL;
    this->bIsDuplicatedModifySectionMontage = false;
    this->PlayingStartFrame = -1;
    this->PlayingEndFrame = -1;
    this->bIsChangeCustomTimeDilation = false;
}

void UKoratCharacterSubUIActionAnimInstance::StopUiAction(float InBlendOutTime) {
}

void UKoratCharacterSubUIActionAnimInstance::SetUIActionGroupId(FKoratGroupIdDataList InGroupId) {
}

void UKoratCharacterSubUIActionAnimInstance::SetUIActionCustomTimeDilation(float InCustomTimeDilation) {
}

void UKoratCharacterSubUIActionAnimInstance::PlayUIActionMontageLevelSequence(const FSSMontageLevelSequence& InMontageLevelSequence, const FName InSectionName, int32 InStartFrame, int32 InEndFrame, const FKoratUIActionBlendOption& InBlendOption, UObject* SourceObject) {
}

void UKoratCharacterSubUIActionAnimInstance::JumpUIActionSection(const FName InSectionName) {
}

bool UKoratCharacterSubUIActionAnimInstance::IsUIActionPlayingAny() const {
    return false;
}

bool UKoratCharacterSubUIActionAnimInstance::IsUIActionPlaying() const {
    return false;
}

bool UKoratCharacterSubUIActionAnimInstance::IsChangeCustomTimeDilation() const {
    return false;
}

float UKoratCharacterSubUIActionAnimInstance::GetUIActionRemainingTimeAtSection() const {
    return 0.0f;
}

float UKoratCharacterSubUIActionAnimInstance::GetUIActionPlayRatioAtSection() const {
    return 0.0f;
}

float UKoratCharacterSubUIActionAnimInstance::GetUiactionPlayOneFrameFps() {
    return 0.0f;
}

FName UKoratCharacterSubUIActionAnimInstance::GetUIActionNextSection() const {
    return NAME_None;
}

FName UKoratCharacterSubUIActionAnimInstance::GetUIActionCurrentSection() const {
    return NAME_None;
}

float UKoratCharacterSubUIActionAnimInstance::GetUIActionCurrentPosition() const {
    return 0.0f;
}

float UKoratCharacterSubUIActionAnimInstance::GetUIActionBlendWeight() const {
    return 0.0f;
}

float UKoratCharacterSubUIActionAnimInstance::GetUIActionBlendTimeUIActionToBattleAction() const {
    return 0.0f;
}

float UKoratCharacterSubUIActionAnimInstance::GetUIActionBlendTimeBattleActionToUIAction() const {
    return 0.0f;
}

UAnimMontage* UKoratCharacterSubUIActionAnimInstance::GetPlayingMontage() const {
    return NULL;
}

ASSLevelSequenceActor* UKoratCharacterSubUIActionAnimInstance::GetPlayingLevelSequenceActor() const {
    return NULL;
}

void UKoratCharacterSubUIActionAnimInstance::ChangePlayRange(int32 InStartFrame, int32 InEndFrame) {
}

float UKoratCharacterSubUIActionAnimInstance::CalculateFrameToSecond(int32 InFrame) {
    return 0.0f;
}


