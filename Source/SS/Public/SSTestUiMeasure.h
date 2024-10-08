#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSTestUiMeasure.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTestUiMeasure : public USSUiWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerSecond;
    
    USSTestUiMeasure();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerElapsed();
    
};

