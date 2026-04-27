#include "SSPurchaseConfirmationDialog.h"

USSPurchaseConfirmationDialog::USSPurchaseConfirmationDialog() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->CurrentInAnimType = 0;
}

void USSPurchaseConfirmationDialog::ChangePurchaseItemNum(USSMenuButton* InHitButton, int32 InDataIndex) {
}

void USSPurchaseConfirmationDialog::ButtonFocused(USSMenuButton* InButton) {
}

void USSPurchaseConfirmationDialog::ButtonDecided(USSMenuButton* InButton) {
}


