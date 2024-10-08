#pragma once
#include "CoreMinimal.h"
#include "ESSBGMCategoryType.generated.h"

UENUM(BlueprintType)
enum class ESSBGMCategoryType : uint8 {
    None,
    BattleBGM,
    SparkingBGM,
    SynopsisBGM,
    JingleBGM,
    GalleryBGM,
    DramaticBattleBGM,
    StoryBGM,
};

