#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticBattleWLibIdSearchMenu.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleWLibIdSearchMenu : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSDramaticBattleWLibIdSearchMenu();

private:
    UFUNCTION(BlueprintCallable)
    void ChangeListButtonContents(USSMenuButton* InHitButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

