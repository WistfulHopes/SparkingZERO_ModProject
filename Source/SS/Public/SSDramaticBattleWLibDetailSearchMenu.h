#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticBattleWLibDetailSearchMenu.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleWLibDetailSearchMenu : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSDramaticBattleWLibDetailSearchMenu();

private:
    UFUNCTION(BlueprintCallable)
    void ChangeListButtonContents(USSMenuButton* InHitButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

