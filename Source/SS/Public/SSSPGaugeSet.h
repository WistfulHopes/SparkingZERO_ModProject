#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSSPGaugeSet.generated.h"

class USSOldSPGauge;

UCLASS(Blueprintable, EditInlineNew)
class USSSPGaugeSet : public USSHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageGaugeReduceSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSOldSPGauge*> SPGaugeWidgets;
    
public:
    USSSPGaugeSet();

    UFUNCTION(BlueprintCallable)
    void SetStunRecoveryLimit(float InRecoveryLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetSPGaugeValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSparkingChargeValue(float InSparkingChargeValue);
    
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
    void CancelDamageAnimation();
    
    UFUNCTION(BlueprintCallable)
    void AnimateDamage();
    
    UFUNCTION(BlueprintCallable)
    void AddDamage(float InDamageAmount);
    
};

