#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomBusSampler.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomBusSampler : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRecordingStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRecordingFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecordingStarted OnRecordingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecordingFinished OnRecordingFinished;
    
    UAtomBusSampler();

    UFUNCTION(BlueprintCallable)
    void StopRecordedSoundWithoutReleaseTime();
    
    UFUNCTION(BlueprintCallable)
    void StopRecordedSound();
    
    UFUNCTION(BlueprintCallable)
    void StartRecording(float InExpectedDuration, int32 InAsrRack, const FString& InBusName, bool BusOutput);
    
    UFUNCTION(BlueprintCallable)
    void ResumeRecording();
    
    UFUNCTION(BlueprintCallable)
    void PlayRecordedSound(int32 Milliseconds);
    
    UFUNCTION(BlueprintCallable)
    void PauseRecording();
    
    UFUNCTION(BlueprintCallable)
    void PauseRecordedSound(bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecording() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingRecordedSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPausedRecordedSound() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishRecording();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRecord() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayRecordedSound() const;
    
};

