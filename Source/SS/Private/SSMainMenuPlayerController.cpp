#include "SSMainMenuPlayerController.h"

ASSMainMenuPlayerController::ASSMainMenuPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->mainMenuManager = NULL;
    this->OptionManager = NULL;
    this->OptionListControlManager = NULL;
    this->OptionListSoundManager = NULL;
    this->OptionListNetworkManager = NULL;
    this->OptionListBrightnessManager = NULL;
    this->OptionListVideoManager = NULL;
    this->OptionListKeyControlManager = NULL;
}


