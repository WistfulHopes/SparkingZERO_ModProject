#include "SSEffectActorParticles.h"
#include "Components/SphereComponent.h"

ASSEffectActorParticles::ASSEffectActorParticles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
    this->SphereRootCollider = (USphereComponent*)RootComponent;
    this->bEnableCollision = true;
    this->PsEffectTemplate = NULL;
    this->NsEffectTemplate = NULL;
    this->LifeSpan = 0.00f;
    this->bAutoDestroy = false;
    this->PsEffectComponent = NULL;
}

void ASSEffectActorParticles::AddEffect(UParticleSystem* InEffectTemplate) {
}


