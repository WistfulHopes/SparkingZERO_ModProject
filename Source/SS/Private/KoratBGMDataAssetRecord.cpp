#include "KoratBGMDataAssetRecord.h"

FKoratBGMDataAssetRecord::FKoratBGMDataAssetRecord() {
    this->UnLockType = EKoratUnLockType::Non;
    this->SortId = 0;
    this->PlayStartTime = 0.00f;
    this->FadeInDuration = 0.00f;
    this->FadeOutDuration = 0.00f;
    this->Volume = 0.00f;
    this->bWaitStopPrevBGM = false;
    this->bIsPlayTop = false;
    this->bIsNotDramaticBattleBGM = false;
    this->bIsDramaticBattleAvailableBattleBGM = false;
    this->bIsDramaticBattleAvailableTitleBGM = false;
    this->bIsDramaticBattleAvailableEventBGM = false;
    this->UiIconType = ESSBGMOriginType::None;
    this->CopyRightsBGM = false;
    this->SettingBGMByDevelopmentSide = false;
    this->PackageType = ESSBGMPackageType::Release;
}

