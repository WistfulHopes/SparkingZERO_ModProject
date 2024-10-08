#include "SSTermsGameModeBase.h"
#include "SSTermsPlayerController.h"

ASSTermsGameModeBase::ASSTermsGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ASSTermsPlayerController::StaticClass();
}


