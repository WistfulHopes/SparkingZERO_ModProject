#include "SSBattleSetupBuildupItemIcon.h"

USSBattleSetupBuildupItemIcon::USSBattleSetupBuildupItemIcon() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->EmptyTexture = NULL;
    this->ItemDispButtonSwitcherName = TEXT("Swich");
}

void USSBattleSetupBuildupItemIcon::SetCharacterItem(const FKoratCharacterItemDataList& InCharacterItemData) {
}


