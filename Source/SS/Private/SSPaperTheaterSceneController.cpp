#include "SSPaperTheaterSceneController.h"

ASSPaperTheaterSceneController::ASSPaperTheaterSceneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MessageIntervalWait = 0.00f;
    this->MessageMinTime = 0.30f;
    this->WaitTimeAfterVoice = 0.30f;
    this->PTLSDestroyAfterOTLSFrame = 12;
    this->WaitTimeCutEventMovieFromIn = 0.50f;
    this->SkipHideReleaseTime = 1.00f;
    this->SkipFadeDuration = 0.05f;
    this->PauseTransitionFadeDuration = 1.00f;
    this->HandyShakeBlendStartTime = 0.50f;
    this->HandyShakeBlendEndTime = 0.50f;
    this->HandyShakeStopBlendStartTime = 0.50f;
    this->HandyShakeStopBlendEndTime = 0.50f;
    this->DebugUnitTestPaperTheaterData = NULL;
    this->bTravelAddLevelLoadCompleted = false;
    this->bTravelRemoveLevelRelease = false;
    this->bTravelBeforeWaitForPreEndPlay = false;
    this->bTravelTransitionCompleted = false;
    this->MessageIndex = 0;
    this->MessageStatusTimer = 0.00f;
    this->MessageStatusTimeVoiceEnd = 0.00f;
    this->MessageDisplayTime = 0.00f;
    this->CutEventElapsed = 0.00f;
    this->CutEventSetupDelayTime = 0.10f;
    this->PaperTheaterData = NULL;
    this->PaperTheaterLevelSequenceActor = NULL;
    this->ManualCameraActor = NULL;
    this->CutIndex = 0;
    this->PaperTheaterOTLevelSequenceActor = NULL;
    this->bTestTransitEvent_InLoop = false;
    this->bTestTransitEvent_OutLoop = false;
    this->CriMediaPlayerIntro = NULL;
    this->CriMediaPlayerCutEvent = NULL;
    this->CutEventIndex = -1;
    this->PlayerController = NULL;
    this->CutTextUi = NULL;
    this->SkipManager = NULL;
    this->Fader3DScene = NULL;
    this->PauseManager = NULL;
    this->FaderHUD = NULL;
    this->RetryManager = NULL;
    this->AfterBuiltInMenu = NULL;
    this->DebugCurrentTime = -1;
}

bool ASSPaperTheaterSceneController::IsPTPlus() const {
    return false;
}

bool ASSPaperTheaterSceneController::IsCutEvent() const {
    return false;
}

int32 ASSPaperTheaterSceneController::GetCutNumMax() {
    return 0;
}

int32 ASSPaperTheaterSceneController::GetCutNum() {
    return 0;
}

UTexture* ASSPaperTheaterSceneController::GetCutImageTexture(int32 InCutIndex) {
    return NULL;
}

UTexture2D* ASSPaperTheaterSceneController::GetCutImage(int32 InCutIndex) {
    return NULL;
}

UManaTexture* ASSPaperTheaterSceneController::GetCutEventManaTexture() {
    return NULL;
}

int32 ASSPaperTheaterSceneController::GetCutEventIndex() const {
    return 0;
}


