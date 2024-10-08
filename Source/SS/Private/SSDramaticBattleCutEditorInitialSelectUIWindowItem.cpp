#include "SSDramaticBattleCutEditorInitialSelectUIWindowItem.h"

USSDramaticBattleCutEditorInitialSelectUIWindowItem::USSDramaticBattleCutEditorInitialSelectUIWindowItem() {
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


