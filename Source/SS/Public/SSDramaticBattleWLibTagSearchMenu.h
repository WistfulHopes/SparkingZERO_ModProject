#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticBattleWLibTagSearchMenu.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleWLibTagSearchMenu : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSDramaticBattleWLibTagSearchMenu();

private:
    UFUNCTION(BlueprintCallable)
    void ChangeTagButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

