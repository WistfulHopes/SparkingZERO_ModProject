#include "SSDramaticBattleCutEditorInitialSelectUIController.h"

ASSDramaticBattleCutEditorInitialSelectUIController::ASSDramaticBattleCutEditorInitialSelectUIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UIWindowDisplayMax = 4;
    this->DecidedSelectItemIndex = -1;
    this->UIWindowItemFunctionBase = NULL;
    this->bIsMenuButtonSelectorLoop = true;
    this->MenuButtonSelectorVerticalFluctuation = 0;
    this->ActionNameAlreadySet = false;
    this->EditCharacterIndex = -1;
    this->EditSubtitleIndex = -1;
    this->bCanPlayBGM = false;
    this->ActiveWindowIndex = 0;
    this->DialogDataType = ESSDramaticBattleCutEditorInitialSelectUIWindowDialogDataType::None;
    this->GuideManager = NULL;
    this->SortFilterDialog = NULL;
    this->ImageSelectorUi2D = NULL;
    this->ImageSelectorUi3D = NULL;
}


