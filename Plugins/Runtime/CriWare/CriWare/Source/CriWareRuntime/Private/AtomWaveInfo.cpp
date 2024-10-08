#include "AtomWaveInfo.h"

FAtomWaveInfo::FAtomWaveInfo() {
    this->Format = EAtomFormat::None;
    this->SamplingRate = 0;
    this->NumChannels = 0;
    this->NumSamples = 0;
    this->bIsStreamed = false;
}

