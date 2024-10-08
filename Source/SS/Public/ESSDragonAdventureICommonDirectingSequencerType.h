#pragma once
#include "CoreMinimal.h"
#include "ESSDragonAdventureICommonDirectingSequencerType.generated.h"

UENUM(BlueprintType)
enum class ESSDragonAdventureICommonDirectingSequencerType : uint8 {
    None,
    ToChart,
    ToCharaSel,
    ToChartEf,
    ToCharaSelEf,
};

