#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSOneShotUi.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSOneShotUi : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultIdleWaitSecond;
    
public:
    USSOneShotUi();

};

