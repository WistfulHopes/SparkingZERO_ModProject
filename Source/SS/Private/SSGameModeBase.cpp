#include "SSGameModeBase.h"
#include "SSPlayerController.h"
#include "SSUiFaderHUD.h"

ASSGameModeBase::ASSGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ASSPlayerController::StaticClass();
    this->HUDClass = ASSUiFaderHUD::StaticClass();
}


