#include "SSDramaticReplayListUI.h"

USSDramaticReplayListUI::USSDramaticReplayListUI() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->DefaultFocusIdx = 0;
}

void USSDramaticReplayListUI::OnSetupPanelData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSDramaticReplayListUI::OnDataUpdate(bool bIsClear) {
}


