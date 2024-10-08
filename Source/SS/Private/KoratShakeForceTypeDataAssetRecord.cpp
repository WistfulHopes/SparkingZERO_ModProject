#include "KoratShakeForceTypeDataAssetRecord.h"

FKoratShakeForceTypeDataAssetRecord::FKoratShakeForceTypeDataAssetRecord() {
    this->ListenerType = EShakeListenerType::PlayerAndEnemy;
    this->NearRange = 0.00f;
    this->FarRange = 0.00f;
    this->ScaleMax = 0.00f;
    this->ForceShapeType = EShakeForceShapeType::TruncatedCone;
    this->ForceLerpType = EShakeForceLerpType::Liner;
    this->ForceLerpExp = 0.00f;
    this->SpreadSpeed = 0.00f;
}

