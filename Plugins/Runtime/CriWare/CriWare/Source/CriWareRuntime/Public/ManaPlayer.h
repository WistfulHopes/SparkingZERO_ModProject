#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EManaComponentStatus.h"
#include "EManaMaxFrameDrop.h"
#include "EManaPlayerTrack.h"
#include "EManaSubtitlesEncoding.h"
#include "ManaEventPointInfo.h"
#include "ManaPlayerOptions.h"
#include "OnManaPlayerEventPointDelegate.h"
#include "OnManaPlayerManaEventDelegate.h"
#include "OnManaPlayerMovieOpenFailedDelegate.h"
#include "OnManaPlayerMovieOpenedDelegate.h"
#include "OnManaPlayerSubtitleChangedDelegate.h"
#include "ManaPlayer.generated.h"

class UAtomComponent;
class UManaComponent;
class UManaMovie;
class UManaPlaylist;
class UManaSource;
class UManaTexture;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UManaPlayer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnFrameUpdatedDelegate, int32, FrameNumber);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayOnOpen;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Loop: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaMaxFrameDrop MaxFrameDrop;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnManaPlayerManaEvent OnEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnManaPlayerManaEvent OnMovieClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnManaPlayerMovieOpened OnMovieOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnManaPlayerMovieOpenFailed OnMovieOpenFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnManaPlayerManaEvent OnPlaybackResumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnManaPlayerManaEvent OnPlaybackSuspended;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnManaPlayerManaEvent OnSeekCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnManaPlayerManaEvent OnTracksChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnManaPlayerSubtitleChanged OnSubtitleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnManaPlayerEventPoint OnEventPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* ManaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaMovie* ManaMovie;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UManaPlaylist* Playlist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaylistIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UManaComponent* ManaComponent;
    
public:
    UManaPlayer();

    UFUNCTION(BlueprintCallable)
    bool SetVolume(float Volume, EManaPlayerTrack TrackType);
    
    UFUNCTION(BlueprintCallable)
    bool SetTrackFormat(EManaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeSyncedSource(UAtomComponent* SyncedSource);
    
    UFUNCTION(BlueprintCallable)
    void SetTexture(UManaTexture* InManaTexture);
    
    UFUNCTION(BlueprintCallable)
    bool SetRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool SetLooping(bool Looping);
    
    UFUNCTION(BlueprintCallable)
    bool SelectTrack(EManaPlayerTrack TrackType, int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable)
    bool Seek(FTimespan Time);
    
    UFUNCTION(BlueprintCallable)
    bool Rewind();
    
    UFUNCTION(BlueprintCallable)
    bool Reopen();
    
    UFUNCTION(BlueprintCallable)
    bool Previous();
    
    UFUNCTION(BlueprintCallable)
    void PlayAndSeek();
    
    UFUNCTION(BlueprintCallable)
    bool Play();
    
    UFUNCTION(BlueprintCallable)
    bool Pause();
    
    UFUNCTION(BlueprintCallable)
    bool OpenSourceWithOptions(UManaSource* ManaSource, const FManaPlayerOptions& PlayerOptions);
    
    UFUNCTION(BlueprintCallable)
    bool OpenPlaylistIndex(UManaPlaylist* InPlaylist, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool OpenPlaylist(UManaPlaylist* InPlaylist);
    
    UFUNCTION(BlueprintCallable)
    void OpenMovieSource(UManaMovie* InManaMovie);
    
    UFUNCTION(BlueprintCallable)
    bool Next();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSeeking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreparing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasError() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleManaComponentSubtitleChanged(FText Subtitle);
    
    UFUNCTION(BlueprintCallable)
    void HandleManaComponentStatusChanged(EManaComponentStatus Status, UManaComponent* InManaComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleManaComponentSeekCompleted(int32 InFrameNumber, UManaComponent* InManaComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleManaComponentPlayerDestroyed(UManaComponent* InManaComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleManaComponentMovieChanged(UManaMovie* InManaMovie, UManaComponent* InManaComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleManaComponentFrameOnTime(int32 InFrameNumber, UManaComponent* InManaComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleManaComponentEventPoint(FManaEventPointInfo EventPointInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    float GetVolume(EManaPlayerTrack TrackType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTrackLanguage(EManaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrackFormat(EManaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTrackDisplayName(EManaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable)
    UAtomComponent* GetTimeSyncedSource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UManaTexture* GetTexture() const;
    
    UFUNCTION(BlueprintCallable)
    EManaSubtitlesEncoding GetSubtitleTrackEncoding(int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EManaComponentStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedTrack(EManaPlayerTrack TrackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlaylistIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTracks(EManaPlayerTrack TrackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTrackFormats(EManaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetMovieTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UManaMovie* GetMovieSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMovieFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetDuration() const;
    
    UFUNCTION(BlueprintCallable)
    bool DisableTrack(EManaPlayerTrack TrackType);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void BindOnFrameUpdated(const UManaPlayer::FOnFrameUpdatedDelegate& Event);
    
};

