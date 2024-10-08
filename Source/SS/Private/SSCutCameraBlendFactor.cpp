#include "SSCutCameraBlendFactor.h"

FSSCutCameraBlendFactor::FSSCutCameraBlendFactor() {
    this->bEnableLookAtTracking = false;
    this->ShakeAssetID = 0;
    this->ShakeForceType = EShakeForceType::None;
    this->PhysicalDisparityCamAddLengthTargetDistancePlayer = 0.00f;
    this->PhysicalDisparityCamAddLengthTargetDistanceEnemy = 0.00f;
}

