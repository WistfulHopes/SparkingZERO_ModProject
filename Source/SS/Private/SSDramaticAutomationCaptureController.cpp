#include "SSDramaticAutomationCaptureController.h"

ASSDramaticAutomationCaptureController::ASSDramaticAutomationCaptureController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutomationCaptureWaitingWidget = NULL;
    this->AutomationCaptureUpdateMessageWidget = NULL;
    this->CaptureActor = NULL;
    this->CaptureTexture = NULL;
    this->bWaitCaptureStart = false;
    this->bWaitCaptureComplete = false;
}


