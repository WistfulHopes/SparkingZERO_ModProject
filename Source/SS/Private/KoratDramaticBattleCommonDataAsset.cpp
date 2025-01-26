#include "KoratDramaticBattleCommonDataAsset.h"

UKoratDramaticBattleCommonDataAsset::UKoratDramaticBattleCommonDataAsset() {
    this->WLibDetailSearchConditionDifficultyDefault = ESSDramaticBattleSearchConditionDifficulty::Level20;
    this->WLibStatusStackHistoryMax = 60;
    this->WLibMyPostBattleListOverInfoSetting = ESSWLibBattleListOverInfoType::PlayCount;
    this->WLibFavoriteBattleListOverInfoSetting = ESSWLibBattleListOverInfoType::PlayCount;
    this->WLibUserBattleListOverInfoSetting = ESSWLibBattleListOverInfoType::PlayCount;
    this->WLibFollowBattleListOverInfoSetting = ESSWLibBattleListOverInfoType::PlayCount;
    this->WLibSeatchBattleListOverInfoSetting = ESSWLibBattleListOverInfoType::PlayCount;
    this->bIsUsedDebugWLibTestFollowUserNameAndIdMap = true;
}


