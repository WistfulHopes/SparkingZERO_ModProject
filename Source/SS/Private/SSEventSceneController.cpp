#include "SSEventSceneController.h"

ASSEventSceneController::ASSEventSceneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeDulation = 1.00f;
    this->MenuGeneralDialog = NULL;
    this->PauseManager = NULL;
    this->FaderHUD = NULL;
    this->EventSceneDataAsset = NULL;
    this->Script = NULL;
    this->EventSceneCompositeActor = NULL;
    this->CutCameraActor = NULL;
    this->TransitionSequenceActor = NULL;
    this->bAllSubLevelLoaded = false;
    this->bTransitionCompleted = false;
    this->bReadyToReleaseCalled = false;
    this->bFadeOut = true;
    this->bSetupEventTransitionSuccess = false;
    this->bPlayTransSequence = false;
    this->bTransitionModeBattle = false;
    this->bTransitionLoopOut = false;
    this->WaitUIActionBattleDeltaTime = 0.00f;
}

void ASSEventSceneController::SetBattleCharacterEnable() {
}

bool ASSEventSceneController::DebugSetupDragonAdventureIFEventDefault(const UObject* WorldContextObject) {
    return false;
}


