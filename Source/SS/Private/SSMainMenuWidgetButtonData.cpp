#include "SSMainMenuWidgetButtonData.h"

FSSMainMenuWidgetButtonData::FSSMainMenuWidgetButtonData() {
    this->BehaviourType = EMainMenuListButtonBehaviour::None;
    this->bButtonVisible = false;
    this->QuickMatchType = EMainMenuListButtonQuickMatchType::Single;
    this->bNeedOnline = false;
    this->OnlineCheckMode = EMainMenuOnlineCheckMode::None;
    this->SceneIndex = 0;
    this->bLinkedEvent010 = false;
    this->LinkedEvent010Flags = 0;
}

