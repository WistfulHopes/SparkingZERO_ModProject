#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratInteractTriggerTypeGetter.h"
#include "KoratInteractActionTriggerGetter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKoratInteractActionTriggerGetter : public UKoratInteractTriggerTypeGetter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActionData;
    
    UKoratInteractActionTriggerGetter();

};

