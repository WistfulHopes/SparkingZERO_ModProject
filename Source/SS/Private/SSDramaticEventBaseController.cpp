#include "SSDramaticEventBaseController.h"

ASSDramaticEventBaseController::ASSDramaticEventBaseController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeDulationEventScriptStart = 0.50f;
    this->FaderHUD = NULL;
    this->Script = NULL;
    this->CutCameraActor = NULL;
    this->DramaticBattleData = NULL;
    this->EventSceneDataAsset = NULL;
}


