#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratInteractTriggerTypeDataList.h"
#include "KoratInteractTriggerTypeOverrideParamater.generated.h"

UCLASS(Blueprintable)
class UKoratInteractTriggerTypeOverrideParamater : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractTriggerTypeDataList OverrideTrigger;
    
public:
    UKoratInteractTriggerTypeOverrideParamater();

};

