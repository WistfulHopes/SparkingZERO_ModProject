#pragma once
#include "CoreMinimal.h"
#include "ECameraLocatorTargetType.generated.h"

UENUM(BlueprintType)
enum class ECameraLocatorTargetType : uint8 {
    None,
    Player,
    Enemy,
    RebindSupporter0,
    RebindSupporter1,
    RebindSupporter2,
    RebindSupporter3,
    RebindSupporter4,
    RebindSupporter5,
    RebindSupporter6,
    RebindSupporter7,
    RebindSupporter8,
    RebindSupporter9,
    RebindEvent00,
    RebindEvent01,
    RebindEvent02,
    RebindEvent03,
    RebindEvent04,
    RebindEvent05,
    RebindEvent06,
    RebindEvent07,
    RebindEvent08,
    RebindEvent09,
    RebindMenu00,
    RebindMenu01,
    RebindMenu02,
    RebindMenu03,
    RebindMenu04,
    RebindMenu05,
    RebindMenu06,
    RebindMenu07,
    RebindMenu08,
    RebindMenu09,
    BlastImpactStart,
    BlastImpactEnd,
    MAX,
};

