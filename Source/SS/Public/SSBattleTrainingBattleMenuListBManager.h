#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSBattleTrainingBattleMenuListBManager.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingBattleMenuListBManager : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSBattleTrainingBattleMenuListBManager();

    UFUNCTION(BlueprintCallable)
    void SetHitButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

