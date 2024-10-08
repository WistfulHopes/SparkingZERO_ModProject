#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSImpactBoostKey.generated.h"

class USSSwitchUI;

UCLASS(Blueprintable, EditInlineNew)
class USSImpactBoostKey : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> BoostText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSwitchUI* EffectWidget;
    
public:
    USSImpactBoostKey();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeyPressed();
    
};

