#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticDirectionEditUi.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticDirectionEditUi : public USSMenuViewScroll {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USSMenuButton> TriggerButton;
    
public:
    USSDramaticDirectionEditUi();

protected:
    UFUNCTION(BlueprintCallable)
    void SetHitButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerSelectPanel();
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerFocusedEnterButton();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectPanel(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedEnterButton(USSMenuButton* InButton);
    
};

