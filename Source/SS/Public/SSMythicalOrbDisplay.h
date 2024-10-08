#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSMythicalOrbDisplay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMythicalOrbDisplay : public USSUiWidget {
    GENERATED_BODY()
public:
    USSMythicalOrbDisplay();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePosessedOrbs(bool bComplete);
    
};

