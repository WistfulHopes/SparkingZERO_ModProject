#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticSideCommonButtonSet.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticSideCommonButtonSet : public USSMenuManager {
    GENERATED_BODY()
public:
    USSDramaticSideCommonButtonSet();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateFocus(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateDecide(USSMenuButton* InButton);
    
};

