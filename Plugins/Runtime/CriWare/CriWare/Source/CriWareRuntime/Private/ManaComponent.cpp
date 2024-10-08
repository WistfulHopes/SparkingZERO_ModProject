#include "ManaComponent.h"

UManaComponent::UManaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Movie = NULL;
    this->Playlist = NULL;
    this->PlaylistIndex = 0;
    this->bLoop = false;
    this->AlphaTrack = 0;
    this->AudioTrack = 0;
    this->SubAudioTrack = -1;
    this->ExtraAudioTrack = -1;
    this->bSubtitlesEnabled = false;
    this->SubtitlesChannel = 0;
    this->SubtitlesEncoding = EManaSubtitlesEncoding::Default;
    this->EndFrameAction = EManaFrameAction::Default;
    this->PlaybackTimer = EManaPlaybackTimer::Default;
    this->MaxFrameDrop = EManaMaxFrameDrop::Two;
}

bool UManaComponent::ToIndex(int32 Index) {
    return false;
}

void UManaComponent::Stop() {
}

void UManaComponent::SetVolume(float Volume) {
}

void UManaComponent::SetTexture(UManaTexture* Texture) {
}

void UManaComponent::SetSubVolume(float Volume) {
}

void UManaComponent::SetSubAudioTrack(int32 Track) {
}

void UManaComponent::SetSubAudioSendLevel(int32 Channel, EAtomSpeakerID SpeakerId, float Volume) {
}

void UManaComponent::SetSubAudioCategory(const FString& CategoryName) {
}

void UManaComponent::SetPlaybackTimer(EManaPlaybackTimer InPlaybackTimer) {
}

void UManaComponent::SetMovie(UManaMovie* InMovie) {
}

void UManaComponent::SetMaxDropFrames(EManaMaxFrameDrop InMaxDropFrames) {
}

void UManaComponent::SetFile(const FString& MovieFilePath) {
}

void UManaComponent::SetExtraVolume(float Volume) {
}

void UManaComponent::SetExtraAudioTrack(int32 Track) {
}

void UManaComponent::SetExtraAudioCategory(const FString& CategoryName) {
}

void UManaComponent::SetEndFrameAction(EManaFrameAction InFrameAction) {
}

void UManaComponent::SetAudioTrack(int32 Track) {
}

void UManaComponent::SetAudioCategory(const FString& CategoryName) {
}

void UManaComponent::SetAlphaTrack(int32 Track) {
}

void UManaComponent::SeekToPosition(int32 FrameNumber) {
}

void UManaComponent::Seek(FTimespan Time) {
}

void UManaComponent::RemoveSubAudioCategory() {
}

void UManaComponent::RemoveExtraAudioCategory() {
}

void UManaComponent::RemoveAudioCategory() {
}

bool UManaComponent::Previous() {
    return false;
}

void UManaComponent::PreparePlaylistIndex(int32 Index) {
}

void UManaComponent::Prepare() {
}

void UManaComponent::Play() {
}

void UManaComponent::Pause(bool bPause) {
}

bool UManaComponent::Next() {
    return false;
}

void UManaComponent::Loop(bool bInLoop) {
}

bool UManaComponent::IsReady() const {
    return false;
}

bool UManaComponent::IsPreparing() const {
    return false;
}

bool UManaComponent::IsPlaying() const {
    return false;
}

bool UManaComponent::IsPaused() const {
    return false;
}

bool UManaComponent::IsLooping() const {
    return false;
}

float UManaComponent::GetVolume() const {
    return 0.0f;
}

FTimespan UManaComponent::GetTime() const {
    return FTimespan{};
}

UManaTexture* UManaComponent::GetTexture() const {
    return NULL;
}

float UManaComponent::GetSubVolume() const {
    return 0.0f;
}

EManaComponentStatus UManaComponent::GetStatus() const {
    return EManaComponentStatus::Stop;
}

UManaMovie* UManaComponent::GetSource() const {
    return NULL;
}

int32 UManaComponent::GetPosition() const {
    return 0;
}

FTimespan UManaComponent::GetMovieTime() const {
    return FTimespan{};
}

int32 UManaComponent::GetFrameNumber() const {
    return 0;
}

float UManaComponent::GetExtraVolume() const {
    return 0.0f;
}

void UManaComponent::EnableSubtitles(bool bEnable) {
}

void UManaComponent::EnableSeamless(bool bEnable) {
}

void UManaComponent::ChangeSubtitlesEncoding(EManaSubtitlesEncoding Encoding) {
}

void UManaComponent::ChangeSubtitlesChannel(int32 Channel) {
}

void UManaComponent::AdvanceTime(FTimespan DeltaTime) {
}


