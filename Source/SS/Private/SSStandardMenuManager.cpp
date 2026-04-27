#include "SSStandardMenuManager.h"

USSStandardMenuManager::USSStandardMenuManager() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->CurrentWidget = NULL;
}

void USSStandardMenuManager::OpenWindowNew(const TSoftClassPtr<USSMenuManager> widgetWindow) {
}

void USSStandardMenuManager::OnGoToButtonNew(const FKoratUILevelDataList Index) {
}


