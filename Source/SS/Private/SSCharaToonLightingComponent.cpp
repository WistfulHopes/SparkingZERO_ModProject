#include "SSCharaToonLightingComponent.h"

USSCharaToonLightingComponent::USSCharaToonLightingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugPointLightLocation = false;
}




void USSCharaToonLightingComponent::ExecApplyShading(bool bConstruction, UMeshComponent* InMesh) {
}


