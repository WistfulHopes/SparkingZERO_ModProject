#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleConversationSetMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleConversationSetMode : uint8 {
    Normal,
    Random,
    Order,
};

