#include "SSDramaticBattleCutEditorInitialSelectUIWindowGuideManager.h"

USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager::USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager() {
    this->GuideWidget = NULL;
    this->bInitialized = false;
    this->UIController = NULL;
}

void USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager::Start() {
}

void USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager::SetCurrentData() {
}

bool USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager::IsFinished() {
    return false;
}

ESSKeyInputType USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager::GetResultButton() const {
    return ESSKeyInputType::UI_Option;
}

void USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager::Finalize() {
}

USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager* USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager::CreateAndInitialize(ASSDramaticBattleCutEditorInitialSelectUIController* InUIController) {
    return NULL;
}

void USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager::Close() {
}

void USSDramaticBattleCutEditorInitialSelectUIWindowGuideManager::ClearResultButton() {
}


