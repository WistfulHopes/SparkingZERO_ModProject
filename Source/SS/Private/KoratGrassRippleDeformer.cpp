#include "KoratGrassRippleDeformer.h"

AKoratGrassRippleDeformer::AKoratGrassRippleDeformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 800.00f;
    this->Thickness = 200.00f;
    this->RippleSpeed = 200.00f;
    this->RippleInterval = 0.50f;
    this->Waveform = NULL;
    this->Attenuation = NULL;
    this->SpeedScale = NULL;
    this->DeformCurve = NULL;
    this->RippleGenerateTimer = 0.00f;
    this->UpdateInterval = 0.00f;
    this->DeformTimer = 0.00f;
}

void AKoratGrassRippleDeformer::UpdateRippleRadius() {
}

void AKoratGrassRippleDeformer::UpdateGrassTransform() {
}


