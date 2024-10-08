#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineAtbColliderParam.h"
#include "KoratInteractHitInformationBase.h"
#include "KoratInternalColliderParameter.generated.h"

UCLASS(Blueprintable)
class UKoratInternalColliderParameter : public UKoratInteractHitInformationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineAtbColliderParam ParameterValue;
    
    UKoratInternalColliderParameter();

};

