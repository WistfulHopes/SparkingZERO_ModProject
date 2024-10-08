#include "SSEffectPedestalActorCascade.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

ASSEffectPedestalActorCascade::ASSEffectPedestalActorCascade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Emitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Emitter"));
    this->Emitter->SetupAttachment(ProductOffset);
}


