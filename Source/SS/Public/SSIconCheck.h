#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSIconCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSIconCheck : public USSUiWidget {
    GENERATED_BODY()
public:
    USSIconCheck();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeIconCheckOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeIconCheck();
    
};

