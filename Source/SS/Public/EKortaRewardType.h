#pragma once
#include "CoreMinimal.h"
#include "EKortaRewardType.generated.h"

UENUM(BlueprintType)
enum class EKortaRewardType : uint8 {
    None,
    RankPoint,
    Money,
    RewardPoint,
    ZItem,
    TextTitle,
    IconTitle,
    Character,
    MythicalOrb,
    MiracleOrb,
    EditPartsImage,
    EditPartsText,
    ZItemFrame,
    EmoteFrame,
};

