#include "SSEffectActorInFrontOfTheCamera.h"

ASSEffectActorInFrontOfTheCamera::ASSEffectActorInFrontOfTheCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAttach1PCamera = false;
    this->PlayerController = NULL;
    this->ChameleonActor = NULL;
}

void ASSEffectActorInFrontOfTheCamera::SetAttach1PCamera(const bool Attach1P) {
}


