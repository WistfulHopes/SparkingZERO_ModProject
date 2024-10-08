#pragma once
#include "CoreMinimal.h"
#include "ESSPlayerCardUIType.generated.h"

UENUM(BlueprintType)
enum class ESSPlayerCardUIType : uint8 {
    PlayerCard,
    EditMenu,
    CharaList,
    CommonList,
    BGMList,
    TitleBase,
    IconTitleList,
    TextTitleList,
    BackGround,
    BGList,
    FollowRivalList,
    SortFilterDialog,
    Num,
};

