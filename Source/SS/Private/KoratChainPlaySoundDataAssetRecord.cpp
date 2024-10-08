#include "KoratChainPlaySoundDataAssetRecord.h"

FKoratChainPlaySoundDataAssetRecord::FKoratChainPlaySoundDataAssetRecord() {
    this->SortId = 0;
    this->SoundCueID = 0;
    this->SheetType = EKoratSequenceSoundSheetType::General;
    this->SoundGroupType = ESSSoundGroupType::UI;
    this->bEnableSlowPlaySpeed = false;
    this->bDeleteOnFormChange = false;
    this->FadeOutDuration = 0.00f;
    this->Volume = 0.00f;
    this->IsPlay2D = false;
    this->CameraType = EKoratSequenceSoundCameraType::ALL;
    this->PatternBGMDataName = EKoratPatternBGMName::None;
    this->BGMType = EKoratSequenceSoundBGMType::BGM;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->IsCrossFade = false;
}

