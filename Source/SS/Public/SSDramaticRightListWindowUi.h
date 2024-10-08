#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticRightListWindowUi.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticRightListWindowUi : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSDramaticRightListWindowUi();

protected:
    UFUNCTION(BlueprintCallable)
    void SetHitButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideButton(USSMenuButton* InHitButton);
    
};

