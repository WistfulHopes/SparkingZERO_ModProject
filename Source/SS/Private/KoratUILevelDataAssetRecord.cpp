#include "KoratUILevelDataAssetRecord.h"

FKoratUILevelDataAssetRecord::FKoratUILevelDataAssetRecord() {
    this->ResetMode = EKoratResetMode::None;
    this->bSpawnBattleCharacter = false;
    this->bSpawnMapCharacter = false;
    this->bSpawnChameleonForController = false;
    this->ContainerSubLevelVisibleMode = ESSContainerSubLevelVisibleMode::None;
    this->RestartMode = EKoratRestartMode::None;
    this->MapLoadType = ESSMapLoadType::None;
}

