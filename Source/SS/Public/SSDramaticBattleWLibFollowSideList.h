#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticBattleWLibFollowSideList.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleWLibFollowSideList : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSDramaticBattleWLibFollowSideList();

private:
    UFUNCTION(BlueprintCallable)
    void ChangeListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

