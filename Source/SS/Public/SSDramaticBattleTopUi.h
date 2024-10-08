#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticBattleTopUi.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleTopUi : public USSMenuManager {
    GENERATED_BODY()
public:
    USSDramaticBattleTopUi();

protected:
    UFUNCTION(BlueprintCallable)
    void BackButtonDecide();
    
};

