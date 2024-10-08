#include "SSMediaPlayer.h"
#include "MediaSoundComponent.h"

ASSMediaPlayer::ASSMediaPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMediaSoundComponent>(TEXT("MediaSoundComponent"));
    this->MediaSource = NULL;
    this->CrossfadeDuration = 0.00f;
    this->MediaSoundComponent = (UMediaSoundComponent*)RootComponent;
    this->bInitialized = true;
    this->MediaPlayers.AddDefaulted(2);
    this->MeshComponent = NULL;
    this->MaterialInterface = NULL;
    this->DynamicMaterial = NULL;
    this->Image = NULL;
    this->MediaTextures.AddDefaulted(2);
    this->MediaPlayerNo = 0;
    this->bPlayRequest = false;
    this->TextureLerpAlpha = 0.00f;
    this->CrossFadeStartAlpha = 0.00f;
    this->CrossFadeEndAlpha = 0.00f;
    this->CrossFadeCurrentTime = 0.00f;
}

ASSMediaPlayer* ASSMediaPlayer::Spawn() {
    return NULL;
}

void ASSMediaPlayer::Setup(const FSSMediaPlayerSetupParameter& InParameter) {
}

bool ASSMediaPlayer::Resume() {
    return false;
}

bool ASSMediaPlayer::Play(bool bInPlayNextTick) {
    return false;
}

bool ASSMediaPlayer::Pause() {
    return false;
}

bool ASSMediaPlayer::Open(UMediaSource* InMediaSource, bool bInPlayOnOpen, bool bInLoop, float InCrossFadeDuration) {
    return false;
}

bool ASSMediaPlayer::IsReady() const {
    return false;
}

bool ASSMediaPlayer::IsPlaying() const {
    return false;
}

bool ASSMediaPlayer::IsPaused() const {
    return false;
}

bool ASSMediaPlayer::IsCrossFading() const {
    return false;
}

bool ASSMediaPlayer::IsClosed() const {
    return false;
}

void ASSMediaPlayer::FinishCrossFade() {
}

bool ASSMediaPlayer::Destroy(ASSMediaPlayer* InMediaPlayer) {
    return false;
}

void ASSMediaPlayer::Close() {
}


