#include "SSEffectPedestalActorNiagara.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

ASSEffectPedestalActorNiagara::ASSEffectPedestalActorNiagara(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Emitter = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Emitter"));
    this->Emitter->SetupAttachment(ProductOffset);
}


