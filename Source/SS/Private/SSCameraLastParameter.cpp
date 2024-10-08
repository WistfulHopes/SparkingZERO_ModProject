#include "SSCameraLastParameter.h"

FSSCameraLastParameter::FSSCameraLastParameter() {
    this->Baked = false;
    this->ReverseBaked = false;
    this->AttachParentActor = false;
    this->FovVertical = 0.00f;
    this->FovHorizon = 0.00f;
    this->PhysicalDisparityTargetWeightAddLength = 0.00f;
    this->PhysicalDisparityTargetWeightAddHeight = 0.00f;
    this->PhysicalDisparityTargetWeightAddWidth = 0.00f;
}

