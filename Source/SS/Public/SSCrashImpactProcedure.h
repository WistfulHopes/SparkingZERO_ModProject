#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BattleImpactLevelSequenceParams.h"
#include "ECameraGlobalSlot.h"
#include "ECrashImpactAttackDirection.h"
#include "ECrashImpactCameraDistance.h"
#include "EKoratBranch.h"
#include "SSBattleImpactProcedure.h"
#include "SSCrashImpactProcedure.generated.h"

class ASSLevelSequenceActor;
class ULevelSequence;
class USSBattleImpactCharacterProxy;

UCLASS(Blueprintable)
class ASSCrashImpactProcedure : public ASSBattleImpactProcedure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName In1SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName In2SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NullBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* CrashImpactCameraLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUse2PCamera;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSBattleImpactCharacterProxy* LeadCharacter;
    
public:
    ASSCrashImpactProcedure(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateEffectTransform();
    
    UFUNCTION(BlueprintCallable)
    void StopCrashImpactCameraLevelSequence();
    
    UFUNCTION(BlueprintCallable)
    void SetupImpl();
    
    UFUNCTION(BlueprintCallable)
    void SetCrashImpactCameraSide(USSBattleImpactCharacterProxy* InCharacter, int32 InControllerId, const ECameraGlobalSlot InSlot, float InLerpTimeCam, float InLerpTimeLat);
    
    UFUNCTION(BlueprintCallable)
    void ResetSetCrashImpactCameraSide();
    
    UFUNCTION(BlueprintCallable)
    void RequestIntroductionPositionSetImpl(const FName MatchSocket, float TravelTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestGamePositionSetImpl(float TravelTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOffensiveFinishAction(USSBattleImpactCharacterProxy* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGuardAction(USSBattleImpactCharacterProxy* Character, const ECrashImpactAttackDirection Direction);
    
    UFUNCTION(BlueprintCallable)
    void PlayGameActionImpl();
    
    UFUNCTION(BlueprintCallable)
    void PlayFinishActionImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDefensiveFinishAction(USSBattleImpactCharacterProxy* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDamageAction(USSBattleImpactCharacterProxy* Character, const ECrashImpactAttackDirection Directiont);
    
    UFUNCTION(BlueprintCallable)
    void PlayCrashImpactCameraLevelSequenceByCharacter(USSBattleImpactCharacterProxy* InCharacter, const ECrashImpactAttackDirection InDirection, const ECrashImpactCameraDistance InDistance, const FBattleImpactLevelSequenceParams InParameter);
    
    UFUNCTION(BlueprintCallable)
    void PlayCrashImpactCameraLevelSequence(const ECrashImpactAttackDirection InDirection, const ECrashImpactCameraDistance InDistance, const FBattleImpactLevelSequenceParams InParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAttackAction(USSBattleImpactCharacterProxy* Character, const ECrashImpactAttackDirection Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 PickCameraIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECrashImpactAttackDirection PickAction() const;
    
    UFUNCTION(BlueprintCallable)
    void IsGameFinished(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsGameCamera2PSide(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    ECrashImpactCameraDistance GetRandomCameraDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetOffenseSocket() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBattleImpactCharacterProxy* GetOffenceCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetFinishYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetDefenseSocket() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBattleImpactCharacterProxy* GetDefenseCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECrashImpactAttackDirection GetCurrentPickupAttackDirection() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCrashImpactCameraLevelSequence(TSoftObjectPtr<ULevelSequence>& OutLevelSequence, const ECrashImpactAttackDirection InDirection, const ECrashImpactCameraDistance InDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcImpactLocation(const FName HeightSocket);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcGameBaseHeight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform CalcFinishPositionImpl(const float FinishYaw) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator CalcConfrontRotator(const FRotator& InRotate);
    
};

