#include "SSBattleMemberSettingMenu.h"

USSBattleMemberSettingMenu::USSBattleMemberSettingMenu() {
    this->RemoveButtonWidgetName = TEXT("WBP_OBJ_Common_HitBTN_Remove");
    this->SwapButtonWidgetName = TEXT("WBP_OBJ_Common_HitBTN_Replace");
    this->DPVisibilityWidgetName = TEXT("DPNumSet");
    this->DPNumTextWidgetName = TEXT("DPNum");
    this->DPAlertMarkWidgetName = TEXT("IMG_Alert");
    this->EPBonusVisibilityWidgetName = TEXT("EVPointNumSet");
    this->EPBonusNumTextWidgetName = TEXT("EVBonusNum");
}


bool USSBattleMemberSettingMenu::IsFocusChanged() {
    return false;
}

bool USSBattleMemberSettingMenu::IsDecideSwapButton() {
    return false;
}

bool USSBattleMemberSettingMenu::IsDecideRemoveButton() {
    return false;
}

bool USSBattleMemberSettingMenu::IsDecided() {
    return false;
}

int32 USSBattleMemberSettingMenu::GetFocusedPanelIndex() {
    return 0;
}

int32 USSBattleMemberSettingMenu::GetDecidedPanelIndex() {
    return 0;
}

void USSBattleMemberSettingMenu::FocusedPanel() {
}

void USSBattleMemberSettingMenu::EnableOtherButtons() {
}

void USSBattleMemberSettingMenu::DisableOtherButtons() {
}

void USSBattleMemberSettingMenu::DecidedPanel() {
}


