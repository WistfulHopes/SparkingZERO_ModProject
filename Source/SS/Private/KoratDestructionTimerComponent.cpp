#include "KoratDestructionTimerComponent.h"

UKoratDestructionTimerComponent::UKoratDestructionTimerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DelayIndex = -1;
}

void UKoratDestructionTimerComponent::OnTimerEventCallback() {
}


