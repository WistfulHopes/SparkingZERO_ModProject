#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticBattleExDetail.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleExDetail : public USSMenuManager {
    GENERATED_BODY()
public:
    USSDramaticBattleExDetail();

    UFUNCTION(BlueprintCallable)
    void DecideButton();
    
};

