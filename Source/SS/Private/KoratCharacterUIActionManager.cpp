#include "KoratCharacterUIActionManager.h"

AKoratCharacterUIActionManager::AKoratCharacterUIActionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AKoratCharacterUIActionManager::StopUiAction(ASSCharacter* InCharacter, float InBlendOutTime, bool bInImmediately) {
}

void AKoratCharacterUIActionManager::SetUIActionStartFrame(ASSCharacter* InCharacter, int32 InUIActionStartFrame) {
}

void AKoratCharacterUIActionManager::SetUIActionSection(ASSCharacter* InCharacter, FName InUIActionSectionName) {
}

void AKoratCharacterUIActionManager::SetUIActionMovementMode(ASSCharacter* InCharacter, TEnumAsByte<EMovementMode> InUIActionMovementMode) {
}

void AKoratCharacterUIActionManager::SetUIActionGroupId(ASSCharacter* InCharacter, FKoratGroupIdDataList InUIActionGroupId) {
}

void AKoratCharacterUIActionManager::SetUIActionFootIKModeAndMovementMode(ASSCharacter* InCharacter, EKoratCharacterUIActionFootIKMode InUIActionFootIKMode, TEnumAsByte<EMovementMode> InUIActionMovementMode) {
}

void AKoratCharacterUIActionManager::SetUIActionFootIKMode(ASSCharacter* InCharacter, EKoratCharacterUIActionFootIKMode InUIActionFootIKMode) {
}

void AKoratCharacterUIActionManager::SetUIActionEndFrame(ASSCharacter* InCharacter, int32 InUIActionEndFrame) {
}

void AKoratCharacterUIActionManager::SetUIActionCustomTimeDilation(ASSCharacter* InCharacter, float InUIActionCustomTimeDilation) {
}

void AKoratCharacterUIActionManager::SetUIActionBlendOption(ASSCharacter* InCharacter, FKoratUIActionBlendOption InUIActionBlendOption) {
}

void AKoratCharacterUIActionManager::SetRunTickBeforeUIActionManager(AActor* InActor) {
}

void AKoratCharacterUIActionManager::PlayUIActionMLS(ASSCharacter* InCharacter, UKoratMLSDataAsset* InUIActionMLS) {
}

bool AKoratCharacterUIActionManager::IsUIActionPlayingAny(const ASSCharacter* InCharacter) const {
    return false;
}

bool AKoratCharacterUIActionManager::IsUIActionPlaying(const ASSCharacter* InCharacter) const {
    return false;
}

bool AKoratCharacterUIActionManager::IsRunningUIActionGroupId(const ASSCharacter* InCharacter, const FKoratGroupIdDataList& InGroupId) const {
    return false;
}

bool AKoratCharacterUIActionManager::IsEnabledFootIK(ASSCharacter* InCharacter) const {
    return false;
}

float AKoratCharacterUIActionManager::GetUIActionRemainingTimeAtSection(ASSCharacter* InCharacter) const {
    return 0.0f;
}

float AKoratCharacterUIActionManager::GetUIActionPlayRatioAtSection(ASSCharacter* InCharacter) const {
    return 0.0f;
}

UAnimMontage* AKoratCharacterUIActionManager::GetUIActionPlayingMontage(ASSCharacter* InCharacter) const {
    return NULL;
}

ASSLevelSequenceActor* AKoratCharacterUIActionManager::GetUIActionPlayingLevelSequenceActor(ASSCharacter* InCharacter) const {
    return NULL;
}

FName AKoratCharacterUIActionManager::GetUIActionNextSection(ASSCharacter* InCharacter) const {
    return NAME_None;
}

UKoratMLSDataAsset* AKoratCharacterUIActionManager::GetUIActionMLSLast(ASSCharacter* InCharacter) const {
    return NULL;
}

FKoratGroupIdDataList AKoratCharacterUIActionManager::GetUIActionGroupId(ASSCharacter* InCharacter) const {
    return FKoratGroupIdDataList{};
}

FName AKoratCharacterUIActionManager::GetUIActionCurrentSection(ASSCharacter* InCharacter) const {
    return NAME_None;
}

float AKoratCharacterUIActionManager::GetUIActionCurrentPosition(ASSCharacter* InCharacter) const {
    return 0.0f;
}

UKoratCharacterUIActionDebugDraw* AKoratCharacterUIActionManager::GetDebugDraw() {
    return NULL;
}

bool AKoratCharacterUIActionManager::CheckUIActionMLSMontageLevelSequence(const UKoratMLSDataAsset* InUIActionMLS) {
    return false;
}

bool AKoratCharacterUIActionManager::CheckUIActionMLS(const ASSCharacter* InCharacter, const UKoratMLSDataAsset* InUseMLS, const UKoratMLSDataAsset* InKeyMLS) {
    return false;
}


