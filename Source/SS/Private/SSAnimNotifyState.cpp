#include "SSAnimNotifyState.h"

USSAnimNotifyState::USSAnimNotifyState() {
    this->DefaultMontageTickType = EMontageNotifyTickType::Queued;
}

FGuid USSAnimNotifyState::GetGUID() const {
    return FGuid{};
}

FColor USSAnimNotifyState::GetChangedNotifyColor_Implementation() const {
    return FColor{};
}


