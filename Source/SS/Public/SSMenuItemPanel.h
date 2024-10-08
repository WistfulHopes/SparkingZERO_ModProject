#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSMenuItemPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMenuItemPanel : public USSMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
public:
    USSMenuItemPanel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNormalShowStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNormalHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisableShowStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisableHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDisable();
    
};

