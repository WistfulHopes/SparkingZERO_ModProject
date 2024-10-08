#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSOptionTipsManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSOptionTipsManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSOptionTipsManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBrightness_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBrightness_In();
    
};

