#include "SSCharacterWarpCmd.h"

ASSCharacterWarpCmd::ASSCharacterWarpCmd(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OtherActor = NULL;
    this->bIsSavePreWarpTransform = false;
    this->bIsKeepDistance = false;
    this->bIsKeepDirectionFinishPose = false;
    this->bIsHardSetSavedPoint = false;
    this->LinkType = ECharacterWarpLinkType::None;
    this->AfterDirectionType = ECharacterWarpAfterDirectionType::None;
    this->AttachTiming = ECharacterWarpResultAttachTimingType::None;
    this->IndependRequest = ECharacterWarpIndependRequestType::None;
}

void ASSCharacterWarpCmd::SetLinkType(ECharacterWarpLinkType Type) {
}

void ASSCharacterWarpCmd::SetIsSavePreWarpTransform(bool flag) {
}

void ASSCharacterWarpCmd::SetIsKeepDistance(bool flag) {
}

void ASSCharacterWarpCmd::SetIsKeepDirectionFinishPose(bool flag) {
}

void ASSCharacterWarpCmd::SetIsHardSetSavedPoint(bool flag) {
}

void ASSCharacterWarpCmd::SetIndependRequest(ECharacterWarpIndependRequestType Type) {
}

void ASSCharacterWarpCmd::SetAttachTiming(ECharacterWarpResultAttachTimingType Type) {
}

void ASSCharacterWarpCmd::SetAfterDirectionType(ECharacterWarpAfterDirectionType Type) {
}

void ASSCharacterWarpCmd::SetActiveAction(FKoratActionDataList Action) {
}


bool ASSCharacterWarpCmd::HasEffectiveTargetCharacter() {
    return false;
}

ASSCharacter* ASSCharacterWarpCmd::GetTargetCharacter() {
    return NULL;
}

AActor* ASSCharacterWarpCmd::GetTargetActor() {
    return NULL;
}

ASSCharacter* ASSCharacterWarpCmd::GetOwnerCharacter() {
    return NULL;
}

ECharacterWarpLinkType ASSCharacterWarpCmd::GetLinkType() {
    return ECharacterWarpLinkType::None;
}

ECharacterWarpIndependRequestType ASSCharacterWarpCmd::GetIndependRequestType() {
    return ECharacterWarpIndependRequestType::None;
}

ECharacterWarpResultAttachTimingType ASSCharacterWarpCmd::GetAttachTimingType() {
    return ECharacterWarpResultAttachTimingType::None;
}

ECharacterWarpAfterDirectionType ASSCharacterWarpCmd::GetAfterDirectionType() {
    return ECharacterWarpAfterDirectionType::None;
}

FKoratActionDataList ASSCharacterWarpCmd::GetActiveAction() {
    return FKoratActionDataList{};
}


