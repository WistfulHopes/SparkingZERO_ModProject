#include "SSMenuViewScroll.h"

USSMenuViewScroll::USSMenuViewScroll() {
    this->bIsVolatile = true;
    this->ColumnsNum = 1;
    this->FixAreaTopLineViewIdx = 1;
    this->FixAreaLineNumber = 1;
    this->ZeroPaddingDigitsNum = 1;
    this->Orientation = Orient_Vertical;
    this->ScrollTimeLength = 0.05f;
}

void USSMenuViewScroll::SetFocusInfo(int32 InListElements, int32 InFocusDataIndex) {
}

bool USSMenuViewScroll::IsSideButtonValueChanged() {
    return false;
}

bool USSMenuViewScroll::IsHoldDecided() {
    return false;
}

bool USSMenuViewScroll::IsFocusChanged() {
    return false;
}

bool USSMenuViewScroll::IsDecided() {
    return false;
}

int32 USSMenuViewScroll::GetPreFocusedDataIndex() const {
    return 0;
}

int32 USSMenuViewScroll::GetFocusedFixViewLineIndex() const {
    return 0;
}

int32 USSMenuViewScroll::GetFocusedFixViewIndex() const {
    return 0;
}

int32 USSMenuViewScroll::GetFocusedDataIndex() const {
    return 0;
}

int32 USSMenuViewScroll::GetDecidedDataIndex() const {
    return 0;
}

void USSMenuViewScroll::CallbackSideChangerButtonValueChangeViewScroll(USSMenuButton* InButton) {
}

void USSMenuViewScroll::CallbackHoldDecidedButtonViewScroll(USSMenuButton* InButton) {
}

void USSMenuViewScroll::CallbackDecidedButtonViewScroll(USSMenuButton* InButton) {
}


