#include "KoratMapDataAssetRecord.h"

FKoratMapDataAssetRecord::FKoratMapDataAssetRecord() {
    this->UnLockType = EKoratUnLockType::Non;
    this->SurfaceToAtbEnumDataAsset = NULL;
    this->InteractSpaceAreaDataAsset = NULL;
    this->bNeedChaosSetting = false;
    this->BlackOutMinRate = 0.00f;
    this->WindSoundCueID = 0;
    this->UnderWaterSoundCueID = 0;
    this->MinimumHeightOfWindAisac = 0.00f;
    this->MaxHeightOfWindAisac = 0.00f;
    this->bIsOutFieldRule = false;
    this->bIsUseSplitScreen = false;
    this->bIsUseInstallPlay = false;
    this->bDebugForceUseAutoBattle = false;
    this->bIsVictoryAppealPositionTheStartingPosition = false;
}

