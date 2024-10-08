#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticDirectionTriggerList.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticDirectionTriggerList : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSDramaticDirectionTriggerList();

protected:
    UFUNCTION(BlueprintCallable)
    void SetTargetIcon(USSMenuButton* InHitButton, FName InWBP_Name, int32 InDataIndex, bool SecondFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetHitButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCountText(USSMenuButton* InHitButton, FName InWBP_Name, int32 Count, FName InWBP_Name2, FText Unit);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectPanel(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnPanelFocusChange(USSMenuButton* InHitButton);
    
};

