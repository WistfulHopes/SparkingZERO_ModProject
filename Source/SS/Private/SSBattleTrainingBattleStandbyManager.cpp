#include "SSBattleTrainingBattleStandbyManager.h"

USSBattleTrainingBattleStandbyManager::USSBattleTrainingBattleStandbyManager() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->GuideButtonSet = NULL;
    this->GuideButtonSetFooter = NULL;
}

void USSBattleTrainingBattleStandbyManager::SetHitButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}


