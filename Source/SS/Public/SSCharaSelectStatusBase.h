#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSCharaSelectStatusBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSCharaSelectStatusBase : public USSMenuManager {
    GENERATED_BODY()
public:
    USSCharaSelectStatusBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharaChange();
    
};

