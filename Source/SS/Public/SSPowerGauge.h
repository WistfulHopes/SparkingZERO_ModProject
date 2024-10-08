#pragma once
#include "CoreMinimal.h"
#include "ESSPowerGaugeResult.h"
#include "SSHUDWidget.h"
#include "SSPowerGauge.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class USSPowerGauge : public USSHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeWarningWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TheoreticalPowerMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GaugeScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPowerGaugeResult ImpactResult;
    
public:
    USSPowerGauge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPowerImpactResult();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInputWait();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeGaugeWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeGaugeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeGaugeDanger();
    
};

