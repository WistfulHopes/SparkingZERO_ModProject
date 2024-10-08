#include "SSBulletLocator.h"

ASSBulletLocator::ASSBulletLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideScaleType = ESSBulletBeamViewOverrideScaleType::None;
    this->pointType = ESSBulletLocatorPointType::Top;
}

void ASSBulletLocator::SetExecuteActor(AActor* InActor) {
}


