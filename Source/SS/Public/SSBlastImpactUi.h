#pragma once
#include "CoreMinimal.h"
#include "ESSBlastImpactCount.h"
#include "ESSBlastImpactUiResult.h"
#include "SSImpactBaseUi.h"
#include "SSBlastImpactUi.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class USSBlastImpactUi : public USSImpactBaseUi {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ChargeGaugeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GaugeScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugProgressSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ZoomPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ZoomScale;
    
public:
    USSBlastImpactUi();

    UFUNCTION(BlueprintCallable)
    void SetTheoreticalValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTheoreticalScale(float InScale);
    
    UFUNCTION(BlueprintCallable)
    bool SetResult(ESSBlastImpactUiResult InResult);
    
    UFUNCTION(BlueprintCallable)
    void SetRestTime(ESSBlastImpactCount InCount);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultMax(float InMax);
    
    UFUNCTION(BlueprintCallable)
    void SetBoostScale(float InScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResultBlastImpact(ESSBlastImpactUiResult InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideStartBlastImpact(ESSBlastImpactUiResult InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeJudgeStateBlastImpact(bool bInJudgeStart);
    
    UFUNCTION(BlueprintCallable)
    void JudgeStart();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugSetJudgeStart();
    
    UFUNCTION(BlueprintCallable)
    void DebugResult(ESSBlastImpactUiResult InResult);
    
    UFUNCTION(BlueprintCallable)
    void DebugChargePower();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChargePowerStart();
    
};

