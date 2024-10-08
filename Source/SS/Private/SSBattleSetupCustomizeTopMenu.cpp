#include "SSBattleSetupCustomizeTopMenu.h"

USSBattleSetupCustomizeTopMenu::USSBattleSetupCustomizeTopMenu() {
    this->ItemHitButtonPrefixName = TEXT("WBP_OBJ_Common_HitButton_");
    this->CategoryHitButtonPrefixName = TEXT("WBP_OBJ_Common_Hit_Category_");
    this->CategoryDispButtonSwitcherName = TEXT("WidgetSwitcher_88");
}

bool USSBattleSetupCustomizeTopMenu::IsItemDecided() const {
    return false;
}

bool USSBattleSetupCustomizeTopMenu::IsCategoryDecided() const {
    return false;
}

int32 USSBattleSetupCustomizeTopMenu::GetDecidedIndex() const {
    return 0;
}

void USSBattleSetupCustomizeTopMenu::FocusedPanel(USSMenuButton* InButton) {
}

void USSBattleSetupCustomizeTopMenu::DecidedPanel(USSMenuButton* InButton) {
}


