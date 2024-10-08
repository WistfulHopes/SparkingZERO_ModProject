#include "SSTrailMaterialSetupComponent.h"

USSTrailMaterialSetupComponent::USSTrailMaterialSetupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExecuteActor = NULL;
    this->UseType = SSEffectHighSpeedMoveJointIndex::NECK;
    this->MaterialIndex = 0;
}

void USSTrailMaterialSetupComponent::SetExecuteActorDelegate() {
}

void USSTrailMaterialSetupComponent::SetExecuteActor(ASSCharacter* InActor) {
}

void USSTrailMaterialSetupComponent::OnParticleSystemComponentActivated(UActorComponent* Component, bool bReset) {
}


