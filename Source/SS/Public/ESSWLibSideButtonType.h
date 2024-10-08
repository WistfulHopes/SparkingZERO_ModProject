#pragma once
#include "CoreMinimal.h"
#include "ESSWLibSideButtonType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibSideButtonType : uint8 {
    None,
    Home,
    HomeTop,
    HomeDaily,
    HomeWeekly,
    HomeMonthly,
    HomeEvent,
    HomeSeason,
    HomeTotal,
    MyPage,
    MyPagePostedBattle,
    MyPageSavedReplay,
    MyPageFavorite,
    UserPosted,
    UserPostedBattle,
    UserPostedReplay,
    Search,
    SearchHitCount,
};

