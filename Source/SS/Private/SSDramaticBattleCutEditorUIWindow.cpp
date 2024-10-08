#include "SSDramaticBattleCutEditorUIWindow.h"

USSDramaticBattleCutEditorUIWindow::USSDramaticBattleCutEditorUIWindow() {
    this->WindowTitleTextWidget = NULL;
    this->ScrollBoxWidget = NULL;
    this->HeaderSwitcherWidget = NULL;
    this->HeaderButtonLeftWidget = NULL;
    this->HeaderButtonRightWidget = NULL;
    this->ActiveEffectSwitcherWidget = NULL;
    this->UIController = NULL;
    this->WindowIndex = 0;
    this->FocusedSelectButtonIndex = 0;
    this->bVisibleFilterButton = false;
    this->LastFocusedButton = NULL;
}

void USSDramaticBattleCutEditorUIWindow::SetWindowActiveEffect(bool InIsActirve) {
}

void USSDramaticBattleCutEditorUIWindow::PrepareGoback() {
}

void USSDramaticBattleCutEditorUIWindow::OnFilterChangedRight() {
}

void USSDramaticBattleCutEditorUIWindow::OnFilterChangedLeft() {
}

int32 USSDramaticBattleCutEditorUIWindow::GetFocusedWidgetIndexFromDataIndex(int32 InCheckDataIndex) {
    return 0;
}

void USSDramaticBattleCutEditorUIWindow::DecidePanel(USSMenuButton* InButton) {
}

void USSDramaticBattleCutEditorUIWindow::ChangePanelData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}


