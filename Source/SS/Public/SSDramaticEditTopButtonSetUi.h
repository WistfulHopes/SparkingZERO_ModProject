#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticEditTopButtonSetUi.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEditTopButtonSetUi : public USSMenuManager {
    GENERATED_BODY()
public:
    USSDramaticEditTopButtonSetUi();

protected:
    UFUNCTION(BlueprintCallable)
    void DecideButton(USSMenuButton* InButton);
    
};

