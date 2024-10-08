#pragma once
#include "CoreMinimal.h"
#include "ESSPowerGaugeResult.h"
#include "SSImpactBaseUi.h"
#include "SSPowerGaugeSet.generated.h"

class USSPowerGauge;
class USSSwitchUI;

UCLASS(Blueprintable, EditInlineNew)
class USSPowerGaugeSet : public USSImpactBaseUi {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPowerGauge* PowerGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSwitchUI* HoldButton;
    
public:
    USSPowerGaugeSet();

    UFUNCTION(BlueprintCallable)
    void SetTheoreticalValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTheoreticalScale(float InScale);
    
    UFUNCTION(BlueprintCallable)
    void SetResult(ESSPowerGaugeResult InResult);
    
    UFUNCTION(BlueprintCallable)
    void SetPenalty(bool bIsPenalty);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldInput(bool bInHold);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeValue(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDefaultMax(float InMax) const;
    
    UFUNCTION(BlueprintCallable)
    void SetBoostScale(float InScale);
    
    UFUNCTION(BlueprintCallable)
    void JudgeStart();
    
};

