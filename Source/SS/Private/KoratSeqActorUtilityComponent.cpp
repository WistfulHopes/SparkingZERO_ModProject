#include "KoratSeqActorUtilityComponent.h"

UKoratSeqActorUtilityComponent::UKoratSeqActorUtilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoDestroyEffect = false;
    this->bAutoDestroyLocator = false;
}

void UKoratSeqActorUtilityComponent::PSCFinished(UParticleSystemComponent* FinishCompo) {
}

void UKoratSeqActorUtilityComponent::PSCDeactivated() {
}

void UKoratSeqActorUtilityComponent::ExecuteDeactivate() {
}

void UKoratSeqActorUtilityComponent::DelegateWhenSequenceFinish() {
}


