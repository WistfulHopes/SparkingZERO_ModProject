#include "KoratRequestAnimData.h"

FKoratRequestAnimData::FKoratRequestAnimData() {
    this->Montage = NULL;
    this->LevelSequence = NULL;
    this->ReplaceAnimationIndex = 0;
    this->ActionCameraAsset = NULL;
    this->AnimType = EKoratAnimType::None;
    this->PlayableAnimType = EKoratPlayableAnimType::All;
    this->bSoonStart = false;
    this->bTrun = false;
    this->bCancelableOnly = false;
    this->bDisableAutoInterpolateBlendOut = false;
}

