#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticBattleTipsListUi.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class SS_API USSDramaticBattleTipsListUi : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSDramaticBattleTipsListUi();

private:
    UFUNCTION(BlueprintCallable)
    void ChangeTipsButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

