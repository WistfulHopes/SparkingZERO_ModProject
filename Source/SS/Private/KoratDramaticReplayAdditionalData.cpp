#include "KoratDramaticReplayAdditionalData.h"

FKoratDramaticReplayAdditionalData::FKoratDramaticReplayAdditionalData() {
    this->GoodCount = 0;
    this->FavoriteNum = 0;
    this->WinLose = ESSReplayDataUWinLose::None;
    this->bIsGood = false;
    this->bIsFavorite = false;
    this->bIsPublic = false;
    this->bIsSetListInfo = false;
    this->bIsDeleted = false;
    this->bIsReceivedBattleData = false;
    this->bIsReceivedReplayData = false;
}

