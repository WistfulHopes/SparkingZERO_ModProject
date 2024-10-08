#include "KoratFreeTimelineRequestInfo.h"

FKoratFreeTimelineRequestInfo::FKoratFreeTimelineRequestInfo() {
    this->CurrentState = EKoratFreeTimelineActorRequest::None;
    this->RequestState = EKoratFreeTimelineActorRequest::None;
    this->RequestPlayCount = 0;
    this->bOneShotExecuted = false;
    this->bUpdateAfterChangeState = false;
}

