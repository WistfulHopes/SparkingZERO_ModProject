#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSSpecialGaugeSet.generated.h"

class USSSPGauge;
class USSSPGaugeMinusEf;
class USSSparkingGauge;

UCLASS(Blueprintable, EditInlineNew)
class USSSpecialGaugeSet : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSPGauge* SPGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSparkingGauge* SparkingGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSPGaugeMinusEf* MinusGauge;
    
public:
    USSSpecialGaugeSet();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormalStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormalFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeChargeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeChargeFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSSPGauge* GetSPGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSSparkingGauge* GetSparkingGauge();
    
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
    
};

