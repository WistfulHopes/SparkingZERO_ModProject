#include "SSEffectSplineMeshTrailComponent.h"

USSEffectSplineMeshTrailComponent::USSEffectSplineMeshTrailComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialElementType = EKoratEffectSplineMeshTrailMaterialElementType::None;
}

void USSEffectSplineMeshTrailComponent::SetMaterialElementType(const EKoratEffectSplineMeshTrailMaterialElementType NewElementType) {
}


