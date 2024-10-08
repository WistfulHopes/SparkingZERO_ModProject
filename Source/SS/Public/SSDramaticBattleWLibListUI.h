#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleListUIBase.h"
#include "SSDramaticBattleWLibListUI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleWLibListUI : public USSDramaticBattleListUIBase {
    GENERATED_BODY()
public:
    USSDramaticBattleWLibListUI();

protected:
    UFUNCTION()
    void OnWLibDataUpdate(bool bIsClear, const TArray<uint64>& InBattleId);
    
};

