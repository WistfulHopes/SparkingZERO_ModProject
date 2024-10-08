#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSSparkingGaugeOverEff.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSSparkingGaugeOverEff : public USSHUDWidget {
    GENERATED_BODY()
public:
    USSSparkingGaugeOverEff();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingZero();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingDeactive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingChargePause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSparkingActive();
    
};

