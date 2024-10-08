#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "SSMenuButton.h"
#include "SSMenuButtonItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonItem : public USSMenuButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    USSMenuButtonItem();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSelectMarking(bool bIsMark);
    

    // Fix for true pure virtual functions not being implemented
};

