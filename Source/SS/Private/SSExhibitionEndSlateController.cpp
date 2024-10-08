#include "SSExhibitionEndSlateController.h"

ASSExhibitionEndSlateController::ASSExhibitionEndSlateController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EndSlateDispTime = 10.00f;
    this->bAllSubLevelLoaded = false;
    this->bTransitionCompleted = false;
    this->bReadyToReleaseCalled = false;
    this->EndSlateManager = NULL;
}


