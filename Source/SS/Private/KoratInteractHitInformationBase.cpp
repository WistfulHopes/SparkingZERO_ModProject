#include "KoratInteractHitInformationBase.h"

UKoratInteractHitInformationBase::UKoratInteractHitInformationBase() {
    this->HitNearObjectUniqueID = 0;
}

void UKoratInteractHitInformationBase::SetUseState(const int32 InUniqueId) {
}

void UKoratInteractHitInformationBase::SetState(const int32 InUniqueId, const EKoratFreeTimelineHitInfoState InNewState) {
}

void UKoratInteractHitInformationBase::SetRequestState(const int32 InUniqueId) {
}

void UKoratInteractHitInformationBase::SetDestroyState(const int32 InUniqueId) {
}

void UKoratInteractHitInformationBase::SetContinueState(const int32 InUniqueId, const int32 InContnueId) {
}

void UKoratInteractHitInformationBase::SetAction(const TArray<FKoratActionDataList>& InActionList) {
}

int32 UKoratInteractHitInformationBase::GetUniqueIdListStateFiltered(const EKoratFreeTimelineHitInfoState InFillterState, TArray<int32>& OutUniqueIdArray) const {
    return 0;
}

EKoratFreeTimelineHitInfoState UKoratInteractHitInformationBase::GetState(const int32 InUniqueId) const {
    return EKoratFreeTimelineHitInfoState::None;
}

int32 UKoratInteractHitInformationBase::GetHitNearObjectId() const {
    return 0;
}

bool UKoratInteractHitInformationBase::GetHitInfo(const int32 InUniqueId, FKoratFreeTimelineHitInformation& OutHitInfo) {
    return false;
}

int32 UKoratInteractHitInformationBase::GetAllUniqueIdList(TArray<int32>& OutUniqueIdArray) const {
    return 0;
}


