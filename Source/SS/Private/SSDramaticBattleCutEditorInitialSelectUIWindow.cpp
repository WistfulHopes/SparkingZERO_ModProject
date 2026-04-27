#include "SSDramaticBattleCutEditorInitialSelectUIWindow.h"

USSDramaticBattleCutEditorInitialSelectUIWindow::USSDramaticBattleCutEditorInitialSelectUIWindow() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->UIController = NULL;
    this->WindowIndex = 0;
    this->FocusedSelectButtonIndex = 0;
}

void USSDramaticBattleCutEditorInitialSelectUIWindow::OnFilterChangedRight() {
}

void USSDramaticBattleCutEditorInitialSelectUIWindow::OnFilterChangedLeft() {
}


