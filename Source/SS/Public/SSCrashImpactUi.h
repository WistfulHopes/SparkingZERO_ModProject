#pragma once
#include "CoreMinimal.h"
#include "ESSCrashImpactUiResult.h"
#include "SSUiWidget.h"
#include "SSCrashImpactUi.generated.h"

class USSDecideReactionUi;

UCLASS(Blueprintable, EditInlineNew)
class USSCrashImpactUi : public USSUiWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDecideReactionUi* PressButton;
    
public:
    USSCrashImpactUi();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResultCrashImpact(ESSCrashImpactUiResult InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideStartCrashImpact(ESSCrashImpactUiResult InResult);
    
};

