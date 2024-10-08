#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "OnOtherSpaceOverrapEventDelegate.h"
#include "KoratOtherSpaceTriggerVolume.generated.h"

UCLASS(Blueprintable)
class AKoratOtherSpaceTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOtherSpaceOverrapEvent OnKoratBeginOverrap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOtherSpaceOverrapEvent OnKoratEndOverrap;
    
    AKoratOtherSpaceTriggerVolume(const FObjectInitializer& ObjectInitializer);

};

