#include "SSDramaticDirectionWindow.h"

USSDramaticDirectionWindow::USSDramaticDirectionWindow() {
    this->EditTableNumText = NULL;
    this->EditItemText = NULL;
    this->SelectTriggerButtonType = ESSKeyInputType::UI_Option;
    this->RightTriggerButton = NULL;
    this->LeftTriggerButton = NULL;
    this->RightShoulderButton = NULL;
    this->LeftShoulderButton = NULL;
    this->DirectionMode = EKoratDramaticDirectionMode::None;
}

void USSDramaticDirectionWindow::RightChangeDirectionTable() {
}

void USSDramaticDirectionWindow::OnDecideTriggerButton(USSMenuButton* InHitButton) {
}

void USSDramaticDirectionWindow::OnDecideTablePanel(USSMenuButton* InHitButton) {
}

void USSDramaticDirectionWindow::LeftChangeDirectionTable() {
}


