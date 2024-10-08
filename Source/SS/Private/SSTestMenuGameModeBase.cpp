#include "SSTestMenuGameModeBase.h"
#include "SSTestMenuPlayerController.h"

ASSTestMenuGameModeBase::ASSTestMenuGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ASSTestMenuPlayerController::StaticClass();
}


