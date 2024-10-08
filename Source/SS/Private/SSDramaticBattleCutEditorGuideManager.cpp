#include "SSDramaticBattleCutEditorGuideManager.h"

USSDramaticBattleCutEditorGuideManager::USSDramaticBattleCutEditorGuideManager() {
    this->GuideWidget = NULL;
    this->bInitialized = false;
    this->UIController = NULL;
}

void USSDramaticBattleCutEditorGuideManager::Start() {
}

void USSDramaticBattleCutEditorGuideManager::SetZOrder(int32 InZOrder) {
}

void USSDramaticBattleCutEditorGuideManager::SetVisible(bool InVisible) {
}

void USSDramaticBattleCutEditorGuideManager::SetCurrentData() {
}

bool USSDramaticBattleCutEditorGuideManager::IsFinished() {
    return false;
}

ESSKeyInputType USSDramaticBattleCutEditorGuideManager::GetResultButton() const {
    return ESSKeyInputType::UI_Option;
}

void USSDramaticBattleCutEditorGuideManager::Finalize() {
}

USSDramaticBattleCutEditorGuideManager* USSDramaticBattleCutEditorGuideManager::CreateAndInitialize(AActor* InUIController) {
    return NULL;
}

void USSDramaticBattleCutEditorGuideManager::Close() {
}

void USSDramaticBattleCutEditorGuideManager::ClearResultButton() {
}


