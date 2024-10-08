#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSTimerUi.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTimerUi : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHurry;
    
public:
    USSTimerUi();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeHurry();
    
};

