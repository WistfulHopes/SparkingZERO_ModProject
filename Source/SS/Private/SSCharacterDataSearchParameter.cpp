#include "SSCharacterDataSearchParameter.h"

FSSCharacterDataSearchParameter::FSSCharacterDataSearchParameter() {
    this->SearchType = EKoratBattleSearchType::None;
    this->ViewingTargetLockOnSec = 0.00f;
    this->AutoSearchRadius = 0.00f;
    this->AutoSearchLockOnSec = 0.00f;
    this->CameraSearchDistance = 0.00f;
    this->AuraSearchDistance = 0.00f;
    this->AuraSearchLockOnSec = 0.00f;
    this->AuraSearchScaleInSparkingMode = 0.00f;
    this->EasyFindingScaleByTarget = 0.00f;
    this->AuraLostSec = 0.00f;
    this->ViewingTargetLockOnWaterDepth = 0.00f;
    this->bNoAuraSearch = false;
    this->bNoAutoSearch = false;
    this->bIsValid = false;
}

