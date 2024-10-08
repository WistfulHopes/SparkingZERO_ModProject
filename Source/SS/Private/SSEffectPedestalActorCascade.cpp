#include "SSEffectPedestalActorCascade.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

ASSEffectPedestalActorCascade::ASSEffectPedestalActorCascade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Emitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Emitter"));
    const FProperty* p_ProductOffset_Parent = GetClass()->FindPropertyByName("ProductOffset");
    this->Emitter->SetupAttachment(p_ProductOffset_Parent->ContainerPtrToValuePtr<USceneComponent>(this));
}


