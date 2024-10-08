#include "KoratGrassRipple.h"

AKoratGrassRipple::AKoratGrassRipple(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 900.00f;
    this->BindingDuration = 0.25f;
    this->RippleSpeed = 200.00f;
    this->RippleInterval = 0.50f;
    this->Waveform = NULL;
    this->Attenuation = NULL;
    this->SpeedScale = NULL;
    this->DeformCurve = NULL;
    this->BindingBlend = 0.00f;
    this->TickDelta = 0.00f;
    this->BindingTimer = 0.00f;
}

void AKoratGrassRipple::UpdateGrassTransform() {
}


