#include "SSDramaticBattleNewCutEditorInitialSelectUIController.h"

ASSDramaticBattleNewCutEditorInitialSelectUIController::ASSDramaticBattleNewCutEditorInitialSelectUIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CutSelectDimensionList = NULL;
    this->CutSelect2DList = NULL;
    this->CutSelect3DList = NULL;
    this->GuideWidget = NULL;
    this->SortFilterDialog = NULL;
}

void ASSDramaticBattleNewCutEditorInitialSelectUIController::ChangeSituationPanelData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSDramaticBattleNewCutEditorInitialSelectUIController::ChangePicturePanelData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSDramaticBattleNewCutEditorInitialSelectUIController::ChangeDimensionPanelData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}


