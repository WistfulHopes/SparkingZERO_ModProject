#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorSetData.h"
#include "KoratFreeTimelinePlaybckSettings.generated.h"

USTRUCT(BlueprintType)
struct FKoratFreeTimelinePlaybckSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetData OptionCharEffectColorDataSet;
    
    SS_API FKoratFreeTimelinePlaybckSettings();
};

