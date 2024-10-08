#include "FreeTimelineActorParamater.h"

FFreeTimelineActorParamater::FFreeTimelineActorParamater() {
    this->ActionOwnerActor = NULL;
    this->OwnerActor = NULL;
    this->RequestPlayerState = EKoratFreeTimelineActorRequest::None;
    this->bEnableStartTransform = false;
    this->ReferenceActor = NULL;
}

