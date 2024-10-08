#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonTextItemEntry.h"
#include "SSMenuManager.h"
#include "SSOptionListNetworkManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSOptionListNetworkManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSOptionListNetworkManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangeValueOnlineCheckButton(const FSSMenuButtonTextItemEntry& InChangeItem);
    
};

