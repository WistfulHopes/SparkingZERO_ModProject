#include "SSComboSet.h"

USSComboSet::USSComboSet() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->ComboWidget = NULL;
    this->DamageWidget = NULL;
}

void USSComboSet::SetDamageNum(const float InDamageNum) {
}

USSDamage* USSComboSet::GetDamageNum() const {
    return NULL;
}

USSCombo* USSComboSet::GetCombo() const {
    return NULL;
}


