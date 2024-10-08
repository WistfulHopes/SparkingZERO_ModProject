#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleSearchConditionExist.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleSearchConditionExist : uint8 {
    Invalid,
    None,
    Exist,
    NotExist,
};

