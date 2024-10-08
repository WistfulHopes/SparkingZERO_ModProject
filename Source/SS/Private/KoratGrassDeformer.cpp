#include "KoratGrassDeformer.h"

AKoratGrassDeformer::AKoratGrassDeformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeformCurve = NULL;
    this->CurrentTimer = 0.00f;
}

void AKoratGrassDeformer::UpdateGrassTransform() {
}


