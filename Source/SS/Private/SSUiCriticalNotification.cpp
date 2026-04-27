#include "SSUiCriticalNotification.h"

USSUiCriticalNotification::USSUiCriticalNotification() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->Title = NULL;
    this->Detail = NULL;
    this->Button = NULL;
    this->ScrollBox = NULL;
}

void USSUiCriticalNotification::OnDecidedCloseButton(USSMenuButton* InButton) {
}


