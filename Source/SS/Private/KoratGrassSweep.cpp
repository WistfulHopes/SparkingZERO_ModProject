#include "KoratGrassSweep.h"

AKoratGrassSweep::AKoratGrassSweep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 800.00f;
    this->Thickness = 100.00f;
    this->RotationLimit = 85.00f;
    this->BindingDuration = 0.06f;
    this->RippleSpeed = 200.00f;
    this->RippleInterval = 0.50f;
    this->Waveform = NULL;
    this->Attenuation = NULL;
    this->SpeedScale = NULL;
    this->FormingDirection = NULL;
    this->DeformCurve = NULL;
    this->RippleGenerateTimer = 0.00f;
    this->UpdateInterval = 0.00f;
}


