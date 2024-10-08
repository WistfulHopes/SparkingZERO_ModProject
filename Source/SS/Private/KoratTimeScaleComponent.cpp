#include "KoratTimeScaleComponent.h"

UKoratTimeScaleComponent::UKoratTimeScaleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTimeScaleMode = false;
}

void UKoratTimeScaleComponent::OnUpdateTimeScale_Implementation(const float InTimeScale) {
}

void UKoratTimeScaleComponent::OnStartTimeScale_Implementation(const float InTimeScale) {
}

void UKoratTimeScaleComponent::OnEndTimeScale_Implementation(const float InTimeScale) {
}

bool UKoratTimeScaleComponent::IsTimeScaling() const {
    return false;
}

float UKoratTimeScaleComponent::GetEffectiveTimeDilation() const {
    return 0.0f;
}


