#pragma once
#include "CoreMinimal.h"
#include "SSPresentBoxListMenuManager.h"
#include "SSPresentBoxPresentHistoryListManager.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSPresentBoxPresentHistoryListManager : public USSPresentBoxListMenuManager {
    GENERATED_BODY()
public:
    USSPresentBoxPresentHistoryListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

