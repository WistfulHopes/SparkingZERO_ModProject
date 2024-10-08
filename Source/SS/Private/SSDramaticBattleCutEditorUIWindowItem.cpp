#include "SSDramaticBattleCutEditorUIWindowItem.h"

USSDramaticBattleCutEditorUIWindowItem::USSDramaticBattleCutEditorUIWindowItem() {
    this->UIController = NULL;
    this->UIWindow = NULL;
}

void USSDramaticBattleCutEditorUIWindowItem::OnNewFocusedCallback(USSMenuButton* InButton) {
}

void USSDramaticBattleCutEditorUIWindowItem::OnNewDecidedCallback(USSMenuButton* InButton) {
}



bool USSDramaticBattleCutEditorUIWindowItem::GetIsKeepSelect() {
    return false;
}

bool USSDramaticBattleCutEditorUIWindowItem::GetIsHighlight() {
    return false;
}


