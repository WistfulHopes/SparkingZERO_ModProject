#pragma once
#include "CoreMinimal.h"
#include "EKoratOperationGuideBlock.generated.h"

UENUM(BlueprintType)
enum class EKoratOperationGuideBlock : uint8 {
    None,
    Move,
    LongDistanceMove,
    AttackLongDistance,
    CloseMove,
    ProximityCombatives,
    Rush,
    LongDistanceCombatives,
    Defence,
    Counter,
    Skill,
    Pursuit,
    Technique,
    Sparking,
    StyleChange,
    Change,
    Impact,
    Appeal,
    Recommendation,
    Num,
};

