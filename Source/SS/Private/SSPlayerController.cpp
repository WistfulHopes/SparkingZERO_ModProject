#include "SSPlayerController.h"
#include "KoratCheatManager.h"

ASSPlayerController::ASSPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = UKoratCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}



