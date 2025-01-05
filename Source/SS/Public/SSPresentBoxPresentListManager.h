#pragma once
#include "CoreMinimal.h"
#include "SSPresentBoxListMenuManager.h"
#include "SSPresentBoxPresentListManager.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSPresentBoxPresentListManager : public USSPresentBoxListMenuManager {
    GENERATED_BODY()
public:
    USSPresentBoxPresentListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

