#pragma once
#include "CoreMinimal.h"
#include "ERootDirectorReconnectPriorityType.generated.h"

UENUM(BlueprintType)
enum class ERootDirectorReconnectPriorityType : uint8 {
    None,
    DownEnemyToPlayer,
    DownPlayerToEnemy,
    DownPlayerToPlayer,
    DownEnemyToEnemy,
    UpEnemyToPlayer,
    UpPlayerToEnemy,
    UpPlayerToPlayer,
    UpEnemyToEnemy,
    MAX,
};

