#include "SSBattleMode010DataAsset.h"

USSBattleMode010DataAsset::USSBattleMode010DataAsset() {
}

FName USSBattleMode010DataAsset::GetBattlePlayMapName() {
    return NAME_None;
}

FKoratBattlePlayMap USSBattleMode010DataAsset::GetBattleMap() const {
    return FKoratBattlePlayMap{};
}

FKoratBattleDirectingData USSBattleMode010DataAsset::GetBattleDirecting() {
    return FKoratBattleDirectingData{};
}


