#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSSwitchUI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSSwitchUI : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialAccept;
    
public:
    USSSwitchUI();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSwitchStarted(const bool bInOnOff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSwitchFinished(const bool bInOnOff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDisableInput();
    
};

