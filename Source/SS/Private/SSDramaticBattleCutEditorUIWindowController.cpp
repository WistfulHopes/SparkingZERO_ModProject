#include "SSDramaticBattleCutEditorUIWindowController.h"

ASSDramaticBattleCutEditorUIWindowController::ASSDramaticBattleCutEditorUIWindowController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UIWindowDisplayMax = 4;
    this->DecidedSelectItemIndex = -1;
    this->UIWindowItemFunctionBase = NULL;
    this->bIsMenuButtonSelectorLoop = true;
    this->MenuButtonSelectorVerticalFluctuation = 0;
    this->PreviewPanel = NULL;
    this->ActionNameAlreadySet = false;
    this->EditCharacterIndex = -1;
    this->EditSubtitleIndex = -1;
    this->bIsRemoveSubtitleIndex = false;
    this->bCanPlayBGM = false;
    this->MenuGeneralDialog = NULL;
    this->DialogDataType = ESSDramaticBattleCutEditorUIWindowDialogDataType::None;
    this->GuideManager = NULL;
    this->bRequestPreview = false;
}


