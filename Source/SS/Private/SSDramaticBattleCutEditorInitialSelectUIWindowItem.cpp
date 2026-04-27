#include "SSDramaticBattleCutEditorInitialSelectUIWindowItem.h"

USSDramaticBattleCutEditorInitialSelectUIWindowItem::USSDramaticBattleCutEditorInitialSelectUIWindowItem() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->UIController = NULL;
    this->UIWindow = NULL;
}

void USSDramaticBattleCutEditorInitialSelectUIWindowItem::OnNewFocusedCallback(USSMenuButton* InButton) {
}

void USSDramaticBattleCutEditorInitialSelectUIWindowItem::OnNewDecidedCallback(USSMenuButton* InButton) {
}



bool USSDramaticBattleCutEditorInitialSelectUIWindowItem::GetIsKeepSelect() {
    return false;
}

bool USSDramaticBattleCutEditorInitialSelectUIWindowItem::GetIsHighlight() {
    return false;
}


