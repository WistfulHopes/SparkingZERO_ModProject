#pragma once
#include "CoreMinimal.h"
#include "EKoratBlastSlotType.h"
#include "ESSBlastImpactActionDataType.h"
#include "ESSBlastImpactPositionType.h"
#include "KoratActionDataList.h"
#include "SSBattleImpactProcedure.h"
#include "SSBlastImpactGameRecord.h"
#include "SSBlastImpactLocationSet.h"
#include "SSBlastImpactProcedure.generated.h"

class USSBattleImpactCharacterProxy;
class USSBlastImpactDataAsset;

UCLASS(Blueprintable)
class ASSBlastImpactProcedure : public ASSBattleImpactProcedure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OtherSideDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlastEffector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBlastImpactLocationSet SafetyLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBlastImpactLocationSet DifferentLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenWidthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastImpactDataAsset* BlastImpactDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugThickness;
    
public:
    ASSBlastImpactProcedure(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLocation();
    
    UFUNCTION(BlueprintCallable)
    void UpdateEffectTransform();
    
    UFUNCTION(BlueprintCallable)
    void StopBlastImpactEffect();
    
    UFUNCTION(BlueprintCallable)
    void SetupImpl();
    
    UFUNCTION(BlueprintCallable)
    void SetSentNotificationDamage(bool bSent);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayEndDemo(bool InPlayEndDemo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SendDamageToLoser();
    
    UFUNCTION(BlueprintCallable)
    void RequestLoserBlastStop();
    
    UFUNCTION(BlueprintCallable)
    void RequestDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePostWarped(ESSBlastImpactPositionType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSentNotificationDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayEndDemo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCharacterHaveEvent(USSBattleImpactCharacterProxy* InCharacterProxy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastReset() const;
    
    UFUNCTION(BlueprintCallable)
    void GetBlastImpactCamera(FSSBlastImpactGameRecord& OutRecord);
    
public:
    UFUNCTION(BlueprintCallable)
    static int32 GetBattleImpactDebugBlastImpactNum2P(EKoratBlastSlotType& OutBlastSlot, FKoratActionDataList& OutAction);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBattleImpactDebugBlastImpactNum1P(EKoratBlastSlotType& OutBlastSlot, FKoratActionDataList& OutAction);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBattleImpactDebugAttackSide();
    
protected:
    UFUNCTION(BlueprintCallable)
    FKoratActionDataList GetActionDataFromBlastDataWithPlayerID(const ESSBlastImpactActionDataType InType, USSBattleImpactCharacterProxy* InCharacterProxy, int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    FKoratActionDataList GetActionDataFromBlastData(const ESSBlastImpactActionDataType InType, USSBattleImpactCharacterProxy* InCharacterProxy);
    
    UFUNCTION(BlueprintCallable)
    void EndWinnerBlast();
    
    UFUNCTION(BlueprintCallable)
    void EndLoserBlast();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckHaveEndEvent(USSBattleImpactCharacterProxy* InCharacterProxy);
    
};

