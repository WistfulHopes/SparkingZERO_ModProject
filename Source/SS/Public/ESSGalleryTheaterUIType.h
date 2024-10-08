#pragma once
#include "CoreMinimal.h"
#include "ESSGalleryTheaterUIType.generated.h"

UENUM(BlueprintType)
enum class ESSGalleryTheaterUIType : uint8 {
    LeftTabBase,
    LeftTabReplay,
    LeftTabMovie,
    LeftTabBGM,
    RightWinBase,
    RightWinReplayList,
    RightWinMovieList,
    RightWinBGMList,
    MoviePlayer,
    BackGround,
    SortFilterDialog,
    Num,
};

