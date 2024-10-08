#include "SSCharacterBlastBulletComponent.h"

USSCharacterBlastBulletComponent::USSCharacterBlastBulletComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DominantEffectTopAsset = NULL;
    this->DominantEffectTopSpawnPointType = ESSEffectBlastImpactSpawnPointType::BeamTop;
    this->DominantEffectBottomAsset = NULL;
    this->DominantEffectBottomSpawnPointType = ESSEffectBlastImpactSpawnPointType::Socket_Aim00;
    this->DominantEffectSplineAsset = NULL;
    this->DominantEffectSplineSpawnPointType = ESSEffectBlastImpactSpawnPointType::Socket_Aim00;
    this->InferiorEffectTopAsset = NULL;
    this->InferiorEffectTopSpawnPointType = ESSEffectBlastImpactSpawnPointType::BeamTop;
    this->InferiorEffectBottomAsset = NULL;
    this->InferiorEffectBottomSpawnPointType = ESSEffectBlastImpactSpawnPointType::Socket_Aim00;
    this->InferiorEffectSplineAsset = NULL;
    this->InferiorEffectSplineSpawnPointType = ESSEffectBlastImpactSpawnPointType::Socket_Aim00;
    this->MoveAmountSec = 0.00f;
}

void USSCharacterBlastBulletComponent::SetStatus(const EEffectActorBulletStatus NewStatus) {
}

void USSCharacterBlastBulletComponent::SetDominance(const float InDominance) {
}

void USSCharacterBlastBulletComponent::SetBulletTransform(const FTransform& InNewTransform) {
}

void USSCharacterBlastBulletComponent::SetBulletLocation(const FVector& InNewLocation) {
}

void USSCharacterBlastBulletComponent::SetBeamBottomLocation(const FVector& InNewLocation) {
}

bool USSCharacterBlastBulletComponent::IsActiveBullet() {
    return false;
}

void USSCharacterBlastBulletComponent::BulletTraceCharacterWarp() {
}


