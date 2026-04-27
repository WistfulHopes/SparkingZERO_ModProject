#include "SSBattleTrainingBattleMenuBaseAManager.h"

USSBattleTrainingBattleMenuBaseAManager::USSBattleTrainingBattleMenuBaseAManager() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
}

void USSBattleTrainingBattleMenuBaseAManager::OnPadRButton() {
}

void USSBattleTrainingBattleMenuBaseAManager::OnPadLButton() {
}

ESSBattleTrainingItemLevelType USSBattleTrainingBattleMenuBaseAManager::GetNextItemLevelType() {
    return ESSBattleTrainingItemLevelType::Elementary;
}

ESSBattleTrainingItemLevelType USSBattleTrainingBattleMenuBaseAManager::GetItemLevelType() {
    return ESSBattleTrainingItemLevelType::Elementary;
}


