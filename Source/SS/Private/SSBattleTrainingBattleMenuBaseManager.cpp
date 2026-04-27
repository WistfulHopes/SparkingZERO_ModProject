#include "SSBattleTrainingBattleMenuBaseManager.h"

USSBattleTrainingBattleMenuBaseManager::USSBattleTrainingBattleMenuBaseManager() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->GuideButtonSet = NULL;
    this->GuideButtonSetFooter = NULL;
}

void USSBattleTrainingBattleMenuBaseManager::SetHitButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSBattleTrainingBattleMenuBaseManager::OnPadRButton() {
}

void USSBattleTrainingBattleMenuBaseManager::OnPadLButton() {
}


