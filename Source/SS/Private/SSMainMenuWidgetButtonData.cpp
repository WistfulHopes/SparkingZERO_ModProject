#include "SSMainMenuWidgetButtonData.h"

FSSMainMenuWidgetButtonData::FSSMainMenuWidgetButtonData() {
    this->BehaviourType = EMainMenuListButtonBehaviour::None;
    this->bButtonVisible = false;
    this->QuickMatchType = EMainMenuListButtonQuickMatchType::Single;
    this->SceneIndex = 0;
    this->bLinkedEvent010 = false;
    this->LinkedEvent010Flags = 0;
}

