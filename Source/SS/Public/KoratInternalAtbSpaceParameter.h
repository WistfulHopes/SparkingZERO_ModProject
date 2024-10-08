#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineAtbSpaceParam.h"
#include "KoratInteractHitInformationBase.h"
#include "KoratInternalAtbSpaceParameter.generated.h"

UCLASS(Blueprintable)
class UKoratInternalAtbSpaceParameter : public UKoratInteractHitInformationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineAtbSpaceParam ParameterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsingHitInfoUniqueID;
    
    UKoratInternalAtbSpaceParameter();

};

