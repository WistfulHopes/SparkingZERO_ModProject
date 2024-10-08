#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratFreeTimelinePlaybckSettings.h"
#include "KoratFreeTimelinePlayerBase.generated.h"

class IKoratFreeTimelineInstance;
class UKoratFreeTimelineInstance;

UCLASS(Blueprintable, EditInlineNew)
class UKoratFreeTimelinePlayerBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugFlag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelinePlaybckSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IKoratFreeTimelineInstance> InstanceData;
    
public:
    UKoratFreeTimelinePlayerBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    bool PlayByLabel(const FName InSeekLabel, const float InPlayRatio);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPause() const;
    
};

