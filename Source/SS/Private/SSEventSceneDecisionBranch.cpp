#include "SSEventSceneDecisionBranch.h"

USSEventSceneDecisionBranch::USSEventSceneDecisionBranch() {
    this->bIsFocusable = true;
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->CanvasPanel = NULL;
    this->DummyFocusButton = NULL;
}

void USSEventSceneDecisionBranch::OnDecidedTop() {
}

void USSEventSceneDecisionBranch::OnDecidedRight() {
}

void USSEventSceneDecisionBranch::OnDecidedLeft() {
}

void USSEventSceneDecisionBranch::OnDecidedBottom() {
}


