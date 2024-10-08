#include "SSDramaticBattleCutEditorSceneViewController.h"

ASSDramaticBattleCutEditorSceneViewController::ASSDramaticBattleCutEditorSceneViewController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TestCameraLevelSequence = NULL;
    this->TestMotionMLS = NULL;
    this->PreviewController = NULL;
    this->ManualCameraActor = NULL;
    this->bRequestPreview = false;
    this->ThumbnailImageWidget = NULL;
    this->ThumbnailTextWidget = NULL;
    this->CaptureActor = NULL;
    this->CaptureTexture = NULL;
    this->CaptureSlowStartTimer = -1.00f;
    this->bWaitCaptureComplete = false;
    this->GuideManager = NULL;
}

void ASSDramaticBattleCutEditorSceneViewController::SetCharacterStartList(TArray<FKoratPlayerStartDataList>& InCharacterStartList) {
}

void ASSDramaticBattleCutEditorSceneViewController::SetCharacterList(TArray<FKoratCharacterDataList>& InCharacterList) {
}

void ASSDramaticBattleCutEditorSceneViewController::GetCharacterList(TArray<FKoratCharacterDataList>& OutCharacterList) {
}


