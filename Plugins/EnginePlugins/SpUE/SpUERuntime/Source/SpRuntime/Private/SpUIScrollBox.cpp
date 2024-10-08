#include "SpUIScrollBox.h"

USpUIScrollBox::USpUIScrollBox() {
    this->bIsVariable = false;
    this->bScrollLoop = false;
    this->bFocusKeepCenter = true;
    this->Orientation = Orient_Vertical;
    this->ScrollAmount = 32.00f;
    this->bAlwaysShowScrollBar = false;
    this->bUseHoverAndDraggedThumb = false;
    this->BarThickness = 5.00f;
    this->ThumbThickness = 5.00f;
    this->EffectMaterial = NULL;
}

void USpUIScrollBox::SetScrollOffset(float InNewOffset) {
}

void USpUIScrollBox::ScrollDirectValue(ESpUIScrollDirection InDirection, float InScrollValue) {
}

void USpUIScrollBox::ScrollAmountValue(ESpUIScrollDirection InDirection) {
}

float USpUIScrollBox::GetScrollOffsetRatio() {
    return 0.0f;
}

float USpUIScrollBox::GetScrollOffset() {
    return 0.0f;
}

FVector2D USpUIScrollBox::GetOrientationalContentSize() {
    return FVector2D{};
}


