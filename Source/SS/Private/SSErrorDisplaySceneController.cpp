#include "SSErrorDisplaySceneController.h"

ASSErrorDisplaySceneController::ASSErrorDisplaySceneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FaderHUD = NULL;
    this->MenuGeneralDialog = NULL;
    this->DownLoadContentsCheckProcess = NULL;
    this->InterruptSceneJumpDestination = EKoratInterruptSceneJumpDestination::None;
    this->bAllSubLevelLoaded = false;
    this->bTransitionCompleted = false;
    this->bReadyToReleaseCalled = false;
}


