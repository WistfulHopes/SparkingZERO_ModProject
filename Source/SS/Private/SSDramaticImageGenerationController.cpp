#include "SSDramaticImageGenerationController.h"

ASSDramaticImageGenerationController::ASSDramaticImageGenerationController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CaptureActor = NULL;
    this->bWaitCaptureComplete = false;
    this->bCaptureExecuted = false;
    this->bPrepareCapture = false;
    this->CurrentImageLabel = ESSImageGenerationImageLabel::None;
    this->TempEventSceneDataAsset = NULL;
    this->PreviewEventSceneDataAsset = NULL;
    this->bLoadFinishedSceneData = false;
}


