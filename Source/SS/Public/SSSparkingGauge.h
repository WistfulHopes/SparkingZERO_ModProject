#pragma once
#include "CoreMinimal.h"
#include "SSTrackingGauge.h"
#include "SSSparkingGauge.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class USSSparkingGaugeOverEff;

UCLASS(Blueprintable, EditInlineNew)
class USSSparkingGauge : public USSTrackingGauge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageGaugeReduceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageDelaySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeTermThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DamageGaugeEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CurrentGaugeEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ChargeGaugeEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ChargeEffGaugeEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSparkingGaugeOverEff* ActiveGaugeBoarderEffectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSparkingGaugeOverEff* ChargeGaugeBoarderEffectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* GaugeBoarderEffectImage;
    
public:
    USSSparkingGauge();

    UFUNCTION(BlueprintCallable)
    void SetSparkingChargeValue(float InSparkingChargeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(float InMaxValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageAmount(float InDamageAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetChargingState(bool bInIsCharging);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargeZero();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingChargeTermChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingChargeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingChargePause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingChargeFinished(int32 InTermIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingChargeCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingActiveStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingActiveFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSparkingCharge();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSparkingActive();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNormal();
    
    UFUNCTION(BlueprintCallable)
    void CancelDamageAnimation();
    
    UFUNCTION(BlueprintCallable)
    void AnimateDamage();
    
    UFUNCTION(BlueprintCallable)
    void AddDamage(float InDamageAmount);
    
};

