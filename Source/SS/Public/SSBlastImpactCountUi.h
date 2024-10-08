#pragma once
#include "CoreMinimal.h"
#include "ESSBlastImpactCount.h"
#include "SSUiWidget.h"
#include "SSBlastImpactCountUi.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBlastImpactCountUi : public USSUiWidget {
    GENERATED_BODY()
public:
    USSBlastImpactCountUi();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeCount(ESSBlastImpactCount InCount);
    
};

