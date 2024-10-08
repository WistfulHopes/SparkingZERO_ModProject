#include "SSTermsPlayerController.h"

ASSTermsPlayerController::ASSTermsPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->TermsManager = NULL;
    this->TermsSelect = NULL;
}


