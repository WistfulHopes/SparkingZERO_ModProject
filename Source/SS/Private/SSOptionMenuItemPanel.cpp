#include "SSOptionMenuItemPanel.h"

USSOptionMenuItemPanel::USSOptionMenuItemPanel() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->caption = NULL;
    this->Content = NULL;
    this->bRespondToDecideAction = false;
}

void USSOptionMenuItemPanel::OnChildButtonDecided() {
}


UWidget* USSOptionMenuItemPanel::GetContent() const {
    return NULL;
}


