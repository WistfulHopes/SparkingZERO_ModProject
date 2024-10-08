#include "SSEffectPedestalActorNiagara.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

ASSEffectPedestalActorNiagara::ASSEffectPedestalActorNiagara(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Emitter = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Emitter"));
    const FProperty* p_ProductOffset_Parent = GetClass()->FindPropertyByName("ProductOffset");
    this->Emitter->SetupAttachment(p_ProductOffset_Parent->ContainerPtrToValuePtr<USceneComponent>(this));
}


