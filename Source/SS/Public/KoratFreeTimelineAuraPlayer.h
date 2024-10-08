#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelinePlayerBase.h"
#include "KoratFreeTimelineAuraPlayer.generated.h"

class ASSCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UKoratFreeTimelineAuraPlayer : public UKoratFreeTimelinePlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* OwnerCharacter;
    
public:
    UKoratFreeTimelineAuraPlayer();

};

