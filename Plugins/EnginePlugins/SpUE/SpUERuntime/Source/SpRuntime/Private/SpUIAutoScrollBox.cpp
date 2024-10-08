#include "SpUIAutoScrollBox.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"

USpUIAutoScrollBox::USpUIAutoScrollBox() {
    this->bIsVariable = false;
    this->bIsVolatile = true;
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->Direction = ESpUIScrollDirection::Left;
    this->ScrollLimit = 0;
    this->ScrollSpeed = 0.00f;
    this->StartWaitTime = 0.00f;
    this->EndWaitTime = 0.00f;
}

void USpUIAutoScrollBox::StopScroll(bool bInResetPosition) {
}

void USpUIAutoScrollBox::StartScroll() {
}

void USpUIAutoScrollBox::ResetScrollCount() {
}

void USpUIAutoScrollBox::ResetScroll(bool bInTickStop) {
}


