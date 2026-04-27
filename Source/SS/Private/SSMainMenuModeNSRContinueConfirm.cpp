#include "SSMainMenuModeNSRContinueConfirm.h"

USSMainMenuModeNSRContinueConfirm::USSMainMenuModeNSRContinueConfirm() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->ButtonLeft = NULL;
    this->ButtonRight = NULL;
    this->LastFocusedButton = NULL;
    this->ContinueNSRMode = EKoratModeNSRSelectMode::None;
}

void USSMainMenuModeNSRContinueConfirm::OnCompleteLoadTexture(TSoftObjectPtr<UTexture2D> InTexture, UImage* InImage) {
}

void USSMainMenuModeNSRContinueConfirm::OnButtonRight() {
}

void USSMainMenuModeNSRContinueConfirm::OnButtonLeft() {
}

void USSMainMenuModeNSRContinueConfirm::OnButtonFocused(USSMenuButton* InButton) {
}


