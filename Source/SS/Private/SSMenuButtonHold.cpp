#include "SSMenuButtonHold.h"

USSMenuButtonHold::USSMenuButtonHold() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->HoldInputStartSec = 0.10f;
    this->HoldInputDecideSec = 0.50f;
    this->HoldSubtractSpeedScale = 4.00f;
    this->HoldDecideType = ESSMenuButtonHoldDecideType::None;
}






