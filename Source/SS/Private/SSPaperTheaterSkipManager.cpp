#include "SSPaperTheaterSkipManager.h"

USSPaperTheaterSkipManager::USSPaperTheaterSkipManager() {
    this->MenuManager = NULL;
    this->MenuButtonHold = NULL;
    this->bInitialized = false;
    this->bInputEnable = false;
    this->StatusTimer = 0.00f;
    this->bIsPause = false;
    this->HideReleaseTime = 1.00f;
}

void USSPaperTheaterSkipManager::UnPause() {
}

void USSPaperTheaterSkipManager::Tick(float InDeltaTime) {
}

void USSPaperTheaterSkipManager::ShowWidget() {
}

void USSPaperTheaterSkipManager::SetInputEnable(bool bInEnable) {
}

void USSPaperTheaterSkipManager::Pause() {
}

void USSPaperTheaterSkipManager::OnSkipButtonHoldProgressDisp(USSMenuButton* InButton, float InProgress) {
}

bool USSPaperTheaterSkipManager::IsInputDecided() {
    return false;
}

void USSPaperTheaterSkipManager::Initialize(float InHideReleaseTime) {
}

void USSPaperTheaterSkipManager::HideWidget() {
}

bool USSPaperTheaterSkipManager::GetInputEnable() {
    return false;
}

void USSPaperTheaterSkipManager::Finalize() {
}


