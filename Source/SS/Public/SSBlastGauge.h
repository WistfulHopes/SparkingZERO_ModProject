#pragma once
#include "CoreMinimal.h"
#include "SSTrackingGauge.h"
#include "SSBlastGauge.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class USSSwitchUI;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSBlastGauge : public USSTrackingGauge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> NumberTextures;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BlastGaugeEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StockCountMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSwitchUI* GaugeBoarderEffectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* GaugeBoarderEffectImage;
    
public:
    USSBlastGauge();

    UFUNCTION(BlueprintCallable)
    void SetStockCount(const int32 InStockCount);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxStockCount(const int32 InMaxStockCount);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeValue(const float InGaugeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeMin(const float InGaugeMin);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeMax(const float InGaugeMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsumeStock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMaxWait();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMax();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeChargeOn();
    
};

