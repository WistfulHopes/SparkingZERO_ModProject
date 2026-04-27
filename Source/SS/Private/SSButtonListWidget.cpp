#include "SSButtonListWidget.h"

USSButtonListWidget::USSButtonListWidget() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->WindowTitle = NULL;
    this->LastFocusedButton = NULL;
}

void USSButtonListWidget::OnButtonFocused(USSMenuButton* InButton) {
}

void USSButtonListWidget::OnButtonDecided(USSMenuButton* InButton) {
}


