#include "KoratSearchParamDataAsset.h"

UKoratSearchParamDataAsset::UKoratSearchParamDataAsset() {
    this->SearchType = EKoratBattleSearchType::Aura;
    this->ViewingTargetLockOnSec = 0.20f;
    this->AutoSearchRadius = 2000.00f;
    this->AutoSearchLockOnSec = 1.50f;
    this->CameraSearchDistance = 20000.00f;
    this->AuraSearchDistance = 6000.00f;
    this->AuraSearchLockOnSec = 3.00f;
    this->AuraSearchScaleInSparkingMode = 1.00f;
    this->EasyFindingScaleByTarget = 1.00f;
    this->AuraLostSec = 20.00f;
    this->ViewingTargetLockOnWaterDepth = 200.00f;
    this->bNoAuraSearch = false;
    this->bNoAutoSearch = false;
}


