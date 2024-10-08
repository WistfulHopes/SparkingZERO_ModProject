#include "AtomWavePlayer.h"

UAtomWavePlayer::UAtomWavePlayer() {
    this->bIsUISound = false;
    this->SoundAtomCue = NULL;
    this->bLoop = false;
}

void UAtomWavePlayer::StopDelayed(float DelayTime) {
}

void UAtomWavePlayer::Stop() {
}

void UAtomWavePlayer::SetWave(USoundAtomCue* InCue) {
}

void UAtomWavePlayer::SetPaused(bool bPause) {
}

bool UAtomWavePlayer::SetLooping(bool Looping) {
    return false;
}

void UAtomWavePlayer::Play(float StartTime) {
}

bool UAtomWavePlayer::IsPlaying() const {
    return false;
}

bool UAtomWavePlayer::IsPaused() const {
    return false;
}

bool UAtomWavePlayer::IsLooping() const {
    return false;
}

bool UAtomWavePlayer::HasError() const {
    return false;
}

FAtomWaveInfo UAtomWavePlayer::GetWaveInfo() const {
    return FAtomWaveInfo{};
}

FTimespan UAtomWavePlayer::GetTime() const {
    return FTimespan{};
}

EAtomWavePlayState UAtomWavePlayer::GetPlayState() const {
    return EAtomWavePlayState::Playing;
}

USoundAtomCue* UAtomWavePlayer::GetCue() const {
    return NULL;
}

void UAtomWavePlayer::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) {
}


