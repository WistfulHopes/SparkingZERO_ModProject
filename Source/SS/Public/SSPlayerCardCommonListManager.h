#pragma once
#include "CoreMinimal.h"
#include "SSPlayerCardListMenuManager.h"
#include "SSPlayerCardCommonListManager.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSPlayerCardCommonListManager : public USSPlayerCardListMenuManager {
    GENERATED_BODY()
public:
    USSPlayerCardCommonListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

