#include "SSMainMenuSettingsWidgetBase.h"

USSMainMenuSettingsWidgetBase::USSMainMenuSettingsWidgetBase() {
    this->PropertySettingsWidget = NULL;
}

int32 USSMainMenuSettingsWidgetBase::OnPropertySlideRight(USSPropertySettingsButton* InButton) {
    return 0;
}

int32 USSMainMenuSettingsWidgetBase::OnPropertySlideLeft(USSPropertySettingsButton* InButton) {
    return 0;
}

void USSMainMenuSettingsWidgetBase::OnFocusedEnterButton() {
}

void USSMainMenuSettingsWidgetBase::OnFocusedButton() {
}

void USSMainMenuSettingsWidgetBase::OnDecidedEnterButton() {
}

void USSMainMenuSettingsWidgetBase::OnDecidedButton() {
}

void USSMainMenuSettingsWidgetBase::OnChangeProperty(FSSMainMenuListSettingsProperty InProperty, int32 InIndex) {
}


