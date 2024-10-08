#include "SSDramaticDataManager.h"

USSDramaticDataManager::USSDramaticDataManager() {
    this->DramaticNowEditData = NULL;
    this->NowMode = EKoratMenuDramaticMode::None;
    this->BattleEvent = NULL;
    this->NowEditBattleIdNum = 0;
    this->BeforTransitionEditStep = EKoratDramaticEditBeforTransition::None;
    this->TempEventSceneDataAsset = NULL;
    this->NowEditState = EKoratDramaticEditState::Normal;
    this->ListCategoryBeforeBattle = EKortaDramticBattleCategory::None;
    this->bIsNowEditBattleTestPlayCleared = false;
    this->NowCheckCutThumbnailIdx = 0;
    this->NowEditSceneCutNum = 0;
    this->NowEditGuestCharaIndex = 0;
    this->defaultBattleDataRecord = NULL;
    this->CutUpdateState = EKoratDramaticEditCutUpdateState::None;
    this->bIsChangeCutData = false;
    this->NowUpdateEditBattleIndex = 0;
    this->bIsCopyWlibBattle = false;
}

USSBattleReplaySaveGame* USSDramaticDataManager::GetNowPlayingDramaticReplayData() const {
    return NULL;
}

USSDramaticBattleDataRecordAsset* USSDramaticDataManager::GetNowPlayingDramaticBattleData() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> USSDramaticDataManager::GetDramaticBattleTitleImagePtr(USSDramaticBattleDataRecordAsset* InBattleData) const {
    return NULL;
}


