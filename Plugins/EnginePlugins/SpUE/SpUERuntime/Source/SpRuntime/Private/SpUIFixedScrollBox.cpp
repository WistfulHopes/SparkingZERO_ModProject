#include "SpUIFixedScrollBox.h"

USpUIFixedScrollBox::USpUIFixedScrollBox() {
    this->bIsVariable = false;
    this->bScrollLoop = false;
    this->Orientation = Orient_Vertical;
    this->ScrollAmount = 32.00f;
    this->bAlwaysShowScrollBar = false;
    this->EffectMaterial = NULL;
    this->BarThickness = 5.00f;
    this->ThumbThickness = 5.00f;
}


