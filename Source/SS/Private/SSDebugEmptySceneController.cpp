#include "SSDebugEmptySceneController.h"

ASSDebugEmptySceneController::ASSDebugEmptySceneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllSubLevelLoaded = false;
    this->bTransitionCompleted = false;
    this->bReadyToReleaseCalled = false;
}


