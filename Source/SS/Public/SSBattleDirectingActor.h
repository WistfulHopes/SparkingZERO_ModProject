#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EKoratBattleDirectingActivate.h"
#include "EKoratKnockDownBattleDirectingState.h"
#include "KoratBattleDirectingActionSurveillanceInfo.h"
#include "KoratBattleDirectingOneShotDeadlyInfo.h"
#include "SSBattleDirectingParam.h"
#include "SSBattleDirectingActor.generated.h"

class AController;
class ASSCharacter;

UCLASS(Blueprintable)
class ASSBattleDirectingActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleDirectingActionSurveillanceInfo> BattleDirectingActionSurveillanceInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleDirectingOneShotDeadlyInfo> BattleDirectingOneShotDeadlyInfoArray;
    
public:
    ASSBattleDirectingActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SetCounterDebugDisplayState(bool InIsVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTick(const float InDeltaTime, const bool InPause);
    
    UFUNCTION(BlueprintCallable)
    void OnPureBattleStartNoClear();
    
    UFUNCTION(BlueprintCallable)
    void OnCreateController(AController* InCreateController);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterChange(const int32 InPlaySide);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleSettle();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyTaketurnFinished(float InRequiredMinimum);
    
    UFUNCTION(BlueprintCallable)
    void NotifyBattleDirectingActivateEnd(EKoratBattleDirectingActivate InActivateType, int32 InOptionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKnockDownDirectingWait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKnockDownDirectingRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKnockDownDirectingNone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCounterDebugDisplayState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConcludedDirectingRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleConcluded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSBattleDirectingParam GetDirectingParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratKnockDownBattleDirectingState GetBattleConcludedDirectingState() const;
    
    UFUNCTION(BlueprintCallable)
    void AttachOneShotDeadlyAttachWarp(ASSCharacter* InTargetCharacter, FVector& InPositionResult, FRotator& InRotateResult);
    
    UFUNCTION(BlueprintCallable)
    void AbortByBattleConcluded();
    
};

