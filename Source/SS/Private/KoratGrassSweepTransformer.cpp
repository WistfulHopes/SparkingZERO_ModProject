#include "KoratGrassSweepTransformer.h"

AKoratGrassSweepTransformer::AKoratGrassSweepTransformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrassSweep = NULL;
    this->Radius = 800.00f;
    this->Thickness = 200.00f;
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
    this->DeformTimer = 0.00f;
    this->UpdateInterval = 0.00f;
}

void AKoratGrassSweepTransformer::UpdateGrassTransform() {
}

void AKoratGrassSweepTransformer::UpdateGrassDeform() {
}

void AKoratGrassSweepTransformer::DeformInitialize() {
}

FRotator AKoratGrassSweepTransformer::CalcLookTiltRotator(const FVector TargetDirection, float RotationAngle) {
    return FRotator{};
}

void AKoratGrassSweepTransformer::AppendInteractGrasses() {
}


