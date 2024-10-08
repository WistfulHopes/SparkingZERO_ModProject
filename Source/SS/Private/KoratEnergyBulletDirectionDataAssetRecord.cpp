#include "KoratEnergyBulletDirectionDataAssetRecord.h"

FKoratEnergyBulletDirectionDataAssetRecord::FKoratEnergyBulletDirectionDataAssetRecord() {
    this->MainDirection = EKoratEnergyBulletDirection::EnemyDirection;
    this->MainDirectionUpDownOffset = 0.00f;
    this->MainDirectionLeftRightOffset = 0.00f;
    this->UpDirectionRange = 0.00f;
    this->DownDirectionRange = 0.00f;
    this->LeftDirectionRange = 0.00f;
    this->RightDirectionRange = 0.00f;
    this->RadiusDivision = 0;
    this->OutermostDivision = 0;
}

