#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSOldSPGauge.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class URetainerBox;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSOldSPGauge : public USSHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayGaugeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayGaugeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SPGaugeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SparkingGaugeTexture;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SPDamageGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SPGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URetainerBox* SPSparkingGaugeRetainerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SPSparkingGaugeEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* SparkingGaugeImage;
    
public:
    USSOldSPGauge();

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
    
};

