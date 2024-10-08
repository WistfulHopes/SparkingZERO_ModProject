#include "SSStylePanel.h"

USSStylePanel::USSStylePanel() {
    this->ChangeLeftButtonGuide = NULL;
    this->ChangeRightButtonGuide = NULL;
}

void USSStylePanel::SetStyleSetIndex(int32 InStyleSetIndex) {
}

void USSStylePanel::SetStyleIconImage(int32 InStylePageIndex, int32 InStyleIndex, UTexture* InImage) {
}

void USSStylePanel::SetNumDisplayedStyleSets(int32 InNumStyleSets) {
}







int32 USSStylePanel::GetNumDisplayedStyleSets() {
    return 0;
}

int32 USSStylePanel::GetCurrentStylePageIndex() const {
    return 0;
}

void USSStylePanel::EnableStyle(int32 InStylePageIndex, int32 InStyleIndex, int32 InConsumeBlastStock) {
}

void USSStylePanel::DisableStyle(int32 InStylePageIndex, int32 InStyleIndex, int32 InConsumeBlastStock) {
}

void USSStylePanel::DecideStyle(int32 InStyleIndex) {
}

void USSStylePanel::ChangeRight() {
}

void USSStylePanel::ChangeLeft() {
}


