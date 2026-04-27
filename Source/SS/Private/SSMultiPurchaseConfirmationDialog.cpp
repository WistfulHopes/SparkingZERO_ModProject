#include "SSMultiPurchaseConfirmationDialog.h"

USSMultiPurchaseConfirmationDialog::USSMultiPurchaseConfirmationDialog() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->TitleTextWidgetNames.AddDefaulted(1);
    this->UserItemMoneyInvisibleWidgetNames.AddDefaulted(2);
    this->BeforeUserMoneyWidgetNames.AddDefaulted(1);
    this->AfterUserMoneyWidgetNames.AddDefaulted(2);
    this->DialogSelectButtonWidgetNames.AddDefaulted(2);
    this->CurrencySwitcherWidgetNames.AddDefaulted(1);
    this->ShortageMoneySwitcherWidgetNames.AddDefaulted(1);
    this->CurrentInAnimType = 0;
}

void USSMultiPurchaseConfirmationDialog::ItemButtonDataChange(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSMultiPurchaseConfirmationDialog::ButtonFocused(USSMenuButton* InButton) {
}

void USSMultiPurchaseConfirmationDialog::ButtonDecided(USSMenuButton* InButton) {
}


