#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSDramaticEditDirectionPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEditDirectionPanel : public USSMenuButton {
    GENERATED_BODY()
public:
    USSDramaticEditDirectionPanel();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateDetailItems(int32 InDetailNum);
    
};

