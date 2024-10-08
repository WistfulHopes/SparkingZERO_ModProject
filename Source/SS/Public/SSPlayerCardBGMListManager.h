#pragma once
#include "CoreMinimal.h"
#include "SSPlayerCardListMenuManager.h"
#include "SSPlayerCardBGMListManager.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSPlayerCardBGMListManager : public USSPlayerCardListMenuManager {
    GENERATED_BODY()
public:
    USSPlayerCardBGMListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

