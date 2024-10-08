#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBattleImpactType.h"
#include "EKoratBranch.h"
#include "ESSPowerImpactLevelSequenceType.h"
#include "SSBattleImpactProcedure.h"
#include "SSPowerImpactProcedure.generated.h"

class ASSLevelSequenceActor;
class ULevelSequence;
class USSPowerImpactDataAsset;

UCLASS(Blueprintable)
class ASSPowerImpactProcedure : public ASSBattleImpactProcedure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FowardSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NullBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftHandBaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftHandWristName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftHandOffsetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightHandBaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightHandWristName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightHandOffsetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSPowerImpactDataAsset* PowerImpactDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerImpactRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* PowerImpactLoopLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDisableIK;
    
public:
    ASSPowerImpactProcedure(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLocation();
    
    UFUNCTION(BlueprintCallable)
    void UpdateHandIK();
    
    UFUNCTION(BlueprintCallable)
    void UpdateEffectTransform();
    
    UFUNCTION(BlueprintCallable)
    void SetupImpl();
    
    UFUNCTION(BlueprintCallable)
    void RequestCharacterMove(float TravelTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePowerImpactRound(int32 InNextRound, ESSPowerImpactLevelSequenceType InSequenceType);
    
    UFUNCTION(BlueprintCallable)
    static void IsPowerImpactSequencePlayMode(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPowerImpactRoundCount(bool& OutEndedGame);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetLevelSequenceByType(const EBattleImpactType InBlastType, const ESSPowerImpactLevelSequenceType InType, TSoftObjectPtr<ULevelSequence>& OutLevelSequence);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelSequence(const ESSPowerImpactLevelSequenceType InType, TSoftObjectPtr<ULevelSequence>& OutLevelSequence);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableHandIK();
    
    UFUNCTION(BlueprintCallable)
    void DisableHandIK();
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawRequestCharacterMove();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform CalcImpactTransform();
    
};

