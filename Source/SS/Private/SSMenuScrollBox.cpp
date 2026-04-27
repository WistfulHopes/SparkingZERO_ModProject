#include "SSMenuScrollBox.h"

USSMenuScrollBox::USSMenuScrollBox() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->ViewScrollBox = NULL;
    this->RightDragMoveScale = 1.80f;
    this->ThumbMinSize = 100.00f;
    this->ScrollAreaWidget = NULL;
    this->ScrollSizeWidget = NULL;
    this->SliderBarWidget = NULL;
    this->ViewScrollWidget = NULL;
}

void USSMenuScrollBox::UpdateViewScrollWidget() {
}

void USSMenuScrollBox::SetTotalLength(float InLength) {
}

void USSMenuScrollBox::SetDisplayWidth(float InWidth) {
}

void USSMenuScrollBox::SetCursorPos(float InPosition) {
}


