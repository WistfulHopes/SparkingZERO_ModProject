#include "SSEffectActorBase.h"
#include "KoratDefaultIdData.h"

ASSEffectActorBase::ASSEffectActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IdDataInstance = CreateDefaultSubobject<UKoratDefaultIdData>(TEXT("IdData"));
    this->HomingTargetActor = NULL;
    this->bAttachSocket = false;
}

void ASSEffectActorBase::KillMySelf() {
}


