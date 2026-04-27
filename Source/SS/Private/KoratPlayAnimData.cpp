#include "KoratPlayAnimData.h"

FKoratPlayAnimData::FKoratPlayAnimData() {
    this->AnimationIndex = 0;
    this->Montage = NULL;
    this->OriginalMontage = NULL;
    this->LevelSequence = NULL;
    this->bPlaying = false;
    this->bDisableAutoInterpolateBlendOut = false;
    this->NullMovementTotalXY = 0.00f;
    this->NullMovementTotalZ = 0.00f;
    this->bSetNullMovementTotal = false;
}

