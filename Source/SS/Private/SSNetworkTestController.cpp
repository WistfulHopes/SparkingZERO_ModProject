#include "SSNetworkTestController.h"

ASSNetworkTestController::ASSNetworkTestController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FaderHUD = NULL;
    this->MenuGeneralDialog = NULL;
    this->bAllSubLevelLoaded = false;
    this->bTransitionCompleted = false;
    this->bReadyToReleaseCalled = false;
    this->CommandRequest = EKoratNetworkTestCommand::None;
    this->CommandRun = EKoratNetworkTestCommand::None;
}

void ASSNetworkTestController::RequestCommand(EKoratNetworkTestCommand InCommand) {
}


