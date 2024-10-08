#include "SSTimeLineViewPanel.h"
#include "Components/SlateWrapperTypes.h"

USSTimeLineViewPanel::USSTimeLineViewPanel() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::HitTestInvisible;
}

void USSTimeLineViewPanel::PanelFocus() {
}

void USSTimeLineViewPanel::OnSizeChanged() {
}

void USSTimeLineViewPanel::OnKeyFocus(int32 InKeyId) {
}


