#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AtomWaveInfo.h"
#include "EAtomWavePlayState.h"
#include "OnWaveFinishedDelegate.h"
#include "OnWavePlaybackPercentDelegate.h"
#include "AtomWavePlayer.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable, EditInlineNew)
class CRIWARERUNTIME_API UAtomWavePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsUISound: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaveFinished OnWaveFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWavePlaybackPercent OnWavePlaybackPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundAtomCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtomWaveInfo WaveInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLoop: 1;
    
public:
    UAtomWavePlayer();

    UFUNCTION(BlueprintCallable)
    void StopDelayed(float DelayTime);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetWave(USoundAtomCue* InCue);
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    bool SetLooping(bool Looping);
    
    UFUNCTION(BlueprintCallable)
    void Play(float StartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasError() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAtomWaveInfo GetWaveInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAtomWavePlayState GetPlayState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundAtomCue* GetCue() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
    
};

