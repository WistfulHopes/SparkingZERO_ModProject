#include "ManaAudioTrackInfo.h"

FManaAudioTrackInfo::FManaAudioTrackInfo() {
    this->NumChannels = 0;
    this->SamplingRate = 0;
    this->TotalSamples = 0;
    this->bIsAmbisonics = false;
    this->Type = EManaSoundType::Adx;
}

