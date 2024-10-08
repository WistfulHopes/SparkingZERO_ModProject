#include "SSDramaticBattleCutEditorController.h"

ASSDramaticBattleCutEditorController::ASSDramaticBattleCutEditorController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartFadeDuration = 1.00f;
    this->bFinishEdit = false;
    this->bIsPlayedPreview = false;
    this->bIsStartSaveThumbnailCaptureData = false;
    this->bTravelAddLevelLoadCompleted = false;
    this->bTravelTransitionCompleted = false;
}

void ASSDramaticBattleCutEditorController::SetMap(FKoratMapDataList InMapDataList) {
}

void ASSDramaticBattleCutEditorController::SetEditCutDataId(FName InCutDataId, bool bInCreateNew) {
}

void ASSDramaticBattleCutEditorController::SetCutsceneCutType(ESSDramaticBattleCutEditorCutType InCutType) {
}

void ASSDramaticBattleCutEditorController::SetCharacterStartList(TArray<FKoratPlayerStartDataList>& InCharacterStartList) {
}

void ASSDramaticBattleCutEditorController::SetCharacterList(TArray<FKoratCharacterDataList>& InCharacterList) {
}

void ASSDramaticBattleCutEditorController::GetCharacterList(TArray<FKoratCharacterDataList>& OutCharacterList) {
}


