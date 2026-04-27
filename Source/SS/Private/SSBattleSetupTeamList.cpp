#include "SSBattleSetupTeamList.h"

USSBattleSetupTeamList::USSBattleSetupTeamList() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->DPNumTextWidgetName = TEXT("DPNum");
    this->DPAlertMarkWidgetName = TEXT("IMG_Alert");
    this->DPMaxChangeMarkWidgetName = TEXT("IMG_Icon_Notification");
    this->EPBonusVisibilityWidgetName = TEXT("EVPointNumSet");
    this->EPBonusNumTextWidgetName = TEXT("EVBonusNum");
}


bool USSBattleSetupTeamList::IsDecided() {
    return false;
}

int32 USSBattleSetupTeamList::GetDecidedPanelIndex() {
    return 0;
}

void USSBattleSetupTeamList::DecidedPanel(USSMenuButton* InButton) {
}


