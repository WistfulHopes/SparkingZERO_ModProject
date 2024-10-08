#include "SSCriMediaPlayer.h"

ASSCriMediaPlayer::ASSCriMediaPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrossfadeDuration = 0.00f;
    this->SESoundCueID = -1;
    this->VoiceSoundCueID = -1;
    this->ManaTextures.AddDefaulted(2);
    this->DynamicManaMaterial = NULL;
    this->UserWidget = NULL;
    this->Image = NULL;
    this->MeshComponent = NULL;
    this->MaterialInterface = NULL;
    this->ManaPlayerNo = 0;
    this->TextureLerpAlpha = 0.00f;
    this->CrossFadeStartAlpha = 0.00f;
    this->CrossFadeEndAlpha = 0.00f;
    this->CrossFadeCurrentTime = 0.00f;
    this->IsStopBGM = false;
    this->MovieSoundCategory = ESSMovieSoundCategory::None;
    this->bInitialized = true;
    this->ManaComponents.AddDefaulted(2);
    this->bPlayRequest = false;
    this->IsAddToViewport = false;
    this->SoundPreviosTime = 0.00f;
    this->IsPause = false;
    this->MovieSubtitlePlayer = NULL;
}

ASSCriMediaPlayer* ASSCriMediaPlayer::Spawn() {
    return NULL;
}

void ASSCriMediaPlayer::Setup(FSSCriMediaPlayerSetupParameter& InParameter, bool IsPlayFullScreen) {
}

bool ASSCriMediaPlayer::Resume() {
    return false;
}

bool ASSCriMediaPlayer::Play(bool bInPlayNextTick) {
    return false;
}

bool ASSCriMediaPlayer::Pause() {
    return false;
}

bool ASSCriMediaPlayer::Open(TSoftObjectPtr<UManaSource> InManaSource, bool bInPlayOnOpen, bool bInLoop, float InCrossFadeDuration) {
    return false;
}

bool ASSCriMediaPlayer::IsReady() const {
    return false;
}

bool ASSCriMediaPlayer::IsPlaying() const {
    return false;
}

bool ASSCriMediaPlayer::IsPaused() const {
    return false;
}

bool ASSCriMediaPlayer::IsCrossFading() const {
    return false;
}

bool ASSCriMediaPlayer::IsClosed() const {
    return false;
}

void ASSCriMediaPlayer::FinishCrossFade() {
}

bool ASSCriMediaPlayer::Destroy(ASSCriMediaPlayer* InMediaPlayer) {
    return false;
}

void ASSCriMediaPlayer::Close() {
}


