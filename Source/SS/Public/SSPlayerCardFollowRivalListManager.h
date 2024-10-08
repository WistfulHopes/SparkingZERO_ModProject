#pragma once
#include "CoreMinimal.h"
#include "SSPlayerCardListMenuManager.h"
#include "SSPlayerCardFollowRivalListManager.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSPlayerCardFollowRivalListManager : public USSPlayerCardListMenuManager {
    GENERATED_BODY()
public:
    USSPlayerCardFollowRivalListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

