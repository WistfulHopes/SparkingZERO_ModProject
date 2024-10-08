#include "SSFocusTargetActor.h"

ASSFocusTargetActor::ASSFocusTargetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->lifeTime = 0.00f;
    this->Playing = false;
    this->FocusTargetType = EFocusTargetType::FocusTargetTypeNormal;
    this->bBindSequence = false;
}


