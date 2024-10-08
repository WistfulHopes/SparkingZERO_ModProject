#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSImpactBoostStepUi.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class USSImpactBoostStepUi : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TWeakObjectPtr<UWidgetAnimation>> WidgetAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayAnimationName;
    
public:
    USSImpactBoostStepUi();

};

