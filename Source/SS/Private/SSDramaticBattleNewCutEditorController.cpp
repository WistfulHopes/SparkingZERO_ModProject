#include "SSDramaticBattleNewCutEditorController.h"

ASSDramaticBattleNewCutEditorController::ASSDramaticBattleNewCutEditorController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FoldEditWindow = NULL;
    this->TextListWindow = NULL;
    this->MultiLineTextListWindow = NULL;
    this->BgmListWindow = NULL;
    this->GuideWidget = NULL;
    this->SortFilterDialog = NULL;
    this->MenuGeneralDialog = NULL;
    this->CharaLayoutWindow = NULL;
    this->CaptureTexture = NULL;
    this->StartFadeDuration = 1.00f;
    this->bFinishEdit = false;
    this->InitialSelectUIActor = NULL;
    this->bIsPlayedPreview = false;
    this->bIsStartSaveThumbnailCaptureData = false;
    this->PreviwePostProcessActor = NULL;
    this->bTravelAddLevelLoadCompleted = false;
    this->bTravelTransitionCompleted = false;
}

void ASSDramaticBattleNewCutEditorController::ChangeTextSubWindowData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSDramaticBattleNewCutEditorController::ChangeFocusInCharaLayoutSubWindowTopButton(USSMenuButton* InHitButton) {
}

void ASSDramaticBattleNewCutEditorController::ChangeFocusInCharaLayoutSubWindowBottomButton(USSMenuButton* InHitButton) {
}

void ASSDramaticBattleNewCutEditorController::ChangeBgmSubWindowData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}


