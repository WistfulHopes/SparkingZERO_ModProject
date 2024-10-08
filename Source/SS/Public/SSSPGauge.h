#pragma once
#include "CoreMinimal.h"
#include "SSTrackingGauge.h"
#include "SSSPGauge.generated.h"

class UImage;
class USSSPGaugeMinusEf;
class USSSPGaugeParts;

UCLASS(Blueprintable, EditInlineNew)
class USSSPGauge : public USSTrackingGauge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageGaugeReduceSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSSPGaugeParts*> SPGaugeWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSPGaugeMinusEf* MinusGaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* GaugeBoarderEffectImage;
    
public:
    USSSPGauge();

    UFUNCTION(BlueprintCallable)
    void SetStunRecoveryLimit(float InRecoveryLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetSPGaugeValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(float InMaxValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageAmount(float InDamageAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoRecoveryLimit(float InRecoveryLimit);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStun();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSparkingCharge();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSparkingActive();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNormal();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLimitBoost();
    
    UFUNCTION(BlueprintCallable)
    void CancelDamageAnimation();
    
    UFUNCTION(BlueprintCallable)
    void AnimateDamage();
    
    UFUNCTION(BlueprintCallable)
    void AddDamage(float InDamageAmount);
    
};

