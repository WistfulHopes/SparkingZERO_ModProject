#include "SSUiItemNotificationElement.h"

USSUiItemNotificationElement::USSUiItemNotificationElement() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->Header = NULL;
    this->ItemNameText = NULL;
    this->ItemNumText = NULL;
    this->ItemIcon = NULL;
    this->CharaIcon = NULL;
    this->IconSwitcher = NULL;
    this->ItemNumOverlay = NULL;
}

void USSUiItemNotificationElement::OnCompleteLoadTexture() {
}


