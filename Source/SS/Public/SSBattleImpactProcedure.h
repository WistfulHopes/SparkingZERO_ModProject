#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BattleImpactLevelSequenceParams.h"
#include "BattleImpactTickEventDelegate.h"
#include "BattleImpactTimerEventDelegate.h"
#include "EBattleImpactPhase.h"
#include "EBattleImpactTriggerEventOpt.h"
#include "EBattleImpactType.h"
#include "EKoratImpactTransformType.h"
#include "SSBattleImpactProcedure.generated.h"

class APlayerController;
class ASSLevelSequenceActor;
class UCanvas;
class ULevelSequence;
class UObject;
class USSBattleImpactCharacterProxy;
class USSBattleImpactParticleEffect;
class USSRandom;

UCLASS(Blueprintable)
class ASSBattleImpactProcedure : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* Random;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstFrameSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleImpactTickEvent OnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleImpactTimerEvent OnTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSBattleImpactCharacterProxy* MainCharacterProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSBattleImpactCharacterProxy* SubCharacterProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* PhaseLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* PhaseLoopLevelSequence;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSBattleImpactParticleEffect*> ParticleEffects;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> ParticleEffectLevelSequences;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaTimeOneTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestBattleImpactBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleImpactBreak;
    
public:
    ASSBattleImpactProcedure(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMatchTransform(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnTimer();
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnTick();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerEventMatchTransformByType(const UObject* WorldContextObject, float Time, EBattleImpactTriggerEventOpt opt, EBattleImpactType Type, bool isRunOnly);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerEventMatchTransform(const UObject* WorldContextObject, float Time, EBattleImpactTriggerEventOpt opt);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopLoopLevelSequence();
    
    UFUNCTION(BlueprintCallable)
    void StopLevelSequence();
    
    UFUNCTION(BlueprintCallable)
    void SetTimer(const float InTime);
    
    UFUNCTION(BlueprintCallable)
    EBattleImpactPhase SetNextPhaseTime(const float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetNextPhase(EBattleImpactPhase InNextPhase, float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelSequenceTransform(const FTransform& NewTransform);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetImpactTransform(EKoratImpactTransformType InType, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestBattleImpactBreakStatic(const UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnTriggerEventMatchTransform(float Time, EBattleImpactTriggerEventOpt Option);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerEventMatchTransform(float Time, EBattleImpactTriggerEventOpt Option, bool InWarpReturn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInterimBattle(USSBattleImpactCharacterProxy* InLeadCharacter, float InDominance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangedPhase(const EBattleImpactPhase InPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBattleImpactBreak();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotificationBattleImpactEventStatic(const UObject* WorldContextObject, const FString& InEventName, bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void LoopLevelSequence(UObject* WorldContextObject, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsNewWarpCtrl();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelSequencePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBattleImpactCharacterProxy* GetWinner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleImpactPhase GetPreviousPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBattleImpactPhase GetNextPhase(EBattleImpactPhase InCurrentPhase) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBattleImpactCharacterProxy* GetLoser() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBattleImpactType GetImpactType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleImpactPhase GetCurrentPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AActor* GetCameraRootActor() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetAimLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugDrawText(UCanvas* InCanvas, APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugDraw(float InDeltaT) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float CreateLevelSequence(const TSoftObjectPtr<ULevelSequence> InLevelSequence, const FBattleImpactLevelSequenceParams InParameter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInterimResult() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float CalculatMinusOneTick(float InTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void BattleImpactBreakOnGameStateBase(UObject* WorldContextObject);
    
};

