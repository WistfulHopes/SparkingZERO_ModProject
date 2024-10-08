#include "SSTitleBaseController.h"

ASSTitleBaseController::ASSTitleBaseController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FaderHUD = NULL;
    this->CutCameraActor = NULL;
    this->TitleManager = NULL;
    this->TitleLogoFirstManager = NULL;
    this->AssistControlManager = NULL;
    this->OperationControlManager = NULL;
    this->TTR_Opt_BG = NULL;
    this->TTR_Opt_BG_Title = NULL;
    this->GuideWidget = NULL;
    this->MenuGeneralDialog = NULL;
    this->OptionController = NULL;
    this->BnidController = NULL;
    this->TitleTermsController = NULL;
    this->TitleInSequenceActor = NULL;
    this->TitleLoopSequenceActor = NULL;
    this->OptionListSoundManager = NULL;
    this->OptionListBrightnessManager = NULL;
    this->OptionListVideoManager = NULL;
    this->OptionListLanguageManager = NULL;
    this->OptionTipsManager = NULL;
    this->OptionHUDBG = NULL;
    this->Billboard = NULL;
    this->DownLoadContentsCheckProcess = NULL;
}


