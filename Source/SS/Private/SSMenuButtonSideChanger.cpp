#include "SSMenuButtonSideChanger.h"

USSMenuButtonSideChanger::USSMenuButtonSideChanger() {
    this->LeftChipButtonWidgetName = TEXT("Arrow_L");
    this->RightChipButtonWidgetName = TEXT("Arrow_R");
    this->bIsRingList = false;
    this->LeftRemoteChipHitButton = NULL;
    this->RightRemoteChipHitButton = NULL;
}

void USSMenuButtonSideChanger::SetItemText(const FText& InText) {
}

void USSMenuButtonSideChanger::OnValueUp() {
}

void USSMenuButtonSideChanger::OnValueDown() {
}


