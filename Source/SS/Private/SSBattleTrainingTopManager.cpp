#include "SSBattleTrainingTopManager.h"

USSBattleTrainingTopManager::USSBattleTrainingTopManager() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->BuiltInMenu = NULL;
    this->DecideHoldButton = NULL;
    this->CancelHoldButton = NULL;
}

void USSBattleTrainingTopManager::UpdateDecideHoldButtonProgress(USSMenuButton* InMenuButton, float InProgress) {
}

void USSBattleTrainingTopManager::UpdateCancelHoldButtonProgress(USSMenuButton* InMenuButton, float InProgress) {
}


