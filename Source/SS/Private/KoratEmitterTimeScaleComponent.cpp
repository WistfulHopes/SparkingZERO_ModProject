#include "KoratEmitterTimeScaleComponent.h"

UKoratEmitterTimeScaleComponent::UKoratEmitterTimeScaleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEmitterStopTick = true;
    this->bDelayEmitterStopTick = false;
    this->TargetParticleSystem = NULL;
    this->TargetNiagaraSystem = NULL;
}


