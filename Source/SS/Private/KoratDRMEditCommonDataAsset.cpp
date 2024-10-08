#include "KoratDRMEditCommonDataAsset.h"

UKoratDRMEditCommonDataAsset::UKoratDRMEditCommonDataAsset() {
    this->SlowTimeDilation = 0.10f;
    this->SubtitleDisplayFrames = 330;
    this->TextBaseTextFilters.AddDefaulted(63);
    this->TextWordTextFilters.AddDefaulted(63);
    this->PictureFilters.AddDefaulted(63);
}


