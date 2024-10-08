#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSWmStampSelectManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSWmStampSelectManager : public USSMenuWidget {
    GENERATED_BODY()
public:
    USSWmStampSelectManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeActive();
    
    UFUNCTION(BlueprintCallable)
    void ChangeHide();
    
    UFUNCTION(BlueprintCallable)
    void ChangeActive();
    
};

