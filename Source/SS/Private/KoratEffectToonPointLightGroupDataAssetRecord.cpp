#include "KoratEffectToonPointLightGroupDataAssetRecord.h"

FKoratEffectToonPointLightGroupDataAssetRecord::FKoratEffectToonPointLightGroupDataAssetRecord() {
    this->GroupType = EKoratEffectToonPointLightGroupType::None;
    this->Priority = 0;
    this->TargetType = EKoratEffectToonPointLightTargetType::Everyone;
    this->DataType = EKoratEffectToonPointLightDataType::None;
}

