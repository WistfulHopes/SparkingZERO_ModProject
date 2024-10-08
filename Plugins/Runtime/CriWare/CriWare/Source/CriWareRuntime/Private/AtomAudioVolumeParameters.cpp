#include "AtomAudioVolumeParameters.h"

FAtomAudioVolumeParameters::FAtomAudioVolumeParameters() {
    this->bUseSnapshotSettings = false;
    this->bUseBusSendSettings = false;
    this->bUseAisacControlSettings = false;
    this->MaxDistanceForEntranceVolume = 0.00f;
    this->bSwitchIntepolationInsideForBus = false;
    this->bSwitchIntepolationInsideForAisac = false;
}

