#include "SSPropertySettingsWidget.h"

USSPropertySettingsWidget::USSPropertySettingsWidget() {
    this->EnterButton = NULL;
    this->WindowTitleText = NULL;
    this->ScrollBox = NULL;
}

void USSPropertySettingsWidget::OnFocusedEnterButton() {
}

void USSPropertySettingsWidget::OnFocusedButton(USSMenuButton* InButton) {
}

void USSPropertySettingsWidget::OnDecidedEnterButton() {
}

void USSPropertySettingsWidget::OnDecidedButton(USSMenuButton* InButton) {
}

void USSPropertySettingsWidget::OnChangeProperty(USSPropertySettingsButton* InButton, int32 InIndex, int32 InNewValue) {
}

int32 USSPropertySettingsWidget::OnButtonSlideRight(USSPropertySettingsButton* InButton) {
    return 0;
}

int32 USSPropertySettingsWidget::OnButtonSlideLeft(USSPropertySettingsButton* InButton) {
    return 0;
}


