#pragma once
#include "CoreMinimal.h"
#include "SSGauge.h"
#include "SSSPGaugeParts.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class USSSPGaugeParts : public USSGauge {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SPDamageGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SPGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SPMinusGaugeMaterial;
    
public:
    USSSPGaugeParts();

    UFUNCTION(BlueprintCallable)
    void SetSparkingGaugeValue(float InSparkingGaugeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeValue(float InGaugeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeMax(float InGaugeMax);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageGaugeValue(float InDamageGaugeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStun();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSingleOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSingleMax();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMinus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMax();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStun();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSparkingCharge();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSparkingActive();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSingleOn();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSingleMax();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNormal();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMax();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLimitBoost();
    
};

