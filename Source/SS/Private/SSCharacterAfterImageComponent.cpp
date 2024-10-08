#include "SSCharacterAfterImageComponent.h"

USSCharacterAfterImageComponent::USSCharacterAfterImageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bExecute = false;
    this->frameCount = 0;
    this->SpawnClassType = NULL;
}

void USSCharacterAfterImageComponent::SpawnAfterImageMesh() {
}

void USSCharacterAfterImageComponent::OneShot_Implementation() {
}

void USSCharacterAfterImageComponent::IsSpawnAfterImage(bool& bResult) {
}

void USSCharacterAfterImageComponent::CalculationDelayTime(float& DelayTime) {
}


