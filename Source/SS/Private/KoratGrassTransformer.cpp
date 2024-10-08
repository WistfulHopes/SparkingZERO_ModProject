#include "KoratGrassTransformer.h"

AKoratGrassTransformer::AKoratGrassTransformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Component = NULL;
    this->bRemoveGrassFreshlyDeformedWhenStopUpdateInstance = false;
}


void AKoratGrassTransformer::StopUpdateInstance(int32 InstanceIndex) {
}


void AKoratGrassTransformer::StartUpdate() {
}


