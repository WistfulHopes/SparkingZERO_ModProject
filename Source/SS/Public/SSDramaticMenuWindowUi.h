#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticMenuWindowUi.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticMenuWindowUi : public USSMenuManager {
    GENERATED_BODY()
public:
    USSDramaticMenuWindowUi();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDecideMenuButton(USSMenuButton* InButton);
    
};

