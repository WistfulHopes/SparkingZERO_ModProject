#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingListItemChangeType.h"
#include "SSMenuViewScroll.h"
#include "SSBattleTrainingListItemManager.generated.h"

class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingListItemManager : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSBattleTrainingListItemManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSRemoteButton* InButton, const int32 InDataIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSBattleTrainingListItemChangeType GetChangeType() const;
    
};

