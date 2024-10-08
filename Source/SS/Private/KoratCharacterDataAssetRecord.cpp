#include "KoratCharacterDataAssetRecord.h"

FKoratCharacterDataAssetRecord::FKoratCharacterDataAssetRecord() {
    this->SortId = 0;
    this->UnLockType = EKoratUnLockType::Non;
    this->bIsInstallPlayable = false;
    this->bIsNpcChara = false;
    this->CharacterMLS = NULL;
    this->CharacterCombination = NULL;
    this->UIAssets = NULL;
    this->SparkingBuff = NULL;
    this->bAutoRefrectFlip = false;
    this->SoundDataAsset = NULL;
    this->ExplosionDrownOutableRadius = 0.00f;
}

