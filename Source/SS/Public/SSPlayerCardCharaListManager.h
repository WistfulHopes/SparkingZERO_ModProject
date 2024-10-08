#pragma once
#include "CoreMinimal.h"
#include "SSPlayerCardListMenuManager.h"
#include "SSPlayerCardCharaListManager.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSPlayerCardCharaListManager : public USSPlayerCardListMenuManager {
    GENERATED_BODY()
public:
    USSPlayerCardCharaListManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

