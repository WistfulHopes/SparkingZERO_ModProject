#include "AtomComponentParams.h"

FAtomComponentParams::FAtomComponentParams() {
    this->DefaultVolume = 0.00f;
    this->DefaultPitchMultiplier = 0.00f;
    this->StartTime = 0.00f;
    this->bEnableMultipleSoundPlayback = false;
    this->bUsePlaylist = false;
    this->bIsMovable = false;
    this->bCanStraddleAudioVolume = false;
    this->bUseAudioVolume = false;
    this->bUseAreaSoundVolume = false;
    this->SoundObject = NULL;
    this->AttenuationSettings = NULL;
    this->DefaultBlockIndex = 0;
    this->LoopSetting = EAtomLoopSetting::Inherited;
}

