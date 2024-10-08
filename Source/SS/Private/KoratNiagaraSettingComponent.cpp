#include "KoratNiagaraSettingComponent.h"

UKoratNiagaraSettingComponent::UKoratNiagaraSettingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNeedUpdate = false;
    this->CacheComponent = NULL;
}

void UKoratNiagaraSettingComponent::OnNiagaraSystemFinished(UNiagaraComponent* InComponent) {
}

void UKoratNiagaraSettingComponent::OnComponentActivated(UActorComponent* InComponent, const bool bInReset) {
}

void UKoratNiagaraSettingComponent::ApplySettings(const bool bInForceApply) {
}


