#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "KoratFreeTimelineLineTraceParam.h"
#include "KoratInteractHitInformationBase.h"
#include "KoratInternalLineTraceParameter.generated.h"

UCLASS(Blueprintable)
class UKoratInternalLineTraceParameter : public UKoratInteractHitInformationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineLineTraceParam ParameterValue;
    
    UKoratInternalLineTraceParameter();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPhysicalSurface> GetAttributePhysicalSurface() const;
    
};

