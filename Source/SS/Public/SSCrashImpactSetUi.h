#pragma once
#include "CoreMinimal.h"
#include "ESSCrashImpactUiResult.h"
#include "SSImpactBaseUi.h"
#include "SSCrashImpactSetUi.generated.h"

class USSCrashImpactUi;

UCLASS(Blueprintable, EditInlineNew)
class USSCrashImpactSetUi : public USSImpactBaseUi {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSCrashImpactUi* CrashImpactUi;
    
public:
    USSCrashImpactSetUi();

protected:
    UFUNCTION(BlueprintCallable)
    void DebugResult(ESSCrashImpactUiResult InResult);
    
    UFUNCTION(BlueprintCallable)
    void DebugDecide(bool bIsSuccess);
    
};

