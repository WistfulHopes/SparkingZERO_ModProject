#include "SSBattleTrainingListItemManager.h"

USSBattleTrainingListItemManager::USSBattleTrainingListItemManager() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
}

void USSBattleTrainingListItemManager::UpdateButton(USSRemoteButton* InButton, const int32 InDataIndex) {
}

ESSBattleTrainingListItemChangeType USSBattleTrainingListItemManager::GetChangeType() const {
    return ESSBattleTrainingListItemChangeType::None;
}


