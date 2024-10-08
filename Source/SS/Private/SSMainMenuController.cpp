#include "SSMainMenuController.h"

ASSMainMenuController::ASSMainMenuController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManualCameraActor = NULL;
    this->WaitDialog = NULL;
    this->FaderHUD = NULL;
    this->GuideWidget = NULL;
    this->Slider = NULL;
    this->ModeMenu = NULL;
    this->ModeMenuWTC = NULL;
    this->SubModeMenu = NULL;
    this->SubModeMenuExtra = NULL;
    this->RingMenu = NULL;
    this->SCTransitionWidget = NULL;
    this->ShopCustomSelector = NULL;
    this->ShopCustomSelectorCloser = NULL;
    this->MenuGeneralDialog = NULL;
    this->CameraLevelSequenceActor = NULL;
    this->FocusedArea = EMainMenuSceneArea::None;
    this->FocusedSubSceneIndex = 0;
    this->MainMenuSceneDataAsset = NULL;
    this->DialogManager = NULL;
    this->NetworkManager = NULL;
    this->PLMNetManager = NULL;
    this->OptionController = NULL;
    this->TipsDialog = NULL;
}


