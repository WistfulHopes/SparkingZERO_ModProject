#include "KoratDramaticBattleAdditionalData.h"

FKoratDramaticBattleAdditionalData::FKoratDramaticBattleAdditionalData() {
    this->GoodCount = 0;
    this->PlayCount = 0;
    this->ClearCount = 0;
    this->ClearRate = 0.00f;
    this->FavoriteNum = 0;
    this->Rank = 0;
    this->ReplayNum = 0;
    this->bIsPosted = false;
    this->bIsGood = false;
    this->bIsFavorite = false;
    this->bIsCleard = false;
    this->bIsDlc = false;
    this->bIsHot = false;
    this->bIsEventBattle = false;
    this->bIsOfficialBattle = false;
    this->bIsSetListInfo = false;
    this->UnLockMode = EKoratUnLockMode::Lock;
    this->bIsDeleted = false;
    this->bIsReceivedBattleData = false;
}

