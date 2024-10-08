#include "KoratCharacterSubActionStateAnimInstance.h"

UKoratCharacterSubActionStateAnimInstance::UKoratCharacterSubActionStateAnimInstance() {
    this->bReactionMultipleSlot = false;
    this->bRequestReactionMultipleSlot = false;
    this->DebugDrawTime = 0.00f;
    this->ElapsedTimeOfDebugDraw = 0.00f;
    this->SubActionMovingAction = NULL;
    this->SubActionAction = NULL;
    this->SubActionReaction = NULL;
    this->SubActionAddtiveReaction = NULL;
    this->AddtiveReactionAnimInstance = NULL;
}

void UKoratCharacterSubActionStateAnimInstance::StopMontagesByGroupName(FName InGroupName, FAlphaBlend InAlphaBlend) {
}

void UKoratCharacterSubActionStateAnimInstance::StopMontageLevelSequence(EKoratAnimType InAnimType, FAlphaBlend InBlend, bool bIsDamageCancel) {
}

void UKoratCharacterSubActionStateAnimInstance::StopActionByChangeCharacter() {
}

void UKoratCharacterSubActionStateAnimInstance::SetSetSectionName(const EKoratAnimType InAnimType, const FString& InSetSectionName) {
}

void UKoratCharacterSubActionStateAnimInstance::SetNextSectionName(const EKoratAnimType InAnimType, const FString& InNextSectionName) {
}

void UKoratCharacterSubActionStateAnimInstance::SetNextSection(const EKoratAnimType InAnimType, const FName InName) {
}

bool UKoratCharacterSubActionStateAnimInstance::SetMontageSetNextSection(const EKoratAnimType InAnimType) {
    return false;
}

void UKoratCharacterSubActionStateAnimInstance::SetIsContinued(const EKoratAnimType InAnimType, const bool bInContinued) {
}

void UKoratCharacterSubActionStateAnimInstance::SetDisableDebugString(bool InIsDisable) {
}


float UKoratCharacterSubActionStateAnimInstance::PlayMontageLevelSequence(const FKoratRequestAnimData& InRequestAnimData) {
    return 0.0f;
}

void UKoratCharacterSubActionStateAnimInstance::PlayCharacterActionMontage(EKoratAnimType InAnimType, USSAnimInstance* InAnimInstance, UAnimMontage* InMontage, FName InJumpSectionName) {
}

void UKoratCharacterSubActionStateAnimInstance::PlayAddtiveReaction(const FKoratAddtiveReactionParameter& InAddtiveReactionParameter) {
}

bool UKoratCharacterSubActionStateAnimInstance::MontageIsPlaying(const EKoratAnimType InAnimType, const UAnimMontage* Montage) const {
    return false;
}

float UKoratCharacterSubActionStateAnimInstance::MontageGetPosition(const EKoratAnimType InAnimType, const UAnimMontage* Montage) const {
    return 0.0f;
}

FName UKoratCharacterSubActionStateAnimInstance::MontageGetCurrentSection(const EKoratAnimType InAnimType, const UAnimMontage* Montage) const {
    return NAME_None;
}

FName UKoratCharacterSubActionStateAnimInstance::MontageFindCurrentSection(const UAnimMontage* Montage) const {
    return NAME_None;
}

void UKoratCharacterSubActionStateAnimInstance::JumpToSectionsEnd(FName SectionName, const UAnimMontage* Montage) {
}

void UKoratCharacterSubActionStateAnimInstance::JumpToSection(FName SectionName, const UAnimMontage* Montage) {
}

void UKoratCharacterSubActionStateAnimInstance::JumpSection(const EKoratAnimType InAnimType, const FName InName) {
}

bool UKoratCharacterSubActionStateAnimInstance::JumpMetaDataPosition(EKoratAnimType InAnimType) {
    return false;
}

bool UKoratCharacterSubActionStateAnimInstance::IsPlayingMontageByObject(const EKoratAnimType InAnimType, const UObject* InObject) const {
    return false;
}

bool UKoratCharacterSubActionStateAnimInstance::IsPlayingMontage(const EKoratAnimType InAnimType) const {
    return false;
}

bool UKoratCharacterSubActionStateAnimInstance::IsLastSectionFinished(const EKoratAnimType InAnimType, int32 InOffsetFrame) {
    return false;
}

bool UKoratCharacterSubActionStateAnimInstance::IsEnableSubActionState() const {
    return false;
}

FKoratReplaceAnimationDataList UKoratCharacterSubActionStateAnimInstance::GetReplaceAnimationDataList(const EKoratAnimType InAnimType) const {
    return FKoratReplaceAnimationDataList{};
}

FKoratReplaceAnimationDataList UKoratCharacterSubActionStateAnimInstance::GetPreReplaceAnimationDataList(const EKoratAnimType InAnimType) const {
    return FKoratReplaceAnimationDataList{};
}

float UKoratCharacterSubActionStateAnimInstance::GetPlayRatioAtSection(const EKoratAnimType InAnimType) const {
    return 0.0f;
}

EKoratAnimType UKoratCharacterSubActionStateAnimInstance::GetPlayingAnimType(const FKoratActionDataList InAction) const {
    return EKoratAnimType::None;
}

UAnimMontage* UKoratCharacterSubActionStateAnimInstance::GetOriginalMontage(const EKoratAnimType InAnimType) const {
    return NULL;
}

FName UKoratCharacterSubActionStateAnimInstance::GetNextSection(const EKoratAnimType InAnimType) const {
    return NAME_None;
}

UAnimMontage* UKoratCharacterSubActionStateAnimInstance::GetMontage(const EKoratAnimType InAnimType) const {
    return NULL;
}

float UKoratCharacterSubActionStateAnimInstance::GetLevelSequenceCurrentTime(const EKoratAnimType InAnimType) const {
    return 0.0f;
}

FString UKoratCharacterSubActionStateAnimInstance::GetLevelSequenceCurrentSection(const EKoratAnimType InAnimType) const {
    return TEXT("");
}

FString UKoratCharacterSubActionStateAnimInstance::GetLevelSequenceCurrentName(const EKoratAnimType InAnimType) const {
    return TEXT("");
}

bool UKoratCharacterSubActionStateAnimInstance::GetIsContinued(const EKoratAnimType InAnimType) const {
    return false;
}

FName UKoratCharacterSubActionStateAnimInstance::GetGroupName(const EKoratAnimType InAnimType) const {
    return NAME_None;
}

FName UKoratCharacterSubActionStateAnimInstance::GetCurrentSection(EKoratAnimType InAnimType) const {
    return NAME_None;
}

float UKoratCharacterSubActionStateAnimInstance::GetCurrentPosition(EKoratAnimType InAnimType) const {
    return 0.0f;
}

UAnimMontage* UKoratCharacterSubActionStateAnimInstance::GetCurrentMontage(EKoratAnimType InAnimType) const {
    return NULL;
}

bool UKoratCharacterSubActionStateAnimInstance::GetAnimTypeObject(EKoratAnimType& OutAnimType, const UObject* InObject) {
    return false;
}

FString UKoratCharacterSubActionStateAnimInstance::CreateDebugActionString() {
    return TEXT("");
}

void UKoratCharacterSubActionStateAnimInstance::ChangedSection(const EKoratAnimType InAnimType) {
}

void UKoratCharacterSubActionStateAnimInstance::AddRunningActionString(FString& InOutString) {
}



