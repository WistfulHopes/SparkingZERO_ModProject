#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EAtomSpeakerID.h"
#include "EManaComponentStatus.h"
#include "EManaFrameAction.h"
#include "EManaMaxFrameDrop.h"
#include "EManaPlaybackTimer.h"
#include "EManaSubtitlesEncoding.h"
#include "ManaEventPointInfo.h"
#include "ManaComponent.generated.h"

class UManaComponent;
class UManaMovie;
class UManaPlaylist;
class UManaTexture;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UManaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTrackChanged, int32, TrackNumber, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubtitleChanged, FText, Subtitle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStatusChanged, EManaComponentStatus, Status, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSeekCompleted, int32, FrameNumber, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRequestData, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDestroyed, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMovieChanged, UManaMovie*, Movie, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFrameOnTime, int32, FrameNumber, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventPoint, FManaEventPointInfo, EventPointInfo);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* Movie;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventPoint OnEventPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubtitleChanged OnSubtitleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatusChanged OnStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieChanged OnMovieChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSeekCompleted OnSeekCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrackChanged OnTrackChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFrameOnTime OnFrameOnTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDestroyed OnPlayerDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestData OnRequestData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UManaPlaylist* Playlist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaylistIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlphaTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AudioTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubAudioTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtraAudioTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AudioCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubAudioCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExtraAudioCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitlesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubtitlesChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaSubtitlesEncoding SubtitlesEncoding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaFrameAction EndFrameAction;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaPlaybackTimer PlaybackTimer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaMaxFrameDrop MaxFrameDrop;
    
public:
    UManaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ToIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetTexture(UManaTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetSubVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetSubAudioTrack(int32 Track);
    
    UFUNCTION(BlueprintCallable)
    void SetSubAudioSendLevel(int32 Channel, EAtomSpeakerID SpeakerId, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetSubAudioCategory(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackTimer(EManaPlaybackTimer InPlaybackTimer);
    
    UFUNCTION(BlueprintCallable)
    void SetMovie(UManaMovie* InMovie);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxDropFrames(EManaMaxFrameDrop InMaxDropFrames);
    
    UFUNCTION(BlueprintCallable)
    void SetFile(const FString& MovieFilePath);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraAudioTrack(int32 Track);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraAudioCategory(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    void SetEndFrameAction(EManaFrameAction InFrameAction);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioTrack(int32 Track);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioCategory(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    void SetAlphaTrack(int32 Track);
    
    UFUNCTION(BlueprintCallable)
    void SeekToPosition(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable)
    void Seek(FTimespan Time);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSubAudioCategory();
    
    UFUNCTION(BlueprintCallable)
    void RemoveExtraAudioCategory();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAudioCategory();
    
    UFUNCTION(BlueprintCallable)
    bool Previous();
    
    UFUNCTION(BlueprintCallable)
    void PreparePlaylistIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Prepare();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    bool Next();
    
    UFUNCTION(BlueprintCallable)
    void Loop(bool bInLoop);
    
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
    float GetVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UManaTexture* GetTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSubVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EManaComponentStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UManaMovie* GetSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetMovieTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFrameNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExtraVolume() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSubtitles(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableSeamless(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSubtitlesEncoding(EManaSubtitlesEncoding Encoding);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSubtitlesChannel(int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceTime(FTimespan DeltaTime);
    
};

