#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSCrashGauge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSCrashGauge : public USSUiWidget {
    GENERATED_BODY()
public:
    USSCrashGauge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimeOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideFailed();
    
};

