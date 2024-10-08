#include "KoratNiagaraActor.h"
#include "Components/SceneComponent.h"

AKoratNiagaraActor::AKoratNiagaraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USceneComponent>(TEXT("Scene"))) {
    this->AttachRootComponent = (USceneComponent*)RootComponent;
}


