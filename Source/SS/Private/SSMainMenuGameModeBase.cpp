#include "SSMainMenuGameModeBase.h"
#include "SSMainMenuPlayerController.h"

ASSMainMenuGameModeBase::ASSMainMenuGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ASSMainMenuPlayerController::StaticClass();
}


