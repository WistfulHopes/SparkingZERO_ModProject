#include "ManaPlayer.h"

UManaPlayer::UManaPlayer() {
    this->PlayOnOpen = false;
    this->Loop = false;
    this->MaxFrameDrop = EManaMaxFrameDrop::Disabled;
    this->ManaTexture = NULL;
    this->ManaMovie = NULL;
    this->Playlist = NULL;
    this->PlaylistIndex = 0;
    this->ManaComponent = NULL;
}

bool UManaPlayer::SetVolume(float Volume, EManaPlayerTrack TrackType) {
    return false;
}

bool UManaPlayer::SetTrackFormat(EManaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex) {
    return false;
}

void UManaPlayer::SetTimeSyncedSource(UAtomComponent* SyncedSource) {
}

void UManaPlayer::SetTexture(UManaTexture* InManaTexture) {
}

bool UManaPlayer::SetRate(float Rate) {
    return false;
}

bool UManaPlayer::SetLooping(bool Looping) {
    return false;
}

bool UManaPlayer::SelectTrack(EManaPlayerTrack TrackType, int32 TrackIndex) {
    return false;
}

bool UManaPlayer::Seek(FTimespan Time) {
    return false;
}

bool UManaPlayer::Rewind() {
    return false;
}

bool UManaPlayer::Reopen() {
    return false;
}

bool UManaPlayer::Previous() {
    return false;
}

void UManaPlayer::PlayAndSeek() {
}

bool UManaPlayer::Play() {
    return false;
}

bool UManaPlayer::Pause() {
    return false;
}

bool UManaPlayer::OpenSourceWithOptions(UManaSource* ManaSource, const FManaPlayerOptions& PlayerOptions) {
    return false;
}

bool UManaPlayer::OpenPlaylistIndex(UManaPlaylist* InPlaylist, int32 Index) {
    return false;
}

bool UManaPlayer::OpenPlaylist(UManaPlaylist* InPlaylist) {
    return false;
}

void UManaPlayer::OpenMovieSource(UManaMovie* InManaMovie) {
}

bool UManaPlayer::Next() {
    return false;
}

bool UManaPlayer::IsSeeking() const {
    return false;
}

bool UManaPlayer::IsReady() const {
    return false;
}

bool UManaPlayer::IsPreparing() const {
    return false;
}

bool UManaPlayer::IsPlaying() const {
    return false;
}

bool UManaPlayer::IsPaused() const {
    return false;
}

bool UManaPlayer::IsLooping() const {
    return false;
}

bool UManaPlayer::IsClosed() const {
    return false;
}

bool UManaPlayer::HasError() const {
    return false;
}

void UManaPlayer::HandleManaComponentSubtitleChanged(FText Subtitle) {
}

void UManaPlayer::HandleManaComponentStatusChanged(EManaComponentStatus Status, UManaComponent* InManaComponent) {
}

void UManaPlayer::HandleManaComponentSeekCompleted(int32 InFrameNumber, UManaComponent* InManaComponent) {
}

void UManaPlayer::HandleManaComponentPlayerDestroyed(UManaComponent* InManaComponent) {
}

void UManaPlayer::HandleManaComponentMovieChanged(UManaMovie* InManaMovie, UManaComponent* InManaComponent) {
}

void UManaPlayer::HandleManaComponentFrameOnTime(int32 InFrameNumber, UManaComponent* InManaComponent) {
}

void UManaPlayer::HandleManaComponentEventPoint(FManaEventPointInfo EventPointInfo) {
}

float UManaPlayer::GetVolume(EManaPlayerTrack TrackType) {
    return 0.0f;
}

FString UManaPlayer::GetTrackLanguage(EManaPlayerTrack TrackType, int32 TrackIndex) const {
    return TEXT("");
}

int32 UManaPlayer::GetTrackFormat(EManaPlayerTrack TrackType, int32 TrackIndex) const {
    return 0;
}

FText UManaPlayer::GetTrackDisplayName(EManaPlayerTrack TrackType, int32 TrackIndex) const {
    return FText::GetEmpty();
}

UAtomComponent* UManaPlayer::GetTimeSyncedSource() {
    return NULL;
}

FTimespan UManaPlayer::GetTime() const {
    return FTimespan{};
}

UManaTexture* UManaPlayer::GetTexture() const {
    return NULL;
}

EManaSubtitlesEncoding UManaPlayer::GetSubtitleTrackEncoding(int32 TrackIndex) {
    return EManaSubtitlesEncoding::Default;
}

EManaComponentStatus UManaPlayer::GetStatus() const {
    return EManaComponentStatus::Stop;
}

int32 UManaPlayer::GetSelectedTrack(EManaPlayerTrack TrackType) const {
    return 0;
}

float UManaPlayer::GetRate() const {
    return 0.0f;
}

int32 UManaPlayer::GetPlaylistIndex() const {
    return 0;
}

int32 UManaPlayer::GetNumTracks(EManaPlayerTrack TrackType) const {
    return 0;
}

int32 UManaPlayer::GetNumTrackFormats(EManaPlayerTrack TrackType, int32 TrackIndex) const {
    return 0;
}

FTimespan UManaPlayer::GetMovieTime() const {
    return FTimespan{};
}

UManaMovie* UManaPlayer::GetMovieSource() const {
    return NULL;
}

int32 UManaPlayer::GetMovieFrames() const {
    return 0;
}

int32 UManaPlayer::GetFrames() const {
    return 0;
}

FTimespan UManaPlayer::GetDuration() const {
    return FTimespan{};
}

bool UManaPlayer::DisableTrack(EManaPlayerTrack TrackType) {
    return false;
}

void UManaPlayer::Close() {
}

void UManaPlayer::BindOnFrameUpdated(const UManaPlayer::FOnFrameUpdatedDelegate& Event) {
}


