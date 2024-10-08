#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratActionDataList.h"
#include "KoratInteractActionTriggerParam.generated.h"

UCLASS(Blueprintable)
class UKoratInteractActionTriggerParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActionData;
    
    UKoratInteractActionTriggerParam();

};

