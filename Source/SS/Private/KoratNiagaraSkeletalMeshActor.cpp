#include "KoratNiagaraSkeletalMeshActor.h"
#include "Components/SceneComponent.h"

AKoratNiagaraSkeletalMeshActor::AKoratNiagaraSkeletalMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->SkeletalMeshComponent = NULL;
    this->AttachRootComponent = (USceneComponent*)RootComponent;
    this->bDestroyOnSystemFinish = false;
}

void AKoratNiagaraSkeletalMeshActor::SetNoneSettingValue(const FKoratEffectInteractNiagaraTypeDataList InNone) {
}

void AKoratNiagaraSkeletalMeshActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish) {
}

void AKoratNiagaraSkeletalMeshActor::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}

UNiagaraComponent* AKoratNiagaraSkeletalMeshActor::GetNiagaraComponent() const {
    return NULL;
}


