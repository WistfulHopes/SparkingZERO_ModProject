#include "SSMainMenuSlider.h"

USSMainMenuSlider::USSMainMenuSlider() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->GuideMessage = NULL;
    this->GuideMessagePlate = NULL;
    this->SliderButtons = NULL;
    this->Pager = NULL;
    this->ArrowLeft = NULL;
    this->ArrowRight = NULL;
    this->DownloadTextPanel = NULL;
    this->DownloadTextSwitcher = NULL;
    this->GuideScrollBox = NULL;
}

void USSMainMenuSlider::OnDecidedArrowRight() {
}

void USSMainMenuSlider::OnDecidedArrowLeft() {
}


