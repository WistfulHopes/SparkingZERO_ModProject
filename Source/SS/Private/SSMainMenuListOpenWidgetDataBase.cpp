#include "SSMainMenuListOpenWidgetDataBase.h"

FSSMainMenuListOpenWidgetDataBase::FSSMainMenuListOpenWidgetDataBase() {
    this->SettingsMode = EMainMenuSettingsMode::MatchingCondition;
    this->bNeedOnline = false;
    this->OnlineCheckMode = EMainMenuOnlineCheckMode::None;
    this->bOnlineOnly = false;
}

