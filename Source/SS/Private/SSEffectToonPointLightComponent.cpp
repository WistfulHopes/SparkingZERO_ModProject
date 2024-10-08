#include "SSEffectToonPointLightComponent.h"

USSEffectToonPointLightComponent::USSEffectToonPointLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsDedicatedLightColorData = false;
    this->KoratSelectEffectColorComponent = NULL;
}


