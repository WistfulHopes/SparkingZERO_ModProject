#include "KoratDramaticWLibStatus.h"

FKoratDramaticWLibStatus::FKoratDramaticWLibStatus() {
    this->IdSearchBattleId = 0;
    this->BattleSort = ESSWLibBattleSortType::None;
    this->ReplaySort = ESSWLibReplaySortType::None;
    this->ReplayFilter = ESSWLibReplayFilterType::None;
    this->TopCategory = ESSWLibHomeCategoryButtonType::None;
    this->PeriodCategory = ESSWLibHomePeriodCategoryButtonType::None;
    this->SideButtonType = ESSWLibSideButtonType::None;
    this->BattleReplayListBattleId = 0;
    this->BattleDetailStartBattleId = 0;
    this->InitialFocusBattleId = 0;
    this->bIsValid = false;
}

