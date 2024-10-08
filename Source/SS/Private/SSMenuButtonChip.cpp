#include "SSMenuButtonChip.h"

USSMenuButtonChip::USSMenuButtonChip() {
    this->bIsFocusable = false;
    this->bEnableMouseDecideKeyRepeat = true;
    this->MouseDecideKeyRepeatStartTime = 0.20f;
    this->MouseDecideKeyRepeatStepTime = 0.10f;
}

void USSMenuButtonChip::OnValueChangeKey() {
}

void USSMenuButtonChip::OnValueChangeEnabled() {
}

void USSMenuButtonChip::OnValueChangeDisabled() {
}


