#include "SSMainMenuListButtonBase.h"

FSSMainMenuListButtonBase::FSSMainMenuListButtonBase() {
    this->BehaviourType = EMainMenuListButtonBehaviour::None;
    this->bButtonVisible = false;
    this->bNeedOnline = false;
    this->OnlineCheckMode = EMainMenuOnlineCheckMode::None;
    this->bRestrictDuringInstall = false;
    this->bOnlineOnly = false;
    this->bDisable = false;
    this->NotificationBadgeCondition = EMainMenuButtonBadgeCondition::None;
}

