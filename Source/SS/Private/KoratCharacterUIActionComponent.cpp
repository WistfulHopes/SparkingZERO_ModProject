#include "KoratCharacterUIActionComponent.h"

UKoratCharacterUIActionComponent::UKoratCharacterUIActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UIActionMLS = NULL;
    this->UIActionFootIKMode = EKoratCharacterUIActionFootIKMode::NotSet;
    this->UIActionMovementMode = MOVE_None;
    this->UIActionStartFrame = -1;
    this->UIActionStartFrameSecond = -1.00f;
    this->UIActionEndFrame = -1;
    this->UIActionEndFrameSecond = -1.00f;
    this->bUIActionEnableUnregisteredMLS = false;
    this->UIActionMLSRequest = NULL;
    this->bUIActionStopRequest = false;
    this->UIActionStopBlendOutTime = 0.00f;
    this->UIActionMLSLast = NULL;
    this->UIActionFootIKModeRequest = EKoratCharacterUIActionFootIKMode::NotSet;
    this->UIActionFootIKModeNow = EKoratCharacterUIActionFootIKMode::NotSet;
    this->UIActionMovementModeRequest = MOVE_None;
    this->UIActionStartFrameRequestFlag = false;
    this->UIActionStartFrameRequest = -1;
    this->UIActionEndFrameRequestFlag = false;
    this->UIActionEndFrameRequest = -1;
    this->UIActionCustomTimeDilationRequest = -1.00f;
    this->UIActionBlendOptionRequestFlag = false;
}

void UKoratCharacterUIActionComponent::SetUIActionStartFrame(int32 InStartFrame) {
}

void UKoratCharacterUIActionComponent::SetUIActionSection(const FString& InSectionName) {
}

void UKoratCharacterUIActionComponent::SetUIActionMovementMode(TEnumAsByte<EMovementMode> InUIActionMovementMode) {
}

void UKoratCharacterUIActionComponent::SetUIActionMLS(UKoratMLSDataAsset* InUIActionMLS) {
}

void UKoratCharacterUIActionComponent::SetUIActionGroupId(const FString& InUIActionGroupId) {
}

void UKoratCharacterUIActionComponent::SetUIActionFootIKMode(EKoratCharacterUIActionFootIKMode InUIActionFootIKMode) {
}

void UKoratCharacterUIActionComponent::SetUIActionEndFrame(int32 InEndFrame) {
}

void UKoratCharacterUIActionComponent::SetUIActionEnableUnregisteredMLS(bool bInEnable) {
}

void UKoratCharacterUIActionComponent::SetUIActionBlendOption(const FKoratUIActionBlendOption& InUIActionBlendOption) {
}

void UKoratCharacterUIActionComponent::RequestSetUIActionStartFrame(int32 InUIActionStartFrame) {
}

void UKoratCharacterUIActionComponent::RequestSetUIActionSection(FName InUIActionSectionName) {
}

void UKoratCharacterUIActionComponent::RequestSetUIActionMovementMode(TEnumAsByte<EMovementMode> InUIActionMovementMode) {
}

void UKoratCharacterUIActionComponent::RequestSetUIActionGroupId(FKoratGroupIdDataList InUIActionGroupId) {
}

void UKoratCharacterUIActionComponent::RequestSetUIActionFootIKMode(EKoratCharacterUIActionFootIKMode InUIActionFootIKMode) {
}

void UKoratCharacterUIActionComponent::RequestSetUIActionEndFrame(int32 InUIActionEndFrame) {
}

void UKoratCharacterUIActionComponent::RequestSetUIActionCustomTimeDilation(float InUIActionCustomTimeDilation) {
}

void UKoratCharacterUIActionComponent::RequestSetUIActionBlendOption(FKoratUIActionBlendOption InUIActionBlendOption) {
}

void UKoratCharacterUIActionComponent::RequestPlayUIActionMLS(UKoratMLSDataAsset* InUIActionMLS) {
}

void UKoratCharacterUIActionComponent::PlayUIAction(const FKoratUIActionDataList InUIAction) {
}

void UKoratCharacterUIActionComponent::NotifySetUIActionStartFrame(int32 InUIActionStartFrame) {
}

void UKoratCharacterUIActionComponent::NotifySetUIActionSection(FName InUIActionSectionName) {
}

void UKoratCharacterUIActionComponent::NotifySetUIActionMovementMode(TEnumAsByte<EMovementMode> InUIActionMovementMode) {
}

void UKoratCharacterUIActionComponent::NotifySetUIActionMLS(UKoratMLSDataAsset* InUIActionMLS) {
}

void UKoratCharacterUIActionComponent::NotifySetUIActionGroupId(FKoratGroupIdDataList InUIActionGroupId) {
}

void UKoratCharacterUIActionComponent::NotifySetUIActionFootIKMode(EKoratCharacterUIActionFootIKMode InUIActionFootIKMode) {
}

void UKoratCharacterUIActionComponent::NotifySetUIActionEndFrame(int32 InUIActionEndFrame) {
}

void UKoratCharacterUIActionComponent::NotifySetUIActionBlendOption(FKoratUIActionBlendOption InUIActionBlendOption) {
}

bool UKoratCharacterUIActionComponent::IsUIActionPlayingAny() const {
    return false;
}

bool UKoratCharacterUIActionComponent::IsUIActionPlaying() const {
    return false;
}

bool UKoratCharacterUIActionComponent::IsRunningUIActionGroupId(const FKoratGroupIdDataList& InGroupId) const {
    return false;
}

float UKoratCharacterUIActionComponent::GetUIActionRemainingTimeAtSection() const {
    return 0.0f;
}

float UKoratCharacterUIActionComponent::GetUIActionPlayRatioAtSection() const {
    return 0.0f;
}

UAnimMontage* UKoratCharacterUIActionComponent::GetUIActionPlayingMontage() const {
    return NULL;
}

ASSLevelSequenceActor* UKoratCharacterUIActionComponent::GetUIActionPlayingLevelSequenceActor() const {
    return NULL;
}

FName UKoratCharacterUIActionComponent::GetUIActionNextSection() const {
    return NAME_None;
}

FKoratGroupIdDataList UKoratCharacterUIActionComponent::GetUIActionGroupId() const {
    return FKoratGroupIdDataList{};
}

EKoratCharacterUIActionFootIKMode UKoratCharacterUIActionComponent::GetUIActionFootIKMode() const {
    return EKoratCharacterUIActionFootIKMode::NotSet;
}

FName UKoratCharacterUIActionComponent::GetUIActionCurrentSection() const {
    return NAME_None;
}

float UKoratCharacterUIActionComponent::GetUIActionCurrentPosition() const {
    return 0.0f;
}

FKoratUIActionBlendOption UKoratCharacterUIActionComponent::GetUIActionBlendOption() const {
    return FKoratUIActionBlendOption{};
}


