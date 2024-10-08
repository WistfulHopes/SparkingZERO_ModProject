#include "SSBattleSetupCustomizeCostumeMenu.h"

USSBattleSetupCustomizeCostumeMenu::USSBattleSetupCustomizeCostumeMenu() {
    this->CostumeHitButtonPrefixName = TEXT("WBP_OBJ_Common_HitButton_0");
    this->AccessoryHitButtonPrefixName = TEXT("WBP_OBJ_Common_HitAccesarry_");
    this->AccessoryDispButtonSwitcherName = TEXT("Switch");
}

bool USSBattleSetupCustomizeCostumeMenu::IsCostumeFocusChanged() const {
    return false;
}

bool USSBattleSetupCustomizeCostumeMenu::IsCostumeDecided() const {
    return false;
}

bool USSBattleSetupCustomizeCostumeMenu::IsAccessoryFocusChanged() const {
    return false;
}

bool USSBattleSetupCustomizeCostumeMenu::IsAccessoryDecided() const {
    return false;
}

int32 USSBattleSetupCustomizeCostumeMenu::GetFocusedDataIndex() const {
    return 0;
}

int32 USSBattleSetupCustomizeCostumeMenu::GetDecidedDataIndex() const {
    return 0;
}

void USSBattleSetupCustomizeCostumeMenu::DecidedPanel(USSMenuButton* InButton) {
}


