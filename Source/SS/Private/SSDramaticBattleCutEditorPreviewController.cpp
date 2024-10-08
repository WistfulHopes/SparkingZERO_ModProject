#include "SSDramaticBattleCutEditorPreviewController.h"

ASSDramaticBattleCutEditorPreviewController::ASSDramaticBattleCutEditorPreviewController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewScript = NULL;
    this->PreviewCutCameraActor = NULL;
    this->PreviewEventSceneDataAsset = NULL;
    this->CutEditorController = NULL;
    this->NewCutEditorController = NULL;
    this->bIsCharacterReady = false;
    this->bFirstLoadCompleted = false;
    this->bRequestPlay = false;
    this->bRequestInitial = false;
    this->bFadeStartWait = false;
    this->FadeStartWaitCount = 0;
    this->Fader3DScene = NULL;
}

ASSDramaticBattleCutEditorPreviewController* ASSDramaticBattleCutEditorPreviewController::Create() {
    return NULL;
}


