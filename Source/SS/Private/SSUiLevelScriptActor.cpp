#include "SSUiLevelScriptActor.h"
#include "SSMenuCameraDirector.h"
#include "SSMenuSceneController.h"

ASSUiLevelScriptActor::ASSUiLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MenuControllerClass = ASSMenuSceneController::StaticClass();
    this->CutCameraDirectorClass = ASSMenuCameraDirector::StaticClass();
    this->MenuController = NULL;
    this->MenuCharacterManager = NULL;
}

ASSMenuSceneController* ASSUiLevelScriptActor::GetMenuController() {
    return NULL;
}


