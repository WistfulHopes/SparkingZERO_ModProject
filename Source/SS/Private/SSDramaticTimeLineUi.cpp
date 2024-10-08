#include "SSDramaticTimeLineUi.h"

USSDramaticTimeLineUi::USSDramaticTimeLineUi() {
    this->TimeLineViewPanelWidgetName = TEXT("TimeLineViewPanel");
    this->TimeLineTrackViewPanelWidgetName = TEXT("TimeLineTrackViewPanel");
    this->TimeSliderWidgetName = TEXT("TimeSlider");
    this->TimeLineViewPanelWidget = NULL;
    this->TimeLineTrackViewPanelWidget = NULL;
    this->TimeSliderWidget = NULL;
}

void USSDramaticTimeLineUi::SetStartTransitionLength(float InLengthSec) {
}

void USSDramaticTimeLineUi::SetSlowStart(float InStartSec) {
}

void USSDramaticTimeLineUi::SetSlowSpeed(float InRate) {
}

void USSDramaticTimeLineUi::SetSlowEnable(bool bIsEnable) {
}

void USSDramaticTimeLineUi::SetSelect(int32 InKeyId, bool bIsSelect) {
}

void USSDramaticTimeLineUi::SetScaleLevel(int32 InScaleLevel) {
}

void USSDramaticTimeLineUi::SetPlayHeadVisible(bool bIsVisible) {
}

void USSDramaticTimeLineUi::SetPlayHeadPosition(float InSecond) {
}

void USSDramaticTimeLineUi::SetPanelFocus() {
}

bool USSDramaticTimeLineUi::SetKeyFocus(int32 InKeyId) {
    return false;
}

bool USSDramaticTimeLineUi::SetKey(int32 InKeyId, const FText& InName, float InStartSec, float InLengthSec, bool bIsSlowStretch) {
    return false;
}

void USSDramaticTimeLineUi::SetEndLineTime(float InSecond) {
}

bool USSDramaticTimeLineUi::Remove(int32 InId) {
    return false;
}

bool USSDramaticTimeLineUi::IsValidID(int32 ID) const {
    return false;
}

UUserWidget* USSDramaticTimeLineUi::GetTimeLineTrackPanelWidget() {
    return NULL;
}

int32 USSDramaticTimeLineUi::GetScaleLevel() const {
    return 0;
}

FSSTimeLinePlaybackBar USSDramaticTimeLineUi::GetKey(int32 InKeyId) const {
    return FSSTimeLinePlaybackBar{};
}

void USSDramaticTimeLineUi::ClearSelect() {
}

int32 USSDramaticTimeLineUi::AddTrack(int32 InParentTrackId, const FText& InName, ESSTimeLineUiTrackColorType InColorType) {
    return 0;
}

int32 USSDramaticTimeLineUi::AddKey(int32 InParentTrackId, const FText& InName, float InStartSec, float InLengthSec, bool bIsSlowStretch) {
    return 0;
}


